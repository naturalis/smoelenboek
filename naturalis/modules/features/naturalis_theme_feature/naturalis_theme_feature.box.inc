<?php
/**
 * @file
 * naturalis_theme_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function naturalis_theme_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'naturalis_logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Naturalis Logo';
  $box->options = array(
    'body' => array(
      'value' => '<p><img id="logo-large" src="/profiles/naturalis/themes/custom/naturalis_theme/images/naturalis/logo-large-black.png" /></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['naturalis_logo'] = $box;

  return $export;
}
