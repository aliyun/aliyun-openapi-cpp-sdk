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

#include <alibabacloud/ess/model/DetachVServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::DetachVServerGroupsRequest;

DetachVServerGroupsRequest::DetachVServerGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DetachVServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

DetachVServerGroupsRequest::~DetachVServerGroupsRequest() {}

std::string DetachVServerGroupsRequest::getClientToken() const {
  return clientToken_;
}

void DetachVServerGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachVServerGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DetachVServerGroupsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DetachVServerGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachVServerGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DetachVServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void DetachVServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachVServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachVServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DetachVServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DetachVServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DetachVServerGroupsRequest::getForceDetach() const {
  return forceDetach_;
}

void DetachVServerGroupsRequest::setForceDetach(bool forceDetach) {
  forceDetach_ = forceDetach;
  setParameter(std::string("ForceDetach"), forceDetach ? "true" : "false");
}

std::vector<DetachVServerGroupsRequest::VServerGroup> DetachVServerGroupsRequest::getVServerGroup() const {
  return vServerGroup_;
}

void DetachVServerGroupsRequest::setVServerGroup(const std::vector<DetachVServerGroupsRequest::VServerGroup> &vServerGroup) {
  vServerGroup_ = vServerGroup;
  for(int dep1 = 0; dep1 != vServerGroup.size(); dep1++) {
  auto vServerGroupObj = vServerGroup.at(dep1);
  std::string vServerGroupObjStr = std::string("VServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(vServerGroupObjStr + ".LoadBalancerId", vServerGroupObj.loadBalancerId);
    for(int dep2 = 0; dep2 != vServerGroupObj.vServerGroupAttribute.size(); dep2++) {
    auto vServerGroupAttributeObj = vServerGroupObj.vServerGroupAttribute.at(dep2);
    std::string vServerGroupAttributeObjStr = vServerGroupObjStr + ".VServerGroupAttribute" + "." + std::to_string(dep2 + 1);
      setParameter(vServerGroupAttributeObjStr + ".VServerGroupId", vServerGroupAttributeObj.vServerGroupId);
      setParameter(vServerGroupAttributeObjStr + ".Port", std::to_string(vServerGroupAttributeObj.port));
    }
  }
}

