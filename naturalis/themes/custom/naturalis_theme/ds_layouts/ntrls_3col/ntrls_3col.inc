<?php
/**
 * @file
 * Definition of Naturalis Theme Three column Display Suite layout.
 */

function ds_ntrls_3col() {
  return array(
    'label' => t('Naturalis Theme Three column'),
    'regions' => array(
      'left' => t('Left'),
      'middle' => t('Middle'),
      'right' => t('Right'),
    ),
    'image' => TRUE,
  );
}
