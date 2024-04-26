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

#include <alibabacloud/ecs/model/ModifyInvocationAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInvocationAttributeRequest;

ModifyInvocationAttributeRequest::ModifyInvocationAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInvocationAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInvocationAttributeRequest::~ModifyInvocationAttributeRequest() {}

long ModifyInvocationAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInvocationAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInvocationAttributeRequest::getCommandContent() const {
  return commandContent_;
}

void ModifyInvocationAttributeRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

std::string ModifyInvocationAttributeRequest::getFrequency() const {
  return frequency_;
}

void ModifyInvocationAttributeRequest::setFrequency(const std::string &frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), frequency);
}

std::string ModifyInvocationAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyInvocationAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInvocationAttributeRequest::getContentEncoding() const {
  return contentEncoding_;
}

void ModifyInvocationAttributeRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string ModifyInvocationAttributeRequest::getInvokeId() const {
  return invokeId_;
}

void ModifyInvocationAttributeRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string ModifyInvocationAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInvocationAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInvocationAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInvocationAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInvocationAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInvocationAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ModifyInvocationAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInvocationAttributeRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::map<std::string, std::string> ModifyInvocationAttributeRequest::getParameters() const {
  return parameters_;
}

void ModifyInvocationAttributeRequest::setParameters(std::map<std::string, std::string> parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

bool ModifyInvocationAttributeRequest::getEnableParameter() const {
  return enableParameter_;
}

void ModifyInvocationAttributeRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

