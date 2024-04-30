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

#include <alibabacloud/rds/model/DescribeMarketingActivityRequest.h>

using AlibabaCloud::Rds::Model::DescribeMarketingActivityRequest;

DescribeMarketingActivityRequest::DescribeMarketingActivityRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeMarketingActivity") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMarketingActivityRequest::~DescribeMarketingActivityRequest() {}

long DescribeMarketingActivityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMarketingActivityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMarketingActivityRequest::getClientToken() const {
  return clientToken_;
}

void DescribeMarketingActivityRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeMarketingActivityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMarketingActivityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMarketingActivityRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeMarketingActivityRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeMarketingActivityRequest::getRegionId() const {
  return regionId_;
}

void DescribeMarketingActivityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeMarketingActivityRequest::getAliUid() const {
  return aliUid_;
}

void DescribeMarketingActivityRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

std::string DescribeMarketingActivityRequest::getUpgradeCode() const {
  return upgradeCode_;
}

void DescribeMarketingActivityRequest::setUpgradeCode(const std::string &upgradeCode) {
  upgradeCode_ = upgradeCode;
  setParameter(std::string("UpgradeCode"), upgradeCode);
}

std::string DescribeMarketingActivityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMarketingActivityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeMarketingActivityRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMarketingActivityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeMarketingActivityRequest::getBid() const {
  return bid_;
}

void DescribeMarketingActivityRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

