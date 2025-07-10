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

#include <alibabacloud/vpc/model/CreateRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouteEntriesRequest;

CreateRouteEntriesRequest::CreateRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

CreateRouteEntriesRequest::~CreateRouteEntriesRequest() {}

long CreateRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void CreateRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateRouteEntriesRequest::getDryRun() const {
  return dryRun_;
}

void CreateRouteEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateRouteEntriesRequest::RouteEntries> CreateRouteEntriesRequest::getRouteEntries() const {
  return routeEntries_;
}

void CreateRouteEntriesRequest::setRouteEntries(const std::vector<CreateRouteEntriesRequest::RouteEntries> &routeEntries) {
  routeEntries_ = routeEntries;
  for(int dep1 = 0; dep1 != routeEntries.size(); dep1++) {
  auto routeEntriesObj = routeEntries.at(dep1);
  std::string routeEntriesObjStr = std::string("RouteEntries") + "." + std::to_string(dep1 + 1);
    setParameter(routeEntriesObjStr + ".DstCidrBlock", routeEntriesObj.dstCidrBlock);
    setParameter(routeEntriesObjStr + ".RouteTableId", routeEntriesObj.routeTableId);
    setParameter(routeEntriesObjStr + ".IpVersion", std::to_string(routeEntriesObj.ipVersion));
    setParameter(routeEntriesObjStr + ".NextHop", routeEntriesObj.nextHop);
    setParameter(routeEntriesObjStr + ".NextHopType", routeEntriesObj.nextHopType);
    setParameter(routeEntriesObjStr + ".Name", routeEntriesObj.name);
    setParameter(routeEntriesObjStr + ".Description", routeEntriesObj.description);
  }
}

