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

#include <alibabacloud/smartag/model/DescribeCloudConnectNetworksRequest.h>

using AlibabaCloud::Smartag::Model::DescribeCloudConnectNetworksRequest;

DescribeCloudConnectNetworksRequest::DescribeCloudConnectNetworksRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeCloudConnectNetworks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudConnectNetworksRequest::~DescribeCloudConnectNetworksRequest() {}

long DescribeCloudConnectNetworksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCloudConnectNetworksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCloudConnectNetworksRequest::getCcnId() const {
  return ccnId_;
}

void DescribeCloudConnectNetworksRequest::setCcnId(const std::string &ccnId) {
  ccnId_ = ccnId;
  setParameter(std::string("CcnId"), ccnId);
}

int DescribeCloudConnectNetworksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudConnectNetworksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudConnectNetworksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCloudConnectNetworksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCloudConnectNetworksRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudConnectNetworksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeCloudConnectNetworksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudConnectNetworksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCloudConnectNetworksRequest::Tag> DescribeCloudConnectNetworksRequest::getTag() const {
  return tag_;
}

void DescribeCloudConnectNetworksRequest::setTag(const std::vector<DescribeCloudConnectNetworksRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeCloudConnectNetworksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCloudConnectNetworksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCloudConnectNetworksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCloudConnectNetworksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCloudConnectNetworksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCloudConnectNetworksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCloudConnectNetworksRequest::getName() const {
  return name_;
}

void DescribeCloudConnectNetworksRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

