<?php

/**
 * @file
 * New York State Global Navigation Header.
 * See https://github.com/ny/global-navigation for documentation.
 *
 * Variables:
 * - none.
 *
 * @ingroup themeable
 */
?>
<div class="nys-global-header horizontal stacked">
  <div class="nav-toggle">
    <a href="#" role="button" id="nys-menu-control">Navigation menu</a>
  </div>
  <h1>Agency Name Goes Here -- <?php print variable_get('nys_global_nav_agency_color', '') ?></h1>
  <?php print theme('nys_global_nav_menu', array('menu_name' => $header_menu_name, 'id' => 'nys-global-nav',)); ?>
  <?php print ''; ?>
</div>