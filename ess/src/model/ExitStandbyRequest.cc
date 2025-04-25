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

#include <alibabacloud/ess/model/ExitStandbyRequest.h>

using AlibabaCloud::Ess::Model::ExitStandbyRequest;

ExitStandbyRequest::ExitStandbyRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ExitStandby") {
  setMethod(HttpRequest::Method::Post);
}

ExitStandbyRequest::~ExitStandbyRequest() {}

std::string ExitStandbyRequest::getClientToken() const {
  return clientToken_;
}

void ExitStandbyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ExitStandbyRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void ExitStandbyRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string ExitStandbyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ExitStandbyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ExitStandbyRequest::getRegionId() const {
  return regionId_;
}

void ExitStandbyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExitStandbyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ExitStandbyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ExitStandbyRequest::getOwnerId() const {
  return ownerId_;
}

void ExitStandbyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ExitStandbyRequest::getAsync() const {
  return async_;
}

void ExitStandbyRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

std::vector<std::string> ExitStandbyRequest::getInstanceId() const {
  return instanceId_;
}

void ExitStandbyRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

