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

#include <alibabacloud/mts/model/AddMediaWorkflowRequest.h>

using AlibabaCloud::Mts::Model::AddMediaWorkflowRequest;

AddMediaWorkflowRequest::AddMediaWorkflowRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddMediaWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

AddMediaWorkflowRequest::~AddMediaWorkflowRequest() {}

long AddMediaWorkflowRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddMediaWorkflowRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddMediaWorkflowRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddMediaWorkflowRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddMediaWorkflowRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddMediaWorkflowRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddMediaWorkflowRequest::getTopology() const {
  return topology_;
}

void AddMediaWorkflowRequest::setTopology(const std::string &topology) {
  topology_ = topology;
  setParameter(std::string("Topology"), topology);
}

std::string AddMediaWorkflowRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddMediaWorkflowRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddMediaWorkflowRequest::getOwnerId() const {
  return ownerId_;
}

void AddMediaWorkflowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddMediaWorkflowRequest::getTriggerMode() const {
  return triggerMode_;
}

void AddMediaWorkflowRequest::setTriggerMode(const std::string &triggerMode) {
  triggerMode_ = triggerMode;
  setParameter(std::string("TriggerMode"), triggerMode);
}

std::string AddMediaWorkflowRequest::getName() const {
  return name_;
}

void AddMediaWorkflowRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

