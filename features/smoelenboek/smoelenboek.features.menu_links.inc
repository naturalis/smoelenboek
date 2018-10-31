<?php
/**
 * @file
 * smoelenboek.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function smoelenboek_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ninfo:http://info.naturalis.nl
  $menu_links['main-menu_ninfo:http://info.naturalis.nl'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://info.naturalis.nl',
    'router_path' => '',
    'link_title' => 'N=Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ninfo:http://info.naturalis.nl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_nshare:http://share.naturalis.nl
  $menu_links['main-menu_nshare:http://share.naturalis.nl'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://share.naturalis.nl',
    'router_path' => '',
    'link_title' => 'N=Share',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_nshare:http://share.naturalis.nl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('N=Info');
  t('N=Share');


  return $menu_links;
}
