<?php
/**
 * @file
 * naturalis_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naturalis_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function naturalis_page_node_info() {
  $items = array(
    'naturalis_page' => array(
      'name' => t('Naturalis  Basic Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Paginatitel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
