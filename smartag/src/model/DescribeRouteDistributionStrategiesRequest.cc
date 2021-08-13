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

#include <alibabacloud/smartag/model/DescribeRouteDistributionStrategiesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeRouteDistributionStrategiesRequest;

DescribeRouteDistributionStrategiesRequest::DescribeRouteDistributionStrategiesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeRouteDistributionStrategies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteDistributionStrategiesRequest::~DescribeRouteDistributionStrategiesRequest() {}

long DescribeRouteDistributionStrategiesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteDistributionStrategiesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeRouteDistributionStrategiesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRouteDistributionStrategiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRouteDistributionStrategiesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRouteDistributionStrategiesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRouteDistributionStrategiesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRouteDistributionStrategiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRouteDistributionStrategiesRequest::getSourceType() const {
  return sourceType_;
}

void DescribeRouteDistributionStrategiesRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string DescribeRouteDistributionStrategiesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteDistributionStrategiesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteDistributionStrategiesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteDistributionStrategiesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRouteDistributionStrategiesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteDistributionStrategiesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouteDistributionStrategiesRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeRouteDistributionStrategiesRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

