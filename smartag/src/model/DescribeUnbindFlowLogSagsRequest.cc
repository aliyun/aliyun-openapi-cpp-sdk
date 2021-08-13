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

#include <alibabacloud/smartag/model/DescribeUnbindFlowLogSagsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeUnbindFlowLogSagsRequest;

DescribeUnbindFlowLogSagsRequest::DescribeUnbindFlowLogSagsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeUnbindFlowLogSags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUnbindFlowLogSagsRequest::~DescribeUnbindFlowLogSagsRequest() {}

long DescribeUnbindFlowLogSagsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUnbindFlowLogSagsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUnbindFlowLogSagsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeUnbindFlowLogSagsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeUnbindFlowLogSagsRequest::getRegionId() const {
  return regionId_;
}

void DescribeUnbindFlowLogSagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeUnbindFlowLogSagsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeUnbindFlowLogSagsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeUnbindFlowLogSagsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeUnbindFlowLogSagsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeUnbindFlowLogSagsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUnbindFlowLogSagsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

