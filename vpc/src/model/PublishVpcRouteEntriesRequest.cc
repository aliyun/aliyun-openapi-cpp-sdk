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

#include <alibabacloud/vpc/model/PublishVpcRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::PublishVpcRouteEntriesRequest;

PublishVpcRouteEntriesRequest::PublishVpcRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "PublishVpcRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

PublishVpcRouteEntriesRequest::~PublishVpcRouteEntriesRequest() {}

long PublishVpcRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PublishVpcRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PublishVpcRouteEntriesRequest::getTargetType() const {
  return targetType_;
}

void PublishVpcRouteEntriesRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string PublishVpcRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void PublishVpcRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool PublishVpcRouteEntriesRequest::getDryRun() const {
  return dryRun_;
}

void PublishVpcRouteEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string PublishVpcRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PublishVpcRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PublishVpcRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PublishVpcRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long PublishVpcRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void PublishVpcRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PublishVpcRouteEntriesRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void PublishVpcRouteEntriesRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

std::vector<PublishVpcRouteEntriesRequest::RouteEntries> PublishVpcRouteEntriesRequest::getRouteEntries() const {
  return routeEntries_;
}

void PublishVpcRouteEntriesRequest::setRouteEntries(const std::vector<PublishVpcRouteEntriesRequest::RouteEntries> &routeEntries) {
  routeEntries_ = routeEntries;
  for(int dep1 = 0; dep1 != routeEntries.size(); dep1++) {
  auto routeEntriesObj = routeEntries.at(dep1);
  std::string routeEntriesObjStr = std::string("RouteEntries") + "." + std::to_string(dep1 + 1);
    setParameter(routeEntriesObjStr + ".RouteTableId", routeEntriesObj.routeTableId);
    setParameter(routeEntriesObjStr + ".DestinationCidrBlock", routeEntriesObj.destinationCidrBlock);
  }
}

