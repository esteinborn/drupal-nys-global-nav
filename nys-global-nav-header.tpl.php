<?php

/**
 * @file
 * New York State Global Navigation Header.
 *
 * See https://github.com/ny/global-navigation for documentation.
 *
 * Variables:
 * - none.
 *
 * @ingroup themeable
 */
?>
<div class="nys-global-header <?php print variable_get('nys_global_nav_header_format', ''); ?>">
  <div class="nav-toggle">
    <a href="#" role="button" id="nys-menu-control">Navigation menu</a>
  </div>
  <h1><a href="/">
  <?php print filter_xss(variable_get('nys_global_nav_agency_name', ''), array('br')); ?>
  </a></h1>
  <?php print theme('nys_global_nav_menu', array(
    'menu_name' => $header_menu_name,
    'id' => 'nys-global-nav',
    )
  ); ?>
  <?php print ''; ?>
</div>
