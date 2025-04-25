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

#include <alibabacloud/ess/model/DetachAlbServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::DetachAlbServerGroupsRequest;

DetachAlbServerGroupsRequest::DetachAlbServerGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DetachAlbServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

DetachAlbServerGroupsRequest::~DetachAlbServerGroupsRequest() {}

std::string DetachAlbServerGroupsRequest::getClientToken() const {
  return clientToken_;
}

void DetachAlbServerGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachAlbServerGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DetachAlbServerGroupsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DetachAlbServerGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachAlbServerGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DetachAlbServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void DetachAlbServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachAlbServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachAlbServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DetachAlbServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DetachAlbServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DetachAlbServerGroupsRequest::AlbServerGroup> DetachAlbServerGroupsRequest::getAlbServerGroup() const {
  return albServerGroup_;
}

void DetachAlbServerGroupsRequest::setAlbServerGroup(const std::vector<DetachAlbServerGroupsRequest::AlbServerGroup> &albServerGroup) {
  albServerGroup_ = albServerGroup;
  for(int dep1 = 0; dep1 != albServerGroup.size(); dep1++) {
  auto albServerGroupObj = albServerGroup.at(dep1);
  std::string albServerGroupObjStr = std::string("AlbServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(albServerGroupObjStr + ".AlbServerGroupId", albServerGroupObj.albServerGroupId);
    setParameter(albServerGroupObjStr + ".Port", std::to_string(albServerGroupObj.port));
  }
}

bool DetachAlbServerGroupsRequest::getForceDetach() const {
  return forceDetach_;
}

void DetachAlbServerGroupsRequest::setForceDetach(bool forceDetach) {
  forceDetach_ = forceDetach;
  setParameter(std::string("ForceDetach"), forceDetach ? "true" : "false");
}

