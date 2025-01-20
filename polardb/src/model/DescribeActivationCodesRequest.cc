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

#include <alibabacloud/polardb/model/DescribeActivationCodesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeActivationCodesRequest;

DescribeActivationCodesRequest::DescribeActivationCodesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeActivationCodes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActivationCodesRequest::~DescribeActivationCodesRequest() {}

long DescribeActivationCodesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActivationCodesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeActivationCodesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeActivationCodesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeActivationCodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActivationCodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeActivationCodesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeActivationCodesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeActivationCodesRequest::getAliyunOrderId() const {
  return aliyunOrderId_;
}

void DescribeActivationCodesRequest::setAliyunOrderId(const std::string &aliyunOrderId) {
  aliyunOrderId_ = aliyunOrderId;
  setParameter(std::string("AliyunOrderId"), aliyunOrderId);
}

std::string DescribeActivationCodesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActivationCodesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActivationCodesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActivationCodesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActivationCodesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActivationCodesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

