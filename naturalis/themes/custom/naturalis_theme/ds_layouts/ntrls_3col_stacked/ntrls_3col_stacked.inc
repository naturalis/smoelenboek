<?php
/**
 * @file
 * Definition of Naturalis Theme Three column stacked Display Suite layout.
 */

function ds_ntrls_3col_stacked() {
  return array(
    'label' => t('Naturalis Theme Three column stacked'),
    'regions' => array(
      'header' => t('Header'),
      'left' => t('Left'),
      'middle' => t('Middle'),
      'right' => t('Right'),
      'footer' => t('Footer'),
    ),
    'image' => TRUE,
  );
}
