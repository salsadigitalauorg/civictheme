<?php

/**
 * @file
 * Secondary navigation block theme alterations.
 */

use Drupal\block\Entity\Block;

/**
 * Implements template_preprocess_block__HOOK().
 */
function civictheme_preprocess_block__menu_block__civictheme_secondary_navigation(&$variables) {
  $variables['theme'] = theme_get_setting('civictheme_header_theme') ?? 'light';
  $variables['items'] = $variables['content']['#items'] ?? [];
  $variables['title'] = $variables['configuration']['label_display'] ? $variables['configuration']['label'] : '';

  _civictheme_preprocess_menu_items($variables['items']);

  $block = Block::load($variables['elements']['#id']);
  $region = $block->getRegion();

  if (strpos($region, 'header') === 0) {
    $variables['modifier_class'] = 'civictheme-justify-content-end';
  }

  if (strpos($region, 'sidebar') === 0) {
    $variables['in_sidebar'] = TRUE;
  }
}
