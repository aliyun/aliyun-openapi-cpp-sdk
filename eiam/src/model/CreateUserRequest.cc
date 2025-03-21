/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/eiam/model/CreateUserRequest.h>

using AlibabaCloud::Eiam::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest() {}

std::string CreateUserRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void CreateUserRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string CreateUserRequest::getDescription() const {
  return description_;
}

void CreateUserRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateUserRequest::getPhoneRegion() const {
  return phoneRegion_;
}

void CreateUserRequest::setPhoneRegion(const std::string &phoneRegion) {
  phoneRegion_ = phoneRegion;
  setParameter(std::string("PhoneRegion"), phoneRegion);
}

std::vector<CreateUserRequest::CustomFields> CreateUserRequest::getCustomFields() const {
  return customFields_;
}

void CreateUserRequest::setCustomFields(const std::vector<CreateUserRequest::CustomFields> &customFields) {
  customFields_ = customFields;
  for(int dep1 = 0; dep1 != customFields.size(); dep1++) {
    setParameter(std::string("CustomFields") + "." + std::to_string(dep1 + 1) + ".FieldName", customFields[dep1].fieldName);
    setParameter(std::string("CustomFields") + "." + std::to_string(dep1 + 1) + ".FieldValue", customFields[dep1].fieldValue);
  }
}

std::string CreateUserRequest::getPassword() const {
  return password_;
}

void CreateUserRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

CreateUserRequest::PasswordInitializationConfig CreateUserRequest::getPasswordInitializationConfig() const {
  return passwordInitializationConfig_;
}

void CreateUserRequest::setPasswordInitializationConfig(const CreateUserRequest::PasswordInitializationConfig &passwordInitializationConfig) {
  passwordInitializationConfig_ = passwordInitializationConfig;
  for(int dep1 = 0; dep1 != passwordInitializationConfig.userNotificationChannels.size(); dep1++) {
    setParameter(std::string("PasswordInitializationConfig") + ".UserNotificationChannels." + std::to_string(dep1 + 1), passwordInitializationConfig.userNotificationChannels[dep1]);
  }
  setParameter(std::string("PasswordInitializationConfig") + ".PasswordInitializationPolicyPriority", passwordInitializationConfig.passwordInitializationPolicyPriority);
  setParameter(std::string("PasswordInitializationConfig") + ".PasswordForcedUpdateStatus", passwordInitializationConfig.passwordForcedUpdateStatus);
  setParameter(std::string("PasswordInitializationConfig") + ".PasswordInitializationType", passwordInitializationConfig.passwordInitializationType);
}

bool CreateUserRequest::getPhoneNumberVerified() const {
  return phoneNumberVerified_;
}

void CreateUserRequest::setPhoneNumberVerified(bool phoneNumberVerified) {
  phoneNumberVerified_ = phoneNumberVerified;
  setParameter(std::string("PhoneNumberVerified"), phoneNumberVerified ? "true" : "false");
}

std::string CreateUserRequest::getEmail() const {
  return email_;
}

void CreateUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateUserRequest::getPrimaryOrganizationalUnitId() const {
  return primaryOrganizationalUnitId_;
}

void CreateUserRequest::setPrimaryOrganizationalUnitId(const std::string &primaryOrganizationalUnitId) {
  primaryOrganizationalUnitId_ = primaryOrganizationalUnitId;
  setParameter(std::string("PrimaryOrganizationalUnitId"), primaryOrganizationalUnitId);
}

std::vector<CreateUserRequest::std::string> CreateUserRequest::getOrganizationalUnitIds() const {
  return organizationalUnitIds_;
}

void CreateUserRequest::setOrganizationalUnitIds(const std::vector<CreateUserRequest::std::string> &organizationalUnitIds) {
  organizationalUnitIds_ = organizationalUnitIds;
  for(int dep1 = 0; dep1 != organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("OrganizationalUnitIds") + "." + std::to_string(dep1 + 1), organizationalUnitIds[dep1]);
  }
}

std::string CreateUserRequest::getUserExternalId() const {
  return userExternalId_;
}

void CreateUserRequest::setUserExternalId(const std::string &userExternalId) {
  userExternalId_ = userExternalId;
  setParameter(std::string("UserExternalId"), userExternalId);
}

std::string CreateUserRequest::getInstanceId() const {
  return instanceId_;
}

void CreateUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateUserRequest::getDisplayName() const {
  return displayName_;
}

void CreateUserRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateUserRequest::getUsername() const {
  return username_;
}

void CreateUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

bool CreateUserRequest::getEmailVerified() const {
  return emailVerified_;
}

void CreateUserRequest::setEmailVerified(bool emailVerified) {
  emailVerified_ = emailVerified;
  setParameter(std::string("EmailVerified"), emailVerified ? "true" : "false");
}

