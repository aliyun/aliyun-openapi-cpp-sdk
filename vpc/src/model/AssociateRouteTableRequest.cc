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

#include <alibabacloud/vpc/model/AssociateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::AssociateRouteTableRequest;

AssociateRouteTableRequest::AssociateRouteTableRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

AssociateRouteTableRequest::~AssociateRouteTableRequest() {}

long AssociateRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void AssociateRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateRouteTableRequest::getRegionId() const {
  return regionId_;
}

void AssociateRouteTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateRouteTableRequest::getRouteTableId() const {
  return routeTableId_;
}

void AssociateRouteTableRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string AssociateRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateRouteTableRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AssociateRouteTableRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

