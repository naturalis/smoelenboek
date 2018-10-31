<?php
/**
 * @file
 * naturalis_external_links_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function naturalis_external_links_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-naturalis-externe-links_naar-naturalisnl:http://www.naturalis.nl
  $menu_links['menu-naturalis-externe-links_naar-naturalisnl:http://www.naturalis.nl'] = array(
    'menu_name' => 'menu-naturalis-externe-links',
    'link_path' => 'http://www.naturalis.nl',
    'router_path' => '',
    'link_title' => 'Naar Naturalis.nl',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-naturalis-externe-links_naar-naturalisnl:http://www.naturalis.nl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Naar Naturalis.nl');


  return $menu_links;
}
