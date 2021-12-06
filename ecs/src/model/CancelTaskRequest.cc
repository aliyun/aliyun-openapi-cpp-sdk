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

#include <alibabacloud/ecs/model/CancelTaskRequest.h>

using AlibabaCloud::Ecs::Model::CancelTaskRequest;

CancelTaskRequest::CancelTaskRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CancelTask") {
  setMethod(HttpRequest::Method::Post);
}

CancelTaskRequest::~CancelTaskRequest() {}

long CancelTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelTaskRequest::getRegionId() const {
  return regionId_;
}

void CancelTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CancelTaskRequest::getTaskId() const {
  return taskId_;
}

void CancelTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string CancelTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CancelTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CancelTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

