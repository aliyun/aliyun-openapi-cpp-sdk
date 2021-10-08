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

#include <alibabacloud/ecs/model/DescribeHpcClustersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeHpcClustersRequest;

DescribeHpcClustersRequest::DescribeHpcClustersRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeHpcClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHpcClustersRequest::~DescribeHpcClustersRequest() {}

long DescribeHpcClustersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHpcClustersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHpcClustersRequest::getClientToken() const {
  return clientToken_;
}

void DescribeHpcClustersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeHpcClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHpcClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeHpcClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeHpcClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeHpcClustersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHpcClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeHpcClustersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHpcClustersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeHpcClustersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeHpcClustersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeHpcClustersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHpcClustersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHpcClustersRequest::getHpcClusterIds() const {
  return hpcClusterIds_;
}

void DescribeHpcClustersRequest::setHpcClusterIds(const std::string &hpcClusterIds) {
  hpcClusterIds_ = hpcClusterIds;
  setParameter(std::string("HpcClusterIds"), hpcClusterIds);
}

