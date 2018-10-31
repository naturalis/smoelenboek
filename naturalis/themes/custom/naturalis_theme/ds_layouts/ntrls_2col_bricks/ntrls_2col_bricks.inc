<?php
/**
 * @file
 * Definition of Naturalis Theme Two column bricks Display Suite layout.
 */

function ds_ntrls_2col_bricks() {
  return array(
    'label' => t('Naturalis Theme Two column bricks'),
    'regions' => array(
      'top' => t('Top'),
      'above_left' => t('Above Left'),
      'above_right' => t('Above Right'),
      'middle' => t('Middle'),
      'below_left' => t('Below Left'),
      'below_right' => t('Below Right'),
      'bottom' => t('Bottom'),
    ),
    'image' => TRUE,
  );
}
