## Overview ##
All state of New York websites are required to have the Global Navigation
 (sometimes called Agency Navigation) bar at the top and bottom of the site
 surrounding any other
 content.  This module makes it easy to integrate them on a Drupal site.

## Installation ##
- Install the module as usual, 
  see http://drupal.org/node/70151 for further information.
- Download the Global Navigation library from 
  [https://github.com/ny/global-navigation](https://github.com/ny/global-navigation)
  rename the directory from global-navigation-master to nys_global_nav and copy
  that directory into your /sites/all/libraries directory.  You've got the
  library installed correctly if you have the implementation markdown file at
  sites/all/libraries/nys_global_nav/IMPLEMENTATION.md
- Enable the module.
- Go to Configuration >> User Interface >> NYS Global Navigation
  (/admin/config/user-interface/nys-global-nav) to configure the module.
  *Note that if you don't configure the module, you'll only see the mobile
  "hamburger" menu.*
- The module will automatically insert the Global Navigation at the top
  and the Global Navigation footer at the bottom of your website's page;
  outside of any page HTML.  This is usually preferred for the horizontal
  agency navigation header format.  For the vertical agency navigation 
