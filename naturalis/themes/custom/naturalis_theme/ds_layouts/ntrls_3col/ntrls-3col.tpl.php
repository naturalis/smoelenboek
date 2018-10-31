<?php
/**
 * @file
 * Template for Naturalis Theme Three column Display Suite layout.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ntrls-3col row <?php print $classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $left_wrapper ?> class="show-for-medium-up medium-3 columns group-left<?php print $left_classes; ?>">
  <?php print $left; ?>
  </<?php print $left_wrapper ?>>

  <<?php print $middle_wrapper ?> class="small-12 medium-6 columns group-middle<?php print $middle_classes;?>">
  <?php print $middle; ?>
  </<?php print $middle_wrapper ?>>

  <<?php print $right_wrapper ?> class="show-for-medium-up medium-3 columns  group-right<?php print $right_classes; ?>">
  <?php print $right; ?>
  </<?php print $right_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
