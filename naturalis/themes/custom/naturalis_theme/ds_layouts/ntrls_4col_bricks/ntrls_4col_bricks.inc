<?php
/**
 * @file
 * Definition of Naturalis Theme Four column bricks Display Suite layout.
 */

function ds_ntrls_4col_bricks() {
  return array(
    'label' => t('Naturalis Theme Four column bricks'),
    'regions' => array(
      'top' => t('Top'),
      'above_first' => t('Above First'),
      'above_second' => t('Above Second'),
      'above_third' => t('Above Third'),
      'above_fourth' => t('Above Fourth'),
      'middle' => t('Middle'),
      'below_first' => t('Below First'),
      'below_second' => t('Below Second'),
      'below_third' => t('Below Third'),
      'below_fourth' => t('Below Fourth'),
      'bottom' => t('Bottom'),
    ),
    'image' => TRUE,
  );
}
