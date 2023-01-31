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

#include <alibabacloud/vpc/model/DescribeRouteTablesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteTablesRequest;

DescribeRouteTablesRequest::DescribeRouteTablesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteTables") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteTablesRequest::~DescribeRouteTablesRequest() {}

long DescribeRouteTablesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteTablesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRouteTablesRequest::getVRouterId() const {
  return vRouterId_;
}

void DescribeRouteTablesRequest::setVRouterId(const std::string &vRouterId) {
  vRouterId_ = vRouterId;
  setParameter(std::string("VRouterId"), vRouterId);
}

std::string DescribeRouteTablesRequest::getType() const {
  return type_;
}

void DescribeRouteTablesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeRouteTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRouteTablesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRouteTablesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRouteTablesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRouteTablesRequest::getRouteTableName() const {
  return routeTableName_;
}

void DescribeRouteTablesRequest::setRouteTableName(const std::string &routeTableName) {
  routeTableName_ = routeTableName;
  setParameter(std::string("RouteTableName"), routeTableName);
}

std::string DescribeRouteTablesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRouteTablesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRouteTablesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRouteTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRouteTablesRequest::getRouteTableId() const {
  return routeTableId_;
}

void DescribeRouteTablesRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DescribeRouteTablesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteTablesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteTablesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteTablesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRouteTablesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteTablesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouteTablesRequest::getRouterType() const {
  return routerType_;
}

void DescribeRouteTablesRequest::setRouterType(const std::string &routerType) {
  routerType_ = routerType;
  setParameter(std::string("RouterType"), routerType);
}

std::string DescribeRouteTablesRequest::getRouterId() const {
  return routerId_;
}

void DescribeRouteTablesRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

