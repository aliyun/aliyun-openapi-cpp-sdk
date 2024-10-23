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

#include <alibabacloud/ims/model/UpdateUserRequest.h>

using AlibabaCloud::Ims::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest()
    : RpcServiceRequest("ims", "2019-08-15", "UpdateUser") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest() {}

std::string UpdateUserRequest::getNewMobilePhone() const {
  return newMobilePhone_;
}

void UpdateUserRequest::setNewMobilePhone(const std::string &newMobilePhone) {
  newMobilePhone_ = newMobilePhone;
  setParameter(std::string("NewMobilePhone"), newMobilePhone);
}

std::string UpdateUserRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void UpdateUserRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string UpdateUserRequest::getUserId() const {
  return userId_;
}

void UpdateUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateUserRequest::getNewEmail() const {
  return newEmail_;
}

void UpdateUserRequest::setNewEmail(const std::string &newEmail) {
  newEmail_ = newEmail;
  setParameter(std::string("NewEmail"), newEmail);
}

std::string UpdateUserRequest::getNewDisplayName() const {
  return newDisplayName_;
}

void UpdateUserRequest::setNewDisplayName(const std::string &newDisplayName) {
  newDisplayName_ = newDisplayName;
  setParameter(std::string("NewDisplayName"), newDisplayName);
}

std::string UpdateUserRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void UpdateUserRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

std::string UpdateUserRequest::getNewComments() const {
  return newComments_;
}

void UpdateUserRequest::setNewComments(const std::string &newComments) {
  newComments_ = newComments;
  setParameter(std::string("NewComments"), newComments);
}

std::string UpdateUserRequest::getNewUserPrincipalName() const {
  return newUserPrincipalName_;
}

void UpdateUserRequest::setNewUserPrincipalName(const std::string &newUserPrincipalName) {
  newUserPrincipalName_ = newUserPrincipalName;
  setParameter(std::string("NewUserPrincipalName"), newUserPrincipalName);
}

