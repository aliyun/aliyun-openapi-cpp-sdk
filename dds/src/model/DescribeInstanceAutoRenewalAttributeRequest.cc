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

#include <alibabacloud/dds/model/DescribeInstanceAutoRenewalAttributeRequest.h>

using AlibabaCloud::Dds::Model::DescribeInstanceAutoRenewalAttributeRequest;

DescribeInstanceAutoRenewalAttributeRequest::DescribeInstanceAutoRenewalAttributeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeInstanceAutoRenewalAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAutoRenewalAttributeRequest::~DescribeInstanceAutoRenewalAttributeRequest() {}

long DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeInstanceAutoRenewalAttributeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeInstanceAutoRenewalAttributeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceAutoRenewalAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getDBInstanceType() const {
  return dBInstanceType_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setDBInstanceType(const std::string &dBInstanceType) {
  dBInstanceType_ = dBInstanceType;
  setParameter(std::string("DBInstanceType"), dBInstanceType);
}

