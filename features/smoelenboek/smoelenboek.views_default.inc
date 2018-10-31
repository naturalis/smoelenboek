<?php
/**
 * @file
 * smoelenboek.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smoelenboek_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'smoel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Smoel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Naturalis medewerkers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '<img src="/sites/default/files/smoelen/[field_photo]" class="smoel" />';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = 'Achternaam';
  /* Field: Content: givenname */
  $handler->display->display_options['fields']['field_givenname']['id'] = 'field_givenname';
  $handler->display->display_options['fields']['field_givenname']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['fields']['field_givenname']['field'] = 'field_givenname';
  $handler->display->display_options['fields']['field_givenname']['label'] = 'Voornaam';
  /* Field: Content: phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Telefoon';
  /* Field: Content: mobile */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['label'] = 'Mobiel';
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a>';
  /* Field: Content: functie */
  $handler->display->display_options['fields']['field_functie']['id'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['table'] = 'field_data_field_functie';
  $handler->display->display_options['fields']['field_functie']['field'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['label'] = 'Functie';
  $handler->display->display_options['fields']['field_functie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_functie']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_functie']['alter']['text'] = '<a href="/smoelen?combine=[field_functie]">[field_functie]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Functie';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print \'<a href="/smoelen?combine=\' . str_replace("&", "%26", $data->field_field_functie[0][\'raw\'][\'value\']) . \'">\'  . $data->field_field_functie[0][\'raw\'][\'value\'] . \'</a>\'; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: afdeling */
  $handler->display->display_options['fields']['field_afdeling']['id'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['table'] = 'field_data_field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['field'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['field_afdeling']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_afdeling']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_afdeling']['alter']['text'] = '<a href="/smoelen?combine=[field_afdeling]">[field_afdeling]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print \'<a href="/smoelen?combine=\' . str_replace("&", "%26", $data->field_field_afdeling[0][\'raw\'][\'value\']) . \'">\'  . $data->field_field_afdeling[0][\'raw\'][\'value\'] . \'</a>\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['label'] = 'Locatie';
  /* Field: Content: room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = 'Kamer';
  /* Field: Content: sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_sector']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['text'] = '<a href="/smoelen?combine=[field_sector]">[field_sector]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Sector';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
print \'<a href="/smoelen?combine=\' . str_replace("&", "%26", $data->field_field_sector[0][\'raw\'][\'value\']) . \'">\'  . $data->field_field_sector[0][\'raw\'][\'value\'] . \'</a>\'; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'smoel';
  $export['smoel'] = $view;

  $view = new view();
  $view->name = 'smoelen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Smoelen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Smoelen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_photo' => 'field_photo',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'field_givenname' => 'field_givenname',
    'field_surname' => 'field_surname',
    'field_afdeling' => 'field_afdeling',
    'field_email' => 'field_email',
    'field_functie' => 'field_functie',
    'field_locatie' => 'field_locatie',
    'field_phone' => 'field_phone',
    'field_room' => 'field_room',
    'field_sector' => 'field_sector',
    'field_web' => 'field_web',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_givenname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_afdeling' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_functie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sector' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_web' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Momenteel ziet u collega @start tot @end van @total<br />&nbsp;';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Helaas';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h1>Helaas</h1>
Uw zoekopdracht heeft geen enkele Naturalis medewerker gevonden terwijl we toch met zovelen zijn. <a href="/">Probeer het nog een keer</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/smoel/[nid]"><img src="/sites/default/files/smoelen/[field_photo]" class="smoelen" border="no" /></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Naam';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/smoel/[nid]">[title]</a>';
  /* Field: Content: givenname */
  $handler->display->display_options['fields']['field_givenname']['id'] = 'field_givenname';
  $handler->display->display_options['fields']['field_givenname']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['fields']['field_givenname']['field'] = 'field_givenname';
  $handler->display->display_options['fields']['field_givenname']['label'] = 'Voornaam';
  $handler->display->display_options['fields']['field_givenname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_givenname']['alter']['text'] = '<a href="/smoel/[nid]">[field_givenname]&nbsp;<i class="icon-arrow-right"></i></a>';
  /* Field: Content: surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = 'Achternaam';
  /* Field: Content: afdeling */
  $handler->display->display_options['fields']['field_afdeling']['id'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['table'] = 'field_data_field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['field'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['field_afdeling']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_afdeling']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_afdeling']['alter']['text'] = '<a href="/smoelen?combine=[field_afdeling]">[field_afdeling]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
echo "<a href=\'/smoelen?combine=" . str_replace("&", "%26", $data->field_data_field_afdeling_field_afdeling_value) . "\'>" . $data->field_data_field_afdeling_field_afdeling_value . "</a>"; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Email';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php 
echo "<a href=\'mailto:" . $data->field_data_field_email_field_email_value . "\'>" . $data->field_data_field_email_field_email_value . "</a>" ;
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a>';
  /* Field: Content: functie */
  $handler->display->display_options['fields']['field_functie']['id'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['table'] = 'field_data_field_functie';
  $handler->display->display_options['fields']['field_functie']['field'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['label'] = 'Functie';
  $handler->display->display_options['fields']['field_functie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_functie']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_functie']['alter']['text'] = '<a href="/smoelen?combine=[field_functie]">[field_functie]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Functie';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php 
echo "<a href=\'/smoelen?combine=" . str_replace("&", "%26", $data->field_data_field_functie_field_functie_value) . "\'>" . $data->field_data_field_functie_field_functie_value . "</a>"; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['label'] = 'Locatie';
  $handler->display->display_options['fields']['field_locatie']['exclude'] = TRUE;
  /* Field: Content: mobile */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['label'] = '';
  $handler->display->display_options['fields']['field_mobile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mobile']['alter']['text'] = '<img width="16px" src="/sites/default/files/mobile.png" />&nbsp;[field_mobile]';
  $handler->display->display_options['fields']['field_mobile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mobile']['type'] = 'text_plain';
  /* Field: Content: phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Telefoon/Mobiel';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<span><img width="16px" src="/sites/default/files/phone.png" />&nbsp;[field_phone]<br /></span>
[field_mobile]';
  /* Field: Content: room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = 'Kamer';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  /* Field: Content: sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_sector']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['text'] = '<a href="/smoelen?combine=[field_sector]">[field_sector]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Sector';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
echo "<a href=\'/smoelen?combine=" . str_replace("&", "%26", $data->field_data_field_sector_field_sector_value) . "\'>" . $data->field_data_field_sector_field_sector_value . "</a>"; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: web */
  $handler->display->display_options['fields']['field_web']['id'] = 'field_web';
  $handler->display->display_options['fields']['field_web']['table'] = 'field_data_field_web';
  $handler->display->display_options['fields']['field_web']['field'] = 'field_web';
  $handler->display->display_options['fields']['field_web']['label'] = 'Web';
  $handler->display->display_options['fields']['field_web']['exclude'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Vind je collega';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_givenname' => 'field_givenname',
    'field_surname' => 'field_surname',
    'field_afdeling' => 'field_afdeling',
    'field_email' => 'field_email',
    'field_functie' => 'field_functie',
    'field_locatie' => 'field_locatie',
    'field_phone' => 'field_phone',
    'field_room' => 'field_room',
    'field_sector' => 'field_sector',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'smoelen';
  $export['smoelen'] = $view;

  return $export;
}
