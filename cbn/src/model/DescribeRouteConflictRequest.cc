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

#include <alibabacloud/cbn/model/DescribeRouteConflictRequest.h>

using AlibabaCloud::Cbn::Model::DescribeRouteConflictRequest;

DescribeRouteConflictRequest::DescribeRouteConflictRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeRouteConflict") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteConflictRequest::~DescribeRouteConflictRequest() {}

long DescribeRouteConflictRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteConflictRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeRouteConflictRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRouteConflictRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeRouteConflictRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRouteConflictRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRouteConflictRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void DescribeRouteConflictRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string DescribeRouteConflictRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteConflictRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteConflictRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteConflictRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeRouteConflictRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DescribeRouteConflictRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

long DescribeRouteConflictRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteConflictRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouteConflictRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void DescribeRouteConflictRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string DescribeRouteConflictRequest::getVersion() const {
  return version_;
}

void DescribeRouteConflictRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribeRouteConflictRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void DescribeRouteConflictRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

std::string DescribeRouteConflictRequest::getChildInstanceRouteTableId() const {
  return childInstanceRouteTableId_;
}

void DescribeRouteConflictRequest::setChildInstanceRouteTableId(const std::string &childInstanceRouteTableId) {
  childInstanceRouteTableId_ = childInstanceRouteTableId;
  setParameter(std::string("ChildInstanceRouteTableId"), childInstanceRouteTableId);
}

