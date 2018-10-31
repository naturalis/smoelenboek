<?php
/**
 * @file
 * Definition of Naturalis Theme Four column Display Suite layout.
 */

function ds_ntrls_4col() {
  return array(
    'label' => t('Naturalis Theme Four column'),
    'regions' => array(
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
      'fourth' => t('Fourth'),
    ),
    'image' => TRUE,
  );
}
