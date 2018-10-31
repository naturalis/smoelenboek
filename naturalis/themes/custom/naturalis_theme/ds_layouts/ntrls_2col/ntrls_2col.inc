<?php
/**
 * @file
 * Definition of Naturalis Theme Two column Display Suite layout.
 */

function ds_ntrls_2col() {
  return array(
    'label' => t('Naturalis Theme Two column'),
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    'image' => TRUE,
  );
}
