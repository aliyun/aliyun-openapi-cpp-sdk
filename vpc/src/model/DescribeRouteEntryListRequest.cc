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

#include <alibabacloud/vpc/model/DescribeRouteEntryListRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteEntryListRequest;

DescribeRouteEntryListRequest::DescribeRouteEntryListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteEntryList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteEntryListRequest::~DescribeRouteEntryListRequest() {}

std::vector<std::string> DescribeRouteEntryListRequest::getDestCidrBlockList() const {
  return destCidrBlockList_;
}

void DescribeRouteEntryListRequest::setDestCidrBlockList(const std::vector<std::string> &destCidrBlockList) {
  destCidrBlockList_ = destCidrBlockList;
}

long DescribeRouteEntryListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteEntryListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRouteEntryListRequest::getRouteEntryName() const {
  return routeEntryName_;
}

void DescribeRouteEntryListRequest::setRouteEntryName(const std::string &routeEntryName) {
  routeEntryName_ = routeEntryName;
  setParameter(std::string("RouteEntryName"), routeEntryName);
}

std::string DescribeRouteEntryListRequest::getRegionId() const {
  return regionId_;
}

void DescribeRouteEntryListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRouteEntryListRequest::getNextToken() const {
  return nextToken_;
}

void DescribeRouteEntryListRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeRouteEntryListRequest::getRouteEntryType() const {
  return routeEntryType_;
}

void DescribeRouteEntryListRequest::setRouteEntryType(const std::string &routeEntryType) {
  routeEntryType_ = routeEntryType;
  setParameter(std::string("RouteEntryType"), routeEntryType);
}

std::string DescribeRouteEntryListRequest::getIpVersion() const {
  return ipVersion_;
}

void DescribeRouteEntryListRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string DescribeRouteEntryListRequest::getNextHopId() const {
  return nextHopId_;
}

void DescribeRouteEntryListRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setParameter(std::string("NextHopId"), nextHopId);
}

std::string DescribeRouteEntryListRequest::getNextHopType() const {
  return nextHopType_;
}

void DescribeRouteEntryListRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

std::string DescribeRouteEntryListRequest::getRouteTableId() const {
  return routeTableId_;
}

void DescribeRouteEntryListRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DescribeRouteEntryListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteEntryListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteEntryListRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DescribeRouteEntryListRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string DescribeRouteEntryListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteEntryListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRouteEntryListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteEntryListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeRouteEntryListRequest::getMaxResult() const {
  return maxResult_;
}

void DescribeRouteEntryListRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

std::string DescribeRouteEntryListRequest::getServiceType() const {
  return serviceType_;
}

void DescribeRouteEntryListRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string DescribeRouteEntryListRequest::getRouteEntryId() const {
  return routeEntryId_;
}

void DescribeRouteEntryListRequest::setRouteEntryId(const std::string &routeEntryId) {
  routeEntryId_ = routeEntryId;
  setParameter(std::string("RouteEntryId"), routeEntryId);
}

