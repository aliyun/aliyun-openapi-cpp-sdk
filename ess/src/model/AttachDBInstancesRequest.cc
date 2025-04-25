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

#include <alibabacloud/ess/model/AttachDBInstancesRequest.h>

using AlibabaCloud::Ess::Model::AttachDBInstancesRequest;

AttachDBInstancesRequest::AttachDBInstancesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "AttachDBInstances") {
  setMethod(HttpRequest::Method::Post);
}

AttachDBInstancesRequest::~AttachDBInstancesRequest() {}

std::string AttachDBInstancesRequest::getClientToken() const {
  return clientToken_;
}

void AttachDBInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachDBInstancesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void AttachDBInstancesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

bool AttachDBInstancesRequest::getForceAttach() const {
  return forceAttach_;
}

void AttachDBInstancesRequest::setForceAttach(bool forceAttach) {
  forceAttach_ = forceAttach;
  setParameter(std::string("ForceAttach"), forceAttach ? "true" : "false");
}

std::string AttachDBInstancesRequest::getType() const {
  return type_;
}

void AttachDBInstancesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AttachDBInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachDBInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AttachDBInstancesRequest::getRegionId() const {
  return regionId_;
}

void AttachDBInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachDBInstancesRequest::getAttachMode() const {
  return attachMode_;
}

void AttachDBInstancesRequest::setAttachMode(const std::string &attachMode) {
  attachMode_ = attachMode;
  setParameter(std::string("AttachMode"), attachMode);
}

std::string AttachDBInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachDBInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::vector<std::string> AttachDBInstancesRequest::getDBInstance() const {
  return dBInstance_;
}

void AttachDBInstancesRequest::setDBInstance(const std::vector<std::string> &dBInstance) {
  dBInstance_ = dBInstance;
}

long AttachDBInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void AttachDBInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

