<?php
/**
 * @file
 * onboard_types.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function onboard_types_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'taxonomy_term:city:add user'
  $permissions['taxonomy_term:city:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:administer group'
  $permissions['taxonomy_term:city:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:approve and deny subscription'
  $permissions['taxonomy_term:city:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:create board content'
  $permissions['taxonomy_term:city:create board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:create board_term content'
  $permissions['taxonomy_term:city:create board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:create member content'
  $permissions['taxonomy_term:city:create member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete any board content'
  $permissions['taxonomy_term:city:delete any board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete any board_term content'
  $permissions['taxonomy_term:city:delete any board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete any member content'
  $permissions['taxonomy_term:city:delete any member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete own board content'
  $permissions['taxonomy_term:city:delete own board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete own board_term content'
  $permissions['taxonomy_term:city:delete own board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:delete own member content'
  $permissions['taxonomy_term:city:delete own member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:manage members'
  $permissions['taxonomy_term:city:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:manage permissions'
  $permissions['taxonomy_term:city:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:manage roles'
  $permissions['taxonomy_term:city:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish any board content'
  $permissions['taxonomy_term:city:publish any board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish any board_term content'
  $permissions['taxonomy_term:city:publish any board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish any member content'
  $permissions['taxonomy_term:city:publish any member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish editable board content'
  $permissions['taxonomy_term:city:publish editable board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish editable board_term content'
  $permissions['taxonomy_term:city:publish editable board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish editable member content'
  $permissions['taxonomy_term:city:publish editable member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish own board content'
  $permissions['taxonomy_term:city:publish own board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish own board_term content'
  $permissions['taxonomy_term:city:publish own board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:publish own member content'
  $permissions['taxonomy_term:city:publish own member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:subscribe'
  $permissions['taxonomy_term:city:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:subscribe without approval'
  $permissions['taxonomy_term:city:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish any board content'
  $permissions['taxonomy_term:city:unpublish any board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish any board_term content'
  $permissions['taxonomy_term:city:unpublish any board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish any member content'
  $permissions['taxonomy_term:city:unpublish any member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish editable board content'
  $permissions['taxonomy_term:city:unpublish editable board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish editable board_term content'
  $permissions['taxonomy_term:city:unpublish editable board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish editable member content'
  $permissions['taxonomy_term:city:unpublish editable member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish own board content'
  $permissions['taxonomy_term:city:unpublish own board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish own board_term content'
  $permissions['taxonomy_term:city:unpublish own board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unpublish own member content'
  $permissions['taxonomy_term:city:unpublish own member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:unsubscribe'
  $permissions['taxonomy_term:city:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update any board content'
  $permissions['taxonomy_term:city:update any board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update any board_term content'
  $permissions['taxonomy_term:city:update any board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update any member content'
  $permissions['taxonomy_term:city:update any member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_address field'
  $permissions['taxonomy_term:city:update field_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_application_action_title field'
  $permissions['taxonomy_term:city:update field_application_action_title field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_application_file field'
  $permissions['taxonomy_term:city:update field_application_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_application_process field'
  $permissions['taxonomy_term:city:update field_application_process field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_application_url field'
  $permissions['taxonomy_term:city:update field_application_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_board field'
  $permissions['taxonomy_term:city:update field_board field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_contact_email field'
  $permissions['taxonomy_term:city:update field_contact_email field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_contact_name field'
  $permissions['taxonomy_term:city:update field_contact_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_contact_phone field'
  $permissions['taxonomy_term:city:update field_contact_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_description field'
  $permissions['taxonomy_term:city:update field_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_meeting_location field'
  $permissions['taxonomy_term:city:update field_meeting_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_meeting_time field'
  $permissions['taxonomy_term:city:update field_meeting_time field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_member field'
  $permissions['taxonomy_term:city:update field_member field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update field_term_dates field'
  $permissions['taxonomy_term:city:update field_term_dates field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update group'
  $permissions['taxonomy_term:city:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update group_group field'
  $permissions['taxonomy_term:city:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update og_group_ref field'
  $permissions['taxonomy_term:city:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update og_user_taxonomy_term field'
  $permissions['taxonomy_term:city:update og_user_taxonomy_term field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'taxonomy_term:city:update own board content'
  $permissions['taxonomy_term:city:update own board content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update own board_term content'
  $permissions['taxonomy_term:city:update own board_term content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:update own member content'
  $permissions['taxonomy_term:city:update own member content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_address field'
  $permissions['taxonomy_term:city:view field_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_application_action_title field'
  $permissions['taxonomy_term:city:view field_application_action_title field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_application_file field'
  $permissions['taxonomy_term:city:view field_application_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_application_process field'
  $permissions['taxonomy_term:city:view field_application_process field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_application_url field'
  $permissions['taxonomy_term:city:view field_application_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_board field'
  $permissions['taxonomy_term:city:view field_board field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_contact_email field'
  $permissions['taxonomy_term:city:view field_contact_email field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_contact_name field'
  $permissions['taxonomy_term:city:view field_contact_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_contact_phone field'
  $permissions['taxonomy_term:city:view field_contact_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_description field'
  $permissions['taxonomy_term:city:view field_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_meeting_location field'
  $permissions['taxonomy_term:city:view field_meeting_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_meeting_time field'
  $permissions['taxonomy_term:city:view field_meeting_time field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_member field'
  $permissions['taxonomy_term:city:view field_member field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view field_term_dates field'
  $permissions['taxonomy_term:city:view field_term_dates field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view group_group field'
  $permissions['taxonomy_term:city:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view og_group_ref field'
  $permissions['taxonomy_term:city:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'clerk' => 'clerk',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'taxonomy_term:city:view og_user_taxonomy_term field'
  $permissions['taxonomy_term:city:view og_user_taxonomy_term field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
