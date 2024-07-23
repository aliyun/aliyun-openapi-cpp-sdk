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

#include <alibabacloud/mts/model/UpdateMediaWorkflowRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaWorkflowRequest;

UpdateMediaWorkflowRequest::UpdateMediaWorkflowRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMediaWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaWorkflowRequest::~UpdateMediaWorkflowRequest() {}

long UpdateMediaWorkflowRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMediaWorkflowRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMediaWorkflowRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMediaWorkflowRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateMediaWorkflowRequest::getMediaWorkflowId() const {
  return mediaWorkflowId_;
}

void UpdateMediaWorkflowRequest::setMediaWorkflowId(const std::string &mediaWorkflowId) {
  mediaWorkflowId_ = mediaWorkflowId;
  setParameter(std::string("MediaWorkflowId"), mediaWorkflowId);
}

std::string UpdateMediaWorkflowRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMediaWorkflowRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMediaWorkflowRequest::getTopology() const {
  return topology_;
}

void UpdateMediaWorkflowRequest::setTopology(const std::string &topology) {
  topology_ = topology;
  setParameter(std::string("Topology"), topology);
}

std::string UpdateMediaWorkflowRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMediaWorkflowRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMediaWorkflowRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMediaWorkflowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMediaWorkflowRequest::getTriggerMode() const {
  return triggerMode_;
}

void UpdateMediaWorkflowRequest::setTriggerMode(const std::string &triggerMode) {
  triggerMode_ = triggerMode;
  setParameter(std::string("TriggerMode"), triggerMode);
}

std::string UpdateMediaWorkflowRequest::getName() const {
  return name_;
}

void UpdateMediaWorkflowRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

