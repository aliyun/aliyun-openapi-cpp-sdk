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

#include <alibabacloud/vpc/model/WithdrawVpcPublishedRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::WithdrawVpcPublishedRouteEntriesRequest;

WithdrawVpcPublishedRouteEntriesRequest::WithdrawVpcPublishedRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "WithdrawVpcPublishedRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

WithdrawVpcPublishedRouteEntriesRequest::~WithdrawVpcPublishedRouteEntriesRequest() {}

long WithdrawVpcPublishedRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string WithdrawVpcPublishedRouteEntriesRequest::getTargetType() const {
  return targetType_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string WithdrawVpcPublishedRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool WithdrawVpcPublishedRouteEntriesRequest::getDryRun() const {
  return dryRun_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string WithdrawVpcPublishedRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string WithdrawVpcPublishedRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long WithdrawVpcPublishedRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string WithdrawVpcPublishedRouteEntriesRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

std::vector<WithdrawVpcPublishedRouteEntriesRequest::RouteEntries> WithdrawVpcPublishedRouteEntriesRequest::getRouteEntries() const {
  return routeEntries_;
}

void WithdrawVpcPublishedRouteEntriesRequest::setRouteEntries(const std::vector<WithdrawVpcPublishedRouteEntriesRequest::RouteEntries> &routeEntries) {
  routeEntries_ = routeEntries;
  for(int dep1 = 0; dep1 != routeEntries.size(); dep1++) {
  auto routeEntriesObj = routeEntries.at(dep1);
  std::string routeEntriesObjStr = std::string("RouteEntries") + "." + std::to_string(dep1 + 1);
    setParameter(routeEntriesObjStr + ".RouteTableId", routeEntriesObj.routeTableId);
    setParameter(routeEntriesObjStr + ".DestinationCidrBlock", routeEntriesObj.destinationCidrBlock);
  }
}

