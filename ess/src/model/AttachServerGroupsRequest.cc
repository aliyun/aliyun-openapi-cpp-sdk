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

#include <alibabacloud/ess/model/AttachServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::AttachServerGroupsRequest;

AttachServerGroupsRequest::AttachServerGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "AttachServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

AttachServerGroupsRequest::~AttachServerGroupsRequest() {}

std::string AttachServerGroupsRequest::getClientToken() const {
  return clientToken_;
}

void AttachServerGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachServerGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void AttachServerGroupsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

bool AttachServerGroupsRequest::getForceAttach() const {
  return forceAttach_;
}

void AttachServerGroupsRequest::setForceAttach(bool forceAttach) {
  forceAttach_ = forceAttach;
  setParameter(std::string("ForceAttach"), forceAttach ? "true" : "false");
}

std::string AttachServerGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachServerGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AttachServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void AttachServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<AttachServerGroupsRequest::ServerGroup> AttachServerGroupsRequest::getServerGroup() const {
  return serverGroup_;
}

void AttachServerGroupsRequest::setServerGroup(const std::vector<AttachServerGroupsRequest::ServerGroup> &serverGroup) {
  serverGroup_ = serverGroup;
  for(int dep1 = 0; dep1 != serverGroup.size(); dep1++) {
  auto serverGroupObj = serverGroup.at(dep1);
  std::string serverGroupObjStr = std::string("ServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(serverGroupObjStr + ".ServerGroupId", serverGroupObj.serverGroupId);
    setParameter(serverGroupObjStr + ".Port", std::to_string(serverGroupObj.port));
    setParameter(serverGroupObjStr + ".Weight", std::to_string(serverGroupObj.weight));
    setParameter(serverGroupObjStr + ".Type", serverGroupObj.type);
  }
}

std::string AttachServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AttachServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void AttachServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

