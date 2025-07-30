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

#include <alibabacloud/r-kvstore/model/ModifyInstanceParameterRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceParameterRequest;

ModifyInstanceParameterRequest::ModifyInstanceParameterRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceParameter") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceParameterRequest::~ModifyInstanceParameterRequest() {}

long ModifyInstanceParameterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceParameterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceParameterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceParameterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceParameterRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void ModifyInstanceParameterRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string ModifyInstanceParameterRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceParameterRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceParameterRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceParameterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceParameterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceParameterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceParameterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceParameterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceParameterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceParameterRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceParameterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceParameterRequest::getParameters() const {
  return parameters_;
}

void ModifyInstanceParameterRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

