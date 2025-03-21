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

#include <alibabacloud/eiam/model/UpdateUserRequest.h>

using AlibabaCloud::Eiam::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateUser") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest() {}

std::string UpdateUserRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdateUserRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string UpdateUserRequest::getUserId() const {
  return userId_;
}

void UpdateUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateUserRequest::getPhoneRegion() const {
  return phoneRegion_;
}

void UpdateUserRequest::setPhoneRegion(const std::string &phoneRegion) {
  phoneRegion_ = phoneRegion;
  setParameter(std::string("PhoneRegion"), phoneRegion);
}

std::vector<UpdateUserRequest::CustomFields> UpdateUserRequest::getCustomFields() const {
  return customFields_;
}

void UpdateUserRequest::setCustomFields(const std::vector<UpdateUserRequest::CustomFields> &customFields) {
  customFields_ = customFields;
  for(int dep1 = 0; dep1 != customFields.size(); dep1++) {
    setParameter(std::string("CustomFields") + "." + std::to_string(dep1 + 1) + ".FieldName", customFields[dep1].fieldName);
    setParameter(std::string("CustomFields") + "." + std::to_string(dep1 + 1) + ".FieldValue", customFields[dep1].fieldValue);
    setParameter(std::string("CustomFields") + "." + std::to_string(dep1 + 1) + ".Operation", customFields[dep1].operation);
  }
}

bool UpdateUserRequest::getPhoneNumberVerified() const {
  return phoneNumberVerified_;
}

void UpdateUserRequest::setPhoneNumberVerified(bool phoneNumberVerified) {
  phoneNumberVerified_ = phoneNumberVerified;
  setParameter(std::string("PhoneNumberVerified"), phoneNumberVerified ? "true" : "false");
}

std::string UpdateUserRequest::getEmail() const {
  return email_;
}

void UpdateUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string UpdateUserRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateUserRequest::getDisplayName() const {
  return displayName_;
}

void UpdateUserRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string UpdateUserRequest::getUsername() const {
  return username_;
}

void UpdateUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

bool UpdateUserRequest::getEmailVerified() const {
  return emailVerified_;
}

void UpdateUserRequest::setEmailVerified(bool emailVerified) {
  emailVerified_ = emailVerified;
  setParameter(std::string("EmailVerified"), emailVerified ? "true" : "false");
}

