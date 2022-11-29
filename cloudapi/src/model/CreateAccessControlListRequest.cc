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

#include <alibabacloud/cloudapi/model/CreateAccessControlListRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateAccessControlListRequest;

CreateAccessControlListRequest::CreateAccessControlListRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateAccessControlList") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccessControlListRequest::~CreateAccessControlListRequest() {}

std::string CreateAccessControlListRequest::getAclName() const {
  return aclName_;
}

void CreateAccessControlListRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string CreateAccessControlListRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void CreateAccessControlListRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setParameter(std::string("AddressIPVersion"), addressIPVersion);
}

std::string CreateAccessControlListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAccessControlListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAccessControlListRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateAccessControlListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

