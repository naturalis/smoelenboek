<?php
/**
 * @file
 * naturalis_help.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naturalis_help_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function naturalis_help_node_info() {
  $items = array(
    'naturalis_help' => array(
      'name' => t('Naturalis Help Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
