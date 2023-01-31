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

#include <alibabacloud/vpc/model/DeleteRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::DeleteRouteTableRequest;

DeleteRouteTableRequest::DeleteRouteTableRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteTableRequest::~DeleteRouteTableRequest() {}

long DeleteRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteRouteTableRequest::getRegionId() const {
  return regionId_;
}

void DeleteRouteTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRouteTableRequest::getRouteTableId() const {
  return routeTableId_;
}

void DeleteRouteTableRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DeleteRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

