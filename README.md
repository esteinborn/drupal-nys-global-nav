## Overview ##
All state of New York websites are required to have the Global Navigation
 (sometimes called Agency Navigation) bar at the top and bottom of the site
 surrounding any other
 content.  This module makes it easy to integrate them on a Drupal site.

## Requirements ##
- [Libraries](https://www.drupal.org/project/libraries) module.
- [NYS Global Navigation repository](https://github.com/ny/global-navigation)
  (for CSS, JS and fonts).

## Recommended Modules ##
- [Special Menu Items](https://www.drupal.org/project/special_menu_items)
  to enable adding menu items that don't have links (using the <nolink\>
  URL option).

## Restrictions ##
This Drupal module was developed for use by New York State agencies and entities
  for official New York State websites to be compliant per ITS mandate policy
  NYS-S05-001 ([https://www.its.ny.gov/document/state-common-web-banner](https://www.its.ny.gov/document/state-common-web-banner)).
  For use on other sites, please contact New York State Office of Information
  Services WebNY team at webnysupport@its.ny.gov for guidance. The CSS,
  JavaScript and fonts that make up the library used for this module can be
  found at [https://github.com/ny/global-navigation](https://github.com/ny/global-navigation).
  Because that repository contains fonts that are licensed only for use on
  New York State websites, it is not public.  If you need access to the
  repository, contact the WebNY team.

## Installation ##
- Install the module as usual, 
  see http://drupal.org/node/70151 for further information.
- Download the Global Navigation library from 
  [https://github.com/ny/global-navigation](https://github.com/ny/global-navigation)
  rename the directory from global-navigation-master to nys_global_nav and copy
  that directory into your /sites/all/libraries directory.  You've got the
  library installed correctly if you have the implementation markdown file at
  sites/all/libraries/nys_global_nav/IMPLEMENTATION.md. Because that repository
  contains fonts that are licensed only for use on New York State websites,
  it is not public.  If you need access to the repository, contact the
  WebNY team at webnysupport@its.ny.gov. 
- Enable the module.
- Go to Configuration >> User Interface >> NYS Global Navigation
  (/admin/config/user-interface/nys-global-nav) to configure the module.
  You can also reach the configuration page from the Configure link on the
  module page.
  *Note that if you don't configure the module, you'll only see the mobile
  "hamburger" menu.*
- It is **strongly** recommended that you install and enable the module
  [Special menu items](https://www.drupal.org/project/special_menu_items)
  (https://www.drupal.org/project/special_menu_items) to facilitate creating
  menus that are compatible with the Global Navigation click to open sub-menu
  items.
- The module will automatically insert the Global Navigation at the top
  and the Global Navigation footer at the bottom of your website's page;
  outside of any page HTML.  This is usually preferred for the horizontal
  agency navigation header format.  For the vertical agency navigation format
  you should disable the automatic insertion of  

## Credits ##
This project was sponsored by the New York State Office of Information
 Technology Services WebNY department.  Development team included Gregg
 Marshall, Eric Steinborn, Justin Winters, Adam Fasoldt, and Jason Cortes.


----------

For more information see DOCUMENTATION.md