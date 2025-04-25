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

#include <alibabacloud/ess/model/EnterStandbyRequest.h>

using AlibabaCloud::Ess::Model::EnterStandbyRequest;

EnterStandbyRequest::EnterStandbyRequest()
    : RpcServiceRequest("ess", "2014-08-28", "EnterStandby") {
  setMethod(HttpRequest::Method::Post);
}

EnterStandbyRequest::~EnterStandbyRequest() {}

std::string EnterStandbyRequest::getClientToken() const {
  return clientToken_;
}

void EnterStandbyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnterStandbyRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void EnterStandbyRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string EnterStandbyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EnterStandbyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string EnterStandbyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnterStandbyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long EnterStandbyRequest::getOwnerId() const {
  return ownerId_;
}

void EnterStandbyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool EnterStandbyRequest::getAsync() const {
  return async_;
}

void EnterStandbyRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

std::vector<std::string> EnterStandbyRequest::getInstanceId() const {
  return instanceId_;
}

void EnterStandbyRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

