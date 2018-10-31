<?php
/**
 * @file
 * naturalis_service_menu_and_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naturalis_service_menu_and_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function naturalis_service_menu_and_page_node_info() {
  $items = array(
    'naturalis_service_menu_page' => array(
      'name' => t('Naturalis  Service Menu Page'),
      'base' => 'node_content',
      'description' => t('Adds a page that will referenced to from the Service Menu in the Naturlis Bottom Bar. Typically: colofon, disclaimer, '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
