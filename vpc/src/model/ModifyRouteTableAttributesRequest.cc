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

#include <alibabacloud/vpc/model/ModifyRouteTableAttributesRequest.h>

using AlibabaCloud::Vpc::Model::ModifyRouteTableAttributesRequest;

ModifyRouteTableAttributesRequest::ModifyRouteTableAttributesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyRouteTableAttributes") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRouteTableAttributesRequest::~ModifyRouteTableAttributesRequest() {}

long ModifyRouteTableAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyRouteTableAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyRouteTableAttributesRequest::getDescription() const {
  return description_;
}

void ModifyRouteTableAttributesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyRouteTableAttributesRequest::getRouteTableName() const {
  return routeTableName_;
}

void ModifyRouteTableAttributesRequest::setRouteTableName(const std::string &routeTableName) {
  routeTableName_ = routeTableName;
  setParameter(std::string("RouteTableName"), routeTableName);
}

std::string ModifyRouteTableAttributesRequest::getRegionId() const {
  return regionId_;
}

void ModifyRouteTableAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ModifyRouteTableAttributesRequest::getResourceUid() const {
  return resourceUid_;
}

void ModifyRouteTableAttributesRequest::setResourceUid(long resourceUid) {
  resourceUid_ = resourceUid;
  setParameter(std::string("ResourceUid"), std::to_string(resourceUid));
}

std::string ModifyRouteTableAttributesRequest::getRouteTableId() const {
  return routeTableId_;
}

void ModifyRouteTableAttributesRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string ModifyRouteTableAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyRouteTableAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyRouteTableAttributesRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyRouteTableAttributesRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string ModifyRouteTableAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyRouteTableAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool ModifyRouteTableAttributesRequest::getRoutePropagationEnable() const {
  return routePropagationEnable_;
}

void ModifyRouteTableAttributesRequest::setRoutePropagationEnable(bool routePropagationEnable) {
  routePropagationEnable_ = routePropagationEnable;
  setParameter(std::string("RoutePropagationEnable"), routePropagationEnable ? "true" : "false");
}

long ModifyRouteTableAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyRouteTableAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyRouteTableAttributesRequest::getKbpsBandwidth() const {
  return kbpsBandwidth_;
}

void ModifyRouteTableAttributesRequest::setKbpsBandwidth(const std::string &kbpsBandwidth) {
  kbpsBandwidth_ = kbpsBandwidth;
  setParameter(std::string("KbpsBandwidth"), kbpsBandwidth);
}

std::string ModifyRouteTableAttributesRequest::getResourceBid() const {
  return resourceBid_;
}

void ModifyRouteTableAttributesRequest::setResourceBid(const std::string &resourceBid) {
  resourceBid_ = resourceBid;
  setParameter(std::string("ResourceBid"), resourceBid);
}

