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

#include <alibabacloud/vpc/model/GetVpcRouteEntrySummaryRequest.h>

using AlibabaCloud::Vpc::Model::GetVpcRouteEntrySummaryRequest;

GetVpcRouteEntrySummaryRequest::GetVpcRouteEntrySummaryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVpcRouteEntrySummary") {
  setMethod(HttpRequest::Method::Post);
}

GetVpcRouteEntrySummaryRequest::~GetVpcRouteEntrySummaryRequest() {}

long GetVpcRouteEntrySummaryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetVpcRouteEntrySummaryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetVpcRouteEntrySummaryRequest::getRegionId() const {
  return regionId_;
}

void GetVpcRouteEntrySummaryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVpcRouteEntrySummaryRequest::getRouteEntryType() const {
  return routeEntryType_;
}

void GetVpcRouteEntrySummaryRequest::setRouteEntryType(const std::string &routeEntryType) {
  routeEntryType_ = routeEntryType;
  setParameter(std::string("RouteEntryType"), routeEntryType);
}

std::string GetVpcRouteEntrySummaryRequest::getRouteTableId() const {
  return routeTableId_;
}

void GetVpcRouteEntrySummaryRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string GetVpcRouteEntrySummaryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetVpcRouteEntrySummaryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetVpcRouteEntrySummaryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetVpcRouteEntrySummaryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetVpcRouteEntrySummaryRequest::getOwnerId() const {
  return ownerId_;
}

void GetVpcRouteEntrySummaryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetVpcRouteEntrySummaryRequest::getVpcId() const {
  return vpcId_;
}

void GetVpcRouteEntrySummaryRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

