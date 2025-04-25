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

#include <alibabacloud/ess/model/AttachAlbServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::AttachAlbServerGroupsRequest;

AttachAlbServerGroupsRequest::AttachAlbServerGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "AttachAlbServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

AttachAlbServerGroupsRequest::~AttachAlbServerGroupsRequest() {}

std::string AttachAlbServerGroupsRequest::getClientToken() const {
  return clientToken_;
}

void AttachAlbServerGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachAlbServerGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void AttachAlbServerGroupsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

bool AttachAlbServerGroupsRequest::getForceAttach() const {
  return forceAttach_;
}

void AttachAlbServerGroupsRequest::setForceAttach(bool forceAttach) {
  forceAttach_ = forceAttach;
  setParameter(std::string("ForceAttach"), forceAttach ? "true" : "false");
}

std::string AttachAlbServerGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachAlbServerGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AttachAlbServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void AttachAlbServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachAlbServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachAlbServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AttachAlbServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void AttachAlbServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<AttachAlbServerGroupsRequest::AlbServerGroup> AttachAlbServerGroupsRequest::getAlbServerGroup() const {
  return albServerGroup_;
}

void AttachAlbServerGroupsRequest::setAlbServerGroup(const std::vector<AttachAlbServerGroupsRequest::AlbServerGroup> &albServerGroup) {
  albServerGroup_ = albServerGroup;
  for(int dep1 = 0; dep1 != albServerGroup.size(); dep1++) {
  auto albServerGroupObj = albServerGroup.at(dep1);
  std::string albServerGroupObjStr = std::string("AlbServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(albServerGroupObjStr + ".AlbServerGroupId", albServerGroupObj.albServerGroupId);
    setParameter(albServerGroupObjStr + ".Port", std::to_string(albServerGroupObj.port));
    setParameter(albServerGroupObjStr + ".Weight", std::to_string(albServerGroupObj.weight));
  }
}

