<?php

/**
 * @file
 * New York State Global Navigation module configuration page.
 * Functions that are only called on the admin pages.
 */

/**
 * NYS Global Navigation module settings form.
 */
function nys_global_nav_admin_settings() {
  $form['nys_global_nav_agency_color'] = _nys_global_nav_agency_color_field();
  $form['nys_global_nav_header_menu'] = _nys_global_nav_header_menu_field();
  return system_settings_form($form);
}

/**
 * NYS Global Navigation agency grouping color field.
 * @return
 * Array with form API element for field.
 */
function _nys_global_nav_agency_color_field(){
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
  return array(
    '#type' => 'select',
    '#title' => t('Agency Grouping Color'),
    '#options' => $agency_groupings,
    '#default_value' => variable_get('nys_global_nav_agency_color', ''),
    '#multiple' => FALSE,
    '#empty_option' => 'None',
    '#empty_value' => '',
    '#description' => t('Select which agency grouping color to use for the global navigation header/footer.'),
  );
}
/**
 * NYS Global Navigation header menu selection field.
 * @return
 * Array with form API element for field.
 */
function _nys_global_nav_header_menu_field(){
  $menu_list = menu_get_menus(TRUE);
  return array(
    '#type' => 'select',
    '#title' => t('Global navigation header menu'),
    '#options' => $menu_list,
    '#default_value' => variable_get('nys_global_nav_header_menu', ''),
    '#multiple' => FALSE,
    '#empty_option' => 'None',
    '#empty_value' => '',
    '#description' => t('Select which menu to use in the global header.  Depending on formatting option selected, the number of first level items might be limited.'),
  );
}