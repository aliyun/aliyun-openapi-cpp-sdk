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

#include <alibabacloud/ram/model/UpdateUserRequest.h>

using AlibabaCloud::Ram::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest()
    : RpcServiceRequest("ram", "2015-05-01", "UpdateUser") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest() {}

std::string UpdateUserRequest::getNewUserName() const {
  return newUserName_;
}

void UpdateUserRequest::setNewUserName(const std::string &newUserName) {
  newUserName_ = newUserName;
  setParameter(std::string("NewUserName"), newUserName);
}

std::string UpdateUserRequest::getNewMobilePhone() const {
  return newMobilePhone_;
}

void UpdateUserRequest::setNewMobilePhone(const std::string &newMobilePhone) {
  newMobilePhone_ = newMobilePhone;
  setParameter(std::string("NewMobilePhone"), newMobilePhone);
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

std::string UpdateUserRequest::getNewComments() const {
  return newComments_;
}

void UpdateUserRequest::setNewComments(const std::string &newComments) {
  newComments_ = newComments;
  setParameter(std::string("NewComments"), newComments);
}

std::string UpdateUserRequest::getUserName() const {
  return userName_;
}

void UpdateUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

