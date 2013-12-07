core = 7.x

api = 2

; omega8.cc core
projects[drupal][type] = "core"
projects[drupal][download][type] = "get"
projects[drupal][download][url] = "http://files.aegir.cc/dev/drupal-7.24.1.tar.gz"

; Modules
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta4"

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[adminimal_admin_menu][subdir] = "contrib"
projects[adminimal_admin_menu][version] = "1.4"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.1"

projects[context][subdir] = "contrib"
projects[context][version] = "3.1"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.3"

projects[date][download][type] = "git"
projects[date][download][url] = "git://git.drupal.org/project/date.git"
projects[date][download][branch] = "7.x-2.x"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.2"

projects[entityreference][download][type] = "git"
projects[entityreference][download][url] = "git://git.drupal.org/project/entityreference.git"
projects[entityreference][download][branch] = "7.x-1.x"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.3"

projects[features][download][type] = "git"
projects[features][download][url] = "git://git.drupal.org/project/features.git"
projects[features][download][branch] = "7.x-2.x"
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[git_deploy][subdir] = "contrib"
projects[git_deploy][version] = "2.x-dev"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.4"

projects[link][subdir] = "contrib"
projects[link][version] = "1.2"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[publishcontent][subdir] = "contrib"
projects[publishcontent][version] = "1.2"

projects[services][subdir] = "contrib"
projects[services][version] = "3.5"

projects[services_views][subdir] = "contrib"
projects[services_views][version] = "1.0-beta2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[og][subdir] = "contrib"
projects[og][version] = "2.4"

; Themes

projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][download][type] = "git"
projects[adminimal_theme][download][url] = "git://git.drupal.org/project/adminimal_theme.git"
projects[adminimal_theme][download][branch] = "7.x-1.x"
