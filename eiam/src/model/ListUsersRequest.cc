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

#include <alibabacloud/eiam/model/ListUsersRequest.h>

using AlibabaCloud::Eiam::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListUsersRequest::~ListUsersRequest() {}

std::string ListUsersRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ListUsersRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ListUsersRequest::getPhoneRegion() const {
  return phoneRegion_;
}

void ListUsersRequest::setPhoneRegion(const std::string &phoneRegion) {
  phoneRegion_ = phoneRegion;
  setParameter(std::string("PhoneRegion"), phoneRegion);
}

long ListUsersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListUsersRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListUsersRequest::getUsernameStartsWith() const {
  return usernameStartsWith_;
}

void ListUsersRequest::setUsernameStartsWith(const std::string &usernameStartsWith) {
  usernameStartsWith_ = usernameStartsWith;
  setParameter(std::string("UsernameStartsWith"), usernameStartsWith);
}

std::string ListUsersRequest::getUserSourceType() const {
  return userSourceType_;
}

void ListUsersRequest::setUserSourceType(const std::string &userSourceType) {
  userSourceType_ = userSourceType;
  setParameter(std::string("UserSourceType"), userSourceType);
}

long ListUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListUsersRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListUsersRequest::getLocked() const {
  return locked_;
}

void ListUsersRequest::setLocked(bool locked) {
  locked_ = locked;
  setParameter(std::string("Locked"), locked ? "true" : "false");
}

std::string ListUsersRequest::getEmail() const {
  return email_;
}

void ListUsersRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string ListUsersRequest::getUserExternalId() const {
  return userExternalId_;
}

void ListUsersRequest::setUserExternalId(const std::string &userExternalId) {
  userExternalId_ = userExternalId;
  setParameter(std::string("UserExternalId"), userExternalId);
}

std::string ListUsersRequest::getDisplayNameStartsWith() const {
  return displayNameStartsWith_;
}

void ListUsersRequest::setDisplayNameStartsWith(const std::string &displayNameStartsWith) {
  displayNameStartsWith_ = displayNameStartsWith;
  setParameter(std::string("DisplayNameStartsWith"), displayNameStartsWith);
}

std::string ListUsersRequest::getInstanceId() const {
  return instanceId_;
}

void ListUsersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<ListUsersRequest::std::string> ListUsersRequest::getUserIds() const {
  return userIds_;
}

void ListUsersRequest::setUserIds(const std::vector<ListUsersRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

std::string ListUsersRequest::getDisplayName() const {
  return displayName_;
}

void ListUsersRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string ListUsersRequest::getUserSourceId() const {
  return userSourceId_;
}

void ListUsersRequest::setUserSourceId(const std::string &userSourceId) {
  userSourceId_ = userSourceId;
  setParameter(std::string("UserSourceId"), userSourceId);
}

std::string ListUsersRequest::getOrganizationalUnitId() const {
  return organizationalUnitId_;
}

void ListUsersRequest::setOrganizationalUnitId(const std::string &organizationalUnitId) {
  organizationalUnitId_ = organizationalUnitId;
  setParameter(std::string("OrganizationalUnitId"), organizationalUnitId);
}

std::string ListUsersRequest::getUsername() const {
  return username_;
}

void ListUsersRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string ListUsersRequest::getStatus() const {
  return status_;
}

void ListUsersRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

