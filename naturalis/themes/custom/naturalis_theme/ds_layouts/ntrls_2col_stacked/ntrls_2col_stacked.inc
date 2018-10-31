<?php
/**
 * @file
 * Definition of Naturalis Theme Two column stacked Display Suite layout.
 */

function ds_ntrls_2col_stacked() {
  return array(
    'label' => t('Naturalis Theme Two column stacked'),
    'regions' => array(
      'header' => t('Header'),
      'left' => t('Left'),
      'right' => t('Right'),
      'footer' => t('Footer'),
    ),
    'image' => TRUE,
  );
}
