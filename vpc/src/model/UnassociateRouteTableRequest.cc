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

#include <alibabacloud/vpc/model/UnassociateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateRouteTableRequest;

UnassociateRouteTableRequest::UnassociateRouteTableRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UnassociateRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

UnassociateRouteTableRequest::~UnassociateRouteTableRequest() {}

long UnassociateRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnassociateRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnassociateRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void UnassociateRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UnassociateRouteTableRequest::getRegionId() const {
  return regionId_;
}

void UnassociateRouteTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnassociateRouteTableRequest::getRouteTableId() const {
  return routeTableId_;
}

void UnassociateRouteTableRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string UnassociateRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnassociateRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnassociateRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnassociateRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnassociateRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void UnassociateRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnassociateRouteTableRequest::getVSwitchId() const {
  return vSwitchId_;
}

void UnassociateRouteTableRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

