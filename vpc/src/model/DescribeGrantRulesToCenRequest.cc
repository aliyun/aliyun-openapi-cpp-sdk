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

#include <alibabacloud/vpc/model/DescribeGrantRulesToCenRequest.h>

using AlibabaCloud::Vpc::Model::DescribeGrantRulesToCenRequest;

DescribeGrantRulesToCenRequest::DescribeGrantRulesToCenRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeGrantRulesToCen") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGrantRulesToCenRequest::~DescribeGrantRulesToCenRequest() {}

long DescribeGrantRulesToCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGrantRulesToCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGrantRulesToCenRequest::getClientToken() const {
  return clientToken_;
}

void DescribeGrantRulesToCenRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeGrantRulesToCenRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGrantRulesToCenRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGrantRulesToCenRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGrantRulesToCenRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGrantRulesToCenRequest::getRegionId() const {
  return regionId_;
}

void DescribeGrantRulesToCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeGrantRulesToCenRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGrantRulesToCenRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGrantRulesToCenRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeGrantRulesToCenRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeGrantRulesToCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGrantRulesToCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGrantRulesToCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGrantRulesToCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGrantRulesToCenRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGrantRulesToCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGrantRulesToCenRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGrantRulesToCenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

