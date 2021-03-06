<?php

/**
 * @file
 * CivicTheme promo paragraph component.
 */

use Drupal\Component\Utility\UrlHelper;
use Drupal\Core\Url;

/**
 * Implements template_preprocess_paragraph().
 */
function civictheme_preprocess_paragraph__civictheme_promo(&$variables) {
  _civictheme_preprocess_paragraph__field__theme($variables);
  _civictheme_preprocess_paragraph__field__title($variables);

  /** @var \Drupal\paragraphs\Entity\Paragraph $paragraph */
  $paragraph = $variables['paragraph'];
  $link = ($paragraph->hasField('field_c_p_link') && !$paragraph->get('field_c_p_link')->isEmpty()) ? $paragraph->get('field_c_p_link')->first()->getValue() : [];
  if (!empty($link['uri'])) {
    $variables['link'] = [
      'text' => $link['title'] ?? '',
      'url' => Url::fromUri($link['uri'])->toString(),
      'is_new_window' => UrlHelper::isExternal($link['uri']),
    ];
  }
  if ($paragraph->hasField('field_c_p_summary') && !$paragraph->get('field_c_p_title')->isEmpty()) {
    $variables['content'] = $paragraph->get('field_c_p_summary')->getString();
  }
}
