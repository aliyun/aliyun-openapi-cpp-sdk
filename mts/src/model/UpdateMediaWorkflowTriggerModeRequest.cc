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

#include <alibabacloud/mts/model/UpdateMediaWorkflowTriggerModeRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaWorkflowTriggerModeRequest;

UpdateMediaWorkflowTriggerModeRequest::UpdateMediaWorkflowTriggerModeRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMediaWorkflowTriggerMode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaWorkflowTriggerModeRequest::~UpdateMediaWorkflowTriggerModeRequest() {}

long UpdateMediaWorkflowTriggerModeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMediaWorkflowTriggerModeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMediaWorkflowTriggerModeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMediaWorkflowTriggerModeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateMediaWorkflowTriggerModeRequest::getMediaWorkflowId() const {
  return mediaWorkflowId_;
}

void UpdateMediaWorkflowTriggerModeRequest::setMediaWorkflowId(const std::string &mediaWorkflowId) {
  mediaWorkflowId_ = mediaWorkflowId;
  setParameter(std::string("MediaWorkflowId"), mediaWorkflowId);
}

std::string UpdateMediaWorkflowTriggerModeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMediaWorkflowTriggerModeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMediaWorkflowTriggerModeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMediaWorkflowTriggerModeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMediaWorkflowTriggerModeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMediaWorkflowTriggerModeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMediaWorkflowTriggerModeRequest::getTriggerMode() const {
  return triggerMode_;
}

void UpdateMediaWorkflowTriggerModeRequest::setTriggerMode(const std::string &triggerMode) {
  triggerMode_ = triggerMode;
  setParameter(std::string("TriggerMode"), triggerMode);
}

