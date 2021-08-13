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

#include <alibabacloud/smartag/model/DescribeHealthChecksRequest.h>

using AlibabaCloud::Smartag::Model::DescribeHealthChecksRequest;

DescribeHealthChecksRequest::DescribeHealthChecksRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeHealthChecks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHealthChecksRequest::~DescribeHealthChecksRequest() {}

long DescribeHealthChecksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHealthChecksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHealthChecksRequest::getHcInstanceId() const {
  return hcInstanceId_;
}

void DescribeHealthChecksRequest::setHcInstanceId(const std::string &hcInstanceId) {
  hcInstanceId_ = hcInstanceId;
  setParameter(std::string("HcInstanceId"), hcInstanceId);
}

int DescribeHealthChecksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHealthChecksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeHealthChecksRequest::getRegionId() const {
  return regionId_;
}

void DescribeHealthChecksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeHealthChecksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHealthChecksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeHealthChecksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHealthChecksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeHealthChecksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeHealthChecksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeHealthChecksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHealthChecksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHealthChecksRequest::getName() const {
  return name_;
}

void DescribeHealthChecksRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeHealthChecksRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeHealthChecksRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

