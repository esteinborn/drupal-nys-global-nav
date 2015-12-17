<?php

/**
 * @file
 * Functions that are only called on the admin pages.
 */

/**
 * Module settings form.
 */
function nys_global_nav_admin_settings() {
  $agency_groupings = array(
    'administration' => 'Administration',
    'business' => 'Business',
    'education' => 'Education',
    'health-and-human-services' => 'Health and Human Services',
    'local-and-regional-authorities' => 'Local and Regional authorities',
    'public-safety' => 'Public Safety',
    'recreation-and-environment' => 'Recreation and Environment',
    'statewide-elected-officials' => 'Statewide Elected Officials',
    'transportation-and-utilities' => 'Transportation and Utilities',
  );
  $form['nys_global_nav_agency_color'] = array(
    '#type' => 'select',
    '#title' => t('Agency Grouping Color'),
    '#options' => $agency_groupings,
    '#default_value' => variable_get('nys_global_nav_agency_color', 'administration'),
    '#multiple' => FALSE,
    '#empty_option' => 'None',
    '#empty_value' => '',
    '#description' => t('Select which menu to use in the global header to display.  Depending on formatting option selected, the number of first level items might be limited.'),
  );
  $menu_list = menu_get_menus(TRUE);
  $form['nys_global_nav_header_menu'] = array(
    '#type' => 'select',
    '#title' => t('Global navigation header menu'),
    '#options' => $menu_list,
    '#default_value' => variable_get('nys_global_nav_header_menu', 'main-menu'),
    '#multiple' => FALSE,
    '#empty_option' => 'None',
    '#empty_value' => '',
    '#description' => t('Select which menu to use in the global header.  Depending on formatting option selected, the number of first level items might be limited.'),
  );
  return system_settings_form($form);
}
