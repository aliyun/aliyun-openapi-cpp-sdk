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

#include <alibabacloud/r-kvstore/model/ModifyInstanceConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceConfigRequest;

ModifyInstanceConfigRequest::ModifyInstanceConfigRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceConfigRequest::~ModifyInstanceConfigRequest() {}

long ModifyInstanceConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceConfigRequest::getParamSemisyncReplTimeout() const {
  return paramSemisyncReplTimeout_;
}

void ModifyInstanceConfigRequest::setParamSemisyncReplTimeout(const std::string &paramSemisyncReplTimeout) {
  paramSemisyncReplTimeout_ = paramSemisyncReplTimeout;
  setParameter(std::string("ParamSemisyncReplTimeout"), paramSemisyncReplTimeout);
}

std::string ModifyInstanceConfigRequest::getParamNoLooseSentinelPasswordFreeCommands() const {
  return paramNoLooseSentinelPasswordFreeCommands_;
}

void ModifyInstanceConfigRequest::setParamNoLooseSentinelPasswordFreeCommands(const std::string &paramNoLooseSentinelPasswordFreeCommands) {
  paramNoLooseSentinelPasswordFreeCommands_ = paramNoLooseSentinelPasswordFreeCommands;
  setParameter(std::string("ParamNoLooseSentinelPasswordFreeCommands"), paramNoLooseSentinelPasswordFreeCommands);
}

std::string ModifyInstanceConfigRequest::getParamNoLooseSentinelPasswordFreeAccess() const {
  return paramNoLooseSentinelPasswordFreeAccess_;
}

void ModifyInstanceConfigRequest::setParamNoLooseSentinelPasswordFreeAccess(const std::string &paramNoLooseSentinelPasswordFreeAccess) {
  paramNoLooseSentinelPasswordFreeAccess_ = paramNoLooseSentinelPasswordFreeAccess;
  setParameter(std::string("ParamNoLooseSentinelPasswordFreeAccess"), paramNoLooseSentinelPasswordFreeAccess);
}

std::string ModifyInstanceConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceConfigRequest::getParamReplMode() const {
  return paramReplMode_;
}

void ModifyInstanceConfigRequest::setParamReplMode(const std::string &paramReplMode) {
  paramReplMode_ = paramReplMode;
  setParameter(std::string("ParamReplMode"), paramReplMode);
}

std::string ModifyInstanceConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceConfigRequest::getParamNoLooseSentinelEnabled() const {
  return paramNoLooseSentinelEnabled_;
}

void ModifyInstanceConfigRequest::setParamNoLooseSentinelEnabled(const std::string &paramNoLooseSentinelEnabled) {
  paramNoLooseSentinelEnabled_ = paramNoLooseSentinelEnabled;
  setParameter(std::string("ParamNoLooseSentinelEnabled"), paramNoLooseSentinelEnabled);
}

std::string ModifyInstanceConfigRequest::getProduct() const {
  return product_;
}

void ModifyInstanceConfigRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string ModifyInstanceConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceConfigRequest::getParamSentinelCompatEnable() const {
  return paramSentinelCompatEnable_;
}

void ModifyInstanceConfigRequest::setParamSentinelCompatEnable(const std::string &paramSentinelCompatEnable) {
  paramSentinelCompatEnable_ = paramSentinelCompatEnable;
  setParameter(std::string("ParamSentinelCompatEnable"), paramSentinelCompatEnable);
}

long ModifyInstanceConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceConfigRequest::getCategory() const {
  return category_;
}

void ModifyInstanceConfigRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string ModifyInstanceConfigRequest::getConfig() const {
  return config_;
}

void ModifyInstanceConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

