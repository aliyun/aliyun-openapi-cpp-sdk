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

#include <alibabacloud/ess/model/SetInstanceHealthRequest.h>

using AlibabaCloud::Ess::Model::SetInstanceHealthRequest;

SetInstanceHealthRequest::SetInstanceHealthRequest()
    : RpcServiceRequest("ess", "2014-08-28", "SetInstanceHealth") {
  setMethod(HttpRequest::Method::Post);
}

SetInstanceHealthRequest::~SetInstanceHealthRequest() {}

std::string SetInstanceHealthRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetInstanceHealthRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetInstanceHealthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetInstanceHealthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SetInstanceHealthRequest::getOwnerId() const {
  return ownerId_;
}

void SetInstanceHealthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetInstanceHealthRequest::getInstanceId() const {
  return instanceId_;
}

void SetInstanceHealthRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SetInstanceHealthRequest::getHealthStatus() const {
  return healthStatus_;
}

void SetInstanceHealthRequest::setHealthStatus(const std::string &healthStatus) {
  healthStatus_ = healthStatus;
  setParameter(std::string("HealthStatus"), healthStatus);
}

