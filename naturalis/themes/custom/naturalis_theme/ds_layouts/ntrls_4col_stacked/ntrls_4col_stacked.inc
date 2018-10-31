<?php
/**
 * @file
 * Definition of Naturalis Theme Four column stacked Display Suite layout.
 */

function ds_ntrls_4col_stacked() {
  return array(
    'label' => t('Naturalis Theme Four column stacked'),
    'regions' => array(
      'header' => t('Header'),
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
      'fourth' => t('Fourth'),
      'footer' => t('Footer'),
    ),
    'image' => TRUE,
  );
}
