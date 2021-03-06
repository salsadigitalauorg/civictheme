<?php

/**
 * @file
 * CivicTheme Card container paragraph component.
 */

/**
 * Implements template_preprocess_paragraph().
 */
function civictheme_preprocess_paragraph__civictheme_card_container(&$variables) {
  /** @var \Drupal\paragraphs\Entity\Paragraph $paragraph */
  $paragraph = $variables['paragraph'];

  $variables['column_count'] = $paragraph->hasField('field_c_p_column_count') ? $paragraph->get('field_c_p_column_count')->getString() : '';

  $variables['fill_width'] = $paragraph->hasField('field_c_p_fill_width') ? (bool) $paragraph->get('field_c_p_fill_width')->getString() : FALSE;

  $header_link = ($paragraph->hasField('field_c_p_header_link') && !$paragraph->get('field_c_p_header_link')->isEmpty()) ? $paragraph->get('field_c_p_header_link')->first()->getValue() : [];
  $variables['header_link_text'] = $header_link['title'] ?? NULL;
  $variables['header_link_url'] = $header_link['uri'] ?? NULL;

  $footer_link = ($paragraph->hasField('field_c_p_footer_link') && !$paragraph->get('field_c_p_footer_link')->isEmpty()) ? $paragraph->get('field_c_p_footer_link')->first()->getValue() : [];
  $variables['footer_link_text'] = $footer_link['title'] ?? NULL;
  $variables['footer_link_url'] = $footer_link['uri'] ?? NULL;

  $variables['description'] = $paragraph->hasField('field_c_p_description') ? $paragraph->get('field_c_p_description')->getString() : FALSE;

  $variables['cards'] = array_filter($variables['content']['field_c_p_cards'], function ($key) {
    return is_numeric($key);
  }, ARRAY_FILTER_USE_KEY);
}
