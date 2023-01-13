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

#include <alibabacloud/cbn/model/DescribeGrantRulesToResourceRequest.h>

using AlibabaCloud::Cbn::Model::DescribeGrantRulesToResourceRequest;

DescribeGrantRulesToResourceRequest::DescribeGrantRulesToResourceRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeGrantRulesToResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGrantRulesToResourceRequest::~DescribeGrantRulesToResourceRequest() {}

long DescribeGrantRulesToResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGrantRulesToResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGrantRulesToResourceRequest::getProductType() const {
  return productType_;
}

void DescribeGrantRulesToResourceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeGrantRulesToResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeGrantRulesToResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeGrantRulesToResourceRequest::getNextToken() const {
  return nextToken_;
}

void DescribeGrantRulesToResourceRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeGrantRulesToResourceRequest::getResourceId() const {
  return resourceId_;
}

void DescribeGrantRulesToResourceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeGrantRulesToResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGrantRulesToResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGrantRulesToResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGrantRulesToResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGrantRulesToResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGrantRulesToResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGrantRulesToResourceRequest::getVersion() const {
  return version_;
}

void DescribeGrantRulesToResourceRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

int DescribeGrantRulesToResourceRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeGrantRulesToResourceRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

