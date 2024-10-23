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

#include <alibabacloud/ims/model/CreateUserRequest.h>

using AlibabaCloud::Ims::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest()
    : RpcServiceRequest("ims", "2019-08-15", "CreateUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest() {}

std::string CreateUserRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void CreateUserRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string CreateUserRequest::getExternalId() const {
  return externalId_;
}

void CreateUserRequest::setExternalId(const std::string &externalId) {
  externalId_ = externalId;
  setParameter(std::string("ExternalId"), externalId);
}

std::string CreateUserRequest::getMobilePhone() const {
  return mobilePhone_;
}

void CreateUserRequest::setMobilePhone(const std::string &mobilePhone) {
  mobilePhone_ = mobilePhone;
  setParameter(std::string("MobilePhone"), mobilePhone);
}

std::vector<CreateUserRequest::Tag> CreateUserRequest::getTag() const {
  return tag_;
}

void CreateUserRequest::setTag(const std::vector<CreateUserRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateUserRequest::getEmail() const {
  return email_;
}

void CreateUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateUserRequest::getComments() const {
  return comments_;
}

void CreateUserRequest::setComments(const std::string &comments) {
  comments_ = comments;
  setParameter(std::string("Comments"), comments);
}

std::string CreateUserRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void CreateUserRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

std::string CreateUserRequest::getDisplayName() const {
  return displayName_;
}

void CreateUserRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

