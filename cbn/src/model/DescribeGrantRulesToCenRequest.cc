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

#include <alibabacloud/cbn/model/DescribeGrantRulesToCenRequest.h>

using AlibabaCloud::Cbn::Model::DescribeGrantRulesToCenRequest;

DescribeGrantRulesToCenRequest::DescribeGrantRulesToCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeGrantRulesToCen") {
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

std::string DescribeGrantRulesToCenRequest::getCenId() const {
  return cenId_;
}

void DescribeGrantRulesToCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DescribeGrantRulesToCenRequest::getProductType() const {
  return productType_;
}

void DescribeGrantRulesToCenRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeGrantRulesToCenRequest::getRegionId() const {
  return regionId_;
}

void DescribeGrantRulesToCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeGrantRulesToCenRequest::getNextToken() const {
  return nextToken_;
}

void DescribeGrantRulesToCenRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
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

std::string DescribeGrantRulesToCenRequest::getVersion() const {
  return version_;
}

void DescribeGrantRulesToCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

long DescribeGrantRulesToCenRequest::getChildInstanceOwnerId() const {
  return childInstanceOwnerId_;
}

void DescribeGrantRulesToCenRequest::setChildInstanceOwnerId(long childInstanceOwnerId) {
  childInstanceOwnerId_ = childInstanceOwnerId;
  setParameter(std::string("ChildInstanceOwnerId"), std::to_string(childInstanceOwnerId));
}

std::string DescribeGrantRulesToCenRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void DescribeGrantRulesToCenRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

long DescribeGrantRulesToCenRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeGrantRulesToCenRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

