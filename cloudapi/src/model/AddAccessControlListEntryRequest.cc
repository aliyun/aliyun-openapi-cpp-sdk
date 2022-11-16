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

#include <alibabacloud/cloudapi/model/AddAccessControlListEntryRequest.h>

using AlibabaCloud::CloudAPI::Model::AddAccessControlListEntryRequest;

AddAccessControlListEntryRequest::AddAccessControlListEntryRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "AddAccessControlListEntry") {
  setMethod(HttpRequest::Method::Post);
}

AddAccessControlListEntryRequest::~AddAccessControlListEntryRequest() {}

std::string AddAccessControlListEntryRequest::getAclId() const {
  return aclId_;
}

void AddAccessControlListEntryRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string AddAccessControlListEntryRequest::getAclEntrys() const {
  return aclEntrys_;
}

void AddAccessControlListEntryRequest::setAclEntrys(const std::string &aclEntrys) {
  aclEntrys_ = aclEntrys;
  setParameter(std::string("AclEntrys"), aclEntrys);
}

std::string AddAccessControlListEntryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddAccessControlListEntryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddAccessControlListEntryRequest::getSecurityToken() const {
  return securityToken_;
}

void AddAccessControlListEntryRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

