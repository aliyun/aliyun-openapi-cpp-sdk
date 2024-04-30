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

#include <alibabacloud/rds/model/DescribeInstanceLinkedWhitelistTemplateRequest.h>

using AlibabaCloud::Rds::Model::DescribeInstanceLinkedWhitelistTemplateRequest;

DescribeInstanceLinkedWhitelistTemplateRequest::DescribeInstanceLinkedWhitelistTemplateRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeInstanceLinkedWhitelistTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceLinkedWhitelistTemplateRequest::~DescribeInstanceLinkedWhitelistTemplateRequest() {}

long DescribeInstanceLinkedWhitelistTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceLinkedWhitelistTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceLinkedWhitelistTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceLinkedWhitelistTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceLinkedWhitelistTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstanceLinkedWhitelistTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstanceLinkedWhitelistTemplateRequest::getInsName() const {
  return insName_;
}

void DescribeInstanceLinkedWhitelistTemplateRequest::setInsName(const std::string &insName) {
  insName_ = insName;
  setParameter(std::string("InsName"), insName);
}

std::string DescribeInstanceLinkedWhitelistTemplateRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceLinkedWhitelistTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

