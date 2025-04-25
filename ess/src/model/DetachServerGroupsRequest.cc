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

#include <alibabacloud/ess/model/DetachServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::DetachServerGroupsRequest;

DetachServerGroupsRequest::DetachServerGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DetachServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

DetachServerGroupsRequest::~DetachServerGroupsRequest() {}

std::string DetachServerGroupsRequest::getClientToken() const {
  return clientToken_;
}

void DetachServerGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachServerGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DetachServerGroupsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DetachServerGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachServerGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DetachServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void DetachServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DetachServerGroupsRequest::ServerGroup> DetachServerGroupsRequest::getServerGroup() const {
  return serverGroup_;
}

void DetachServerGroupsRequest::setServerGroup(const std::vector<DetachServerGroupsRequest::ServerGroup> &serverGroup) {
  serverGroup_ = serverGroup;
  for(int dep1 = 0; dep1 != serverGroup.size(); dep1++) {
  auto serverGroupObj = serverGroup.at(dep1);
  std::string serverGroupObjStr = std::string("ServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(serverGroupObjStr + ".ServerGroupId", serverGroupObj.serverGroupId);
    setParameter(serverGroupObjStr + ".Port", std::to_string(serverGroupObj.port));
    setParameter(serverGroupObjStr + ".Type", serverGroupObj.type);
  }
}

std::string DetachServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DetachServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DetachServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DetachServerGroupsRequest::getForceDetach() const {
  return forceDetach_;
}

void DetachServerGroupsRequest::setForceDetach(bool forceDetach) {
  forceDetach_ = forceDetach;
  setParameter(std::string("ForceDetach"), forceDetach ? "true" : "false");
}

