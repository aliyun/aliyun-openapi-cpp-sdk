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

#include <alibabacloud/cloudapi/model/RemoveAccessControlListEntryRequest.h>

using AlibabaCloud::CloudAPI::Model::RemoveAccessControlListEntryRequest;

RemoveAccessControlListEntryRequest::RemoveAccessControlListEntryRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "RemoveAccessControlListEntry") {
  setMethod(HttpRequest::Method::Post);
}

RemoveAccessControlListEntryRequest::~RemoveAccessControlListEntryRequest() {}

std::string RemoveAccessControlListEntryRequest::getAclId() const {
  return aclId_;
}

void RemoveAccessControlListEntryRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string RemoveAccessControlListEntryRequest::getAclEntrys() const {
  return aclEntrys_;
}

void RemoveAccessControlListEntryRequest::setAclEntrys(const std::string &aclEntrys) {
  aclEntrys_ = aclEntrys;
  setParameter(std::string("AclEntrys"), aclEntrys);
}

std::string RemoveAccessControlListEntryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveAccessControlListEntryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveAccessControlListEntryRequest::getSecurityToken() const {
  return securityToken_;
}

void RemoveAccessControlListEntryRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

