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

#include <alibabacloud/cloudapi/model/SetAccessControlListAttributeRequest.h>

using AlibabaCloud::CloudAPI::Model::SetAccessControlListAttributeRequest;

SetAccessControlListAttributeRequest::SetAccessControlListAttributeRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "SetAccessControlListAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetAccessControlListAttributeRequest::~SetAccessControlListAttributeRequest() {}

std::string SetAccessControlListAttributeRequest::getAclId() const {
  return aclId_;
}

void SetAccessControlListAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string SetAccessControlListAttributeRequest::getAclName() const {
  return aclName_;
}

void SetAccessControlListAttributeRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string SetAccessControlListAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetAccessControlListAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetAccessControlListAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void SetAccessControlListAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

