<?php
/**
 * @file
 * Definition of Naturalis Theme Three row Display Suite layout.
 */

function ds_ntrls_3row() {
  return array(
    'label' => t('Naturalis Theme Three row'),
    'regions' => array(
      'header' => t('Header'),
      'ds_content' => t('Content'),
      'footer' => t('Footer'),
    ),
    'image' => TRUE,
  );
}
