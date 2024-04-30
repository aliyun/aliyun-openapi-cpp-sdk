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

#include <alibabacloud/rds/model/DescribeKmsAssociateResourcesRequest.h>

using AlibabaCloud::Rds::Model::DescribeKmsAssociateResourcesRequest;

DescribeKmsAssociateResourcesRequest::DescribeKmsAssociateResourcesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeKmsAssociateResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKmsAssociateResourcesRequest::~DescribeKmsAssociateResourcesRequest() {}

long DescribeKmsAssociateResourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeKmsAssociateResourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeKmsAssociateResourcesRequest::getClientToken() const {
  return clientToken_;
}

void DescribeKmsAssociateResourcesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeKmsAssociateResourcesRequest::getKmsResourceRegionId() const {
  return kmsResourceRegionId_;
}

void DescribeKmsAssociateResourcesRequest::setKmsResourceRegionId(const std::string &kmsResourceRegionId) {
  kmsResourceRegionId_ = kmsResourceRegionId;
  setParameter(std::string("KmsResourceRegionId"), kmsResourceRegionId);
}

std::string DescribeKmsAssociateResourcesRequest::getKmsResourceUser() const {
  return kmsResourceUser_;
}

void DescribeKmsAssociateResourcesRequest::setKmsResourceUser(const std::string &kmsResourceUser) {
  kmsResourceUser_ = kmsResourceUser;
  setParameter(std::string("KmsResourceUser"), kmsResourceUser);
}

std::string DescribeKmsAssociateResourcesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeKmsAssociateResourcesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeKmsAssociateResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeKmsAssociateResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeKmsAssociateResourcesRequest::getKmsResourceId() const {
  return kmsResourceId_;
}

void DescribeKmsAssociateResourcesRequest::setKmsResourceId(const std::string &kmsResourceId) {
  kmsResourceId_ = kmsResourceId;
  setParameter(std::string("KmsResourceId"), kmsResourceId);
}

std::string DescribeKmsAssociateResourcesRequest::getRegionId() const {
  return regionId_;
}

void DescribeKmsAssociateResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeKmsAssociateResourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeKmsAssociateResourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeKmsAssociateResourcesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeKmsAssociateResourcesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeKmsAssociateResourcesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeKmsAssociateResourcesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeKmsAssociateResourcesRequest::getKmsResourceType() const {
  return kmsResourceType_;
}

void DescribeKmsAssociateResourcesRequest::setKmsResourceType(const std::string &kmsResourceType) {
  kmsResourceType_ = kmsResourceType;
  setParameter(std::string("KmsResourceType"), kmsResourceType);
}

