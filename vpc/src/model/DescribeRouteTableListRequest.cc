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

#include <alibabacloud/vpc/model/DescribeRouteTableListRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteTableListRequest;

DescribeRouteTableListRequest::DescribeRouteTableListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteTableList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteTableListRequest::~DescribeRouteTableListRequest() {}

long DescribeRouteTableListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteTableListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeRouteTableListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRouteTableListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRouteTableListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRouteTableListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRouteTableListRequest::getRouteTableName() const {
  return routeTableName_;
}

void DescribeRouteTableListRequest::setRouteTableName(const std::string &routeTableName) {
  routeTableName_ = routeTableName;
  setParameter(std::string("RouteTableName"), routeTableName);
}

std::string DescribeRouteTableListRequest::getRegionId() const {
  return regionId_;
}

void DescribeRouteTableListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRouteTableListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRouteTableListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeRouteTableListRequest::Tag> DescribeRouteTableListRequest::getTag() const {
  return tag_;
}

void DescribeRouteTableListRequest::setTag(const std::vector<DescribeRouteTableListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeRouteTableListRequest::getRouteTableId() const {
  return routeTableId_;
}

void DescribeRouteTableListRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DescribeRouteTableListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteTableListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteTableListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteTableListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRouteTableListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteTableListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouteTableListRequest::getRouterType() const {
  return routerType_;
}

void DescribeRouteTableListRequest::setRouterType(const std::string &routerType) {
  routerType_ = routerType;
  setParameter(std::string("RouterType"), routerType);
}

std::string DescribeRouteTableListRequest::getRouterId() const {
  return routerId_;
}

void DescribeRouteTableListRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

std::string DescribeRouteTableListRequest::getVpcId() const {
  return vpcId_;
}

void DescribeRouteTableListRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeRouteTableListRequest::getRouteTableType() const {
  return routeTableType_;
}

void DescribeRouteTableListRequest::setRouteTableType(const std::string &routeTableType) {
  routeTableType_ = routeTableType;
  setParameter(std::string("RouteTableType"), routeTableType);
}

