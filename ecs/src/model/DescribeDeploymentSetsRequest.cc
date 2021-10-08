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

#include <alibabacloud/ecs/model/DescribeDeploymentSetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDeploymentSetsRequest;

DescribeDeploymentSetsRequest::DescribeDeploymentSetsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDeploymentSets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDeploymentSetsRequest::~DescribeDeploymentSetsRequest() {}

long DescribeDeploymentSetsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDeploymentSetsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDeploymentSetsRequest::getNetworkType() const {
  return networkType_;
}

void DescribeDeploymentSetsRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

int DescribeDeploymentSetsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDeploymentSetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDeploymentSetsRequest::getDeploymentSetIds() const {
  return deploymentSetIds_;
}

void DescribeDeploymentSetsRequest::setDeploymentSetIds(const std::string &deploymentSetIds) {
  deploymentSetIds_ = deploymentSetIds;
  setParameter(std::string("DeploymentSetIds"), deploymentSetIds);
}

std::string DescribeDeploymentSetsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDeploymentSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDeploymentSetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDeploymentSetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDeploymentSetsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDeploymentSetsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDeploymentSetsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDeploymentSetsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDeploymentSetsRequest::getDeploymentSetName() const {
  return deploymentSetName_;
}

void DescribeDeploymentSetsRequest::setDeploymentSetName(const std::string &deploymentSetName) {
  deploymentSetName_ = deploymentSetName;
  setParameter(std::string("DeploymentSetName"), deploymentSetName);
}

long DescribeDeploymentSetsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDeploymentSetsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDeploymentSetsRequest::getGranularity() const {
  return granularity_;
}

void DescribeDeploymentSetsRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

std::string DescribeDeploymentSetsRequest::getDomain() const {
  return domain_;
}

void DescribeDeploymentSetsRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string DescribeDeploymentSetsRequest::getStrategy() const {
  return strategy_;
}

void DescribeDeploymentSetsRequest::setStrategy(const std::string &strategy) {
  strategy_ = strategy;
  setParameter(std::string("Strategy"), strategy);
}

