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

#include <alibabacloud/cbn/model/DescribePublishedRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::DescribePublishedRouteEntriesRequest;

DescribePublishedRouteEntriesRequest::DescribePublishedRouteEntriesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribePublishedRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribePublishedRouteEntriesRequest::~DescribePublishedRouteEntriesRequest() {}

long DescribePublishedRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePublishedRouteEntriesRequest::getCenId() const {
  return cenId_;
}

void DescribePublishedRouteEntriesRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int DescribePublishedRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePublishedRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribePublishedRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribePublishedRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string DescribePublishedRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePublishedRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DescribePublishedRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string DescribePublishedRouteEntriesRequest::getVersion() const {
  return version_;
}

void DescribePublishedRouteEntriesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

std::string DescribePublishedRouteEntriesRequest::getChildInstanceRouteTableId() const {
  return childInstanceRouteTableId_;
}

void DescribePublishedRouteEntriesRequest::setChildInstanceRouteTableId(const std::string &childInstanceRouteTableId) {
  childInstanceRouteTableId_ = childInstanceRouteTableId;
  setParameter(std::string("ChildInstanceRouteTableId"), childInstanceRouteTableId);
}

