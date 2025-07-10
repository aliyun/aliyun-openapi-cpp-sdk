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

#include <alibabacloud/vpc/model/DeleteRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DeleteRouteEntriesRequest;

DeleteRouteEntriesRequest::DeleteRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteEntriesRequest::~DeleteRouteEntriesRequest() {}

long DeleteRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void DeleteRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteRouteEntriesRequest::getDryRun() const {
  return dryRun_;
}

void DeleteRouteEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DeleteRouteEntriesRequest::RouteEntries> DeleteRouteEntriesRequest::getRouteEntries() const {
  return routeEntries_;
}

void DeleteRouteEntriesRequest::setRouteEntries(const std::vector<DeleteRouteEntriesRequest::RouteEntries> &routeEntries) {
  routeEntries_ = routeEntries;
  for(int dep1 = 0; dep1 != routeEntries.size(); dep1++) {
  auto routeEntriesObj = routeEntries.at(dep1);
  std::string routeEntriesObjStr = std::string("RouteEntries") + "." + std::to_string(dep1 + 1);
    setParameter(routeEntriesObjStr + ".RouteTableId", routeEntriesObj.routeTableId);
    setParameter(routeEntriesObjStr + ".RouteEntryId", routeEntriesObj.routeEntryId);
    setParameter(routeEntriesObjStr + ".DstCidrBlock", routeEntriesObj.dstCidrBlock);
    setParameter(routeEntriesObjStr + ".NextHop", routeEntriesObj.nextHop);
  }
}

