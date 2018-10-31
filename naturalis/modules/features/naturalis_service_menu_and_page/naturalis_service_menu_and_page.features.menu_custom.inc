<?php
/**
 * @file
 * naturalis_service_menu_and_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function naturalis_service_menu_and_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-naturalis-service-menu.
  $menus['menu-naturalis-service-menu'] = array(
    'menu_name' => 'menu-naturalis-service-menu',
    'title' => 'Naturalis Service Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Naturalis Service Menu');


  return $menus;
}
