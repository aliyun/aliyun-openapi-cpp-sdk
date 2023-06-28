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

#include <alibabacloud/polardb/model/DescribeClassListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeClassListRequest;

DescribeClassListRequest::DescribeClassListRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeClassList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClassListRequest::~DescribeClassListRequest() {}

long DescribeClassListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeClassListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeClassListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClassListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeClassListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeClassListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeClassListRequest::getRegionId() const {
  return regionId_;
}

void DescribeClassListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeClassListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeClassListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeClassListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeClassListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeClassListRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeClassListRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long DescribeClassListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeClassListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeClassListRequest::getMasterHa() const {
  return masterHa_;
}

void DescribeClassListRequest::setMasterHa(const std::string &masterHa) {
  masterHa_ = masterHa;
  setParameter(std::string("MasterHa"), masterHa);
}

std::string DescribeClassListRequest::getOrderType() const {
  return orderType_;
}

void DescribeClassListRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

