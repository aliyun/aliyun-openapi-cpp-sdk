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

#include <alibabacloud/cloudapi/model/DisableInstanceAccessControlRequest.h>

using AlibabaCloud::CloudAPI::Model::DisableInstanceAccessControlRequest;

DisableInstanceAccessControlRequest::DisableInstanceAccessControlRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DisableInstanceAccessControl") {
  setMethod(HttpRequest::Method::Post);
}

DisableInstanceAccessControlRequest::~DisableInstanceAccessControlRequest() {}

std::string DisableInstanceAccessControlRequest::getAclId() const {
  return aclId_;
}

void DisableInstanceAccessControlRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DisableInstanceAccessControlRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void DisableInstanceAccessControlRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setParameter(std::string("AddressIPVersion"), addressIPVersion);
}

std::string DisableInstanceAccessControlRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DisableInstanceAccessControlRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DisableInstanceAccessControlRequest::getInstanceId() const {
  return instanceId_;
}

void DisableInstanceAccessControlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DisableInstanceAccessControlRequest::getSecurityToken() const {
  return securityToken_;
}

void DisableInstanceAccessControlRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

