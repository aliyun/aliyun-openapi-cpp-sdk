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

#include <alibabacloud/polardb/model/DescribeLicenseOrdersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeLicenseOrdersRequest;

DescribeLicenseOrdersRequest::DescribeLicenseOrdersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeLicenseOrders") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLicenseOrdersRequest::~DescribeLicenseOrdersRequest() {}

long DescribeLicenseOrdersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLicenseOrdersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeLicenseOrdersRequest::getVirtualOrder() const {
  return virtualOrder_;
}

void DescribeLicenseOrdersRequest::setVirtualOrder(bool virtualOrder) {
  virtualOrder_ = virtualOrder;
  setParameter(std::string("VirtualOrder"), virtualOrder ? "true" : "false");
}

int DescribeLicenseOrdersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLicenseOrdersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLicenseOrdersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLicenseOrdersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeLicenseOrdersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLicenseOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLicenseOrdersRequest::getAliyunOrderId() const {
  return aliyunOrderId_;
}

void DescribeLicenseOrdersRequest::setAliyunOrderId(const std::string &aliyunOrderId) {
  aliyunOrderId_ = aliyunOrderId;
  setParameter(std::string("AliyunOrderId"), aliyunOrderId);
}

std::string DescribeLicenseOrdersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLicenseOrdersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLicenseOrdersRequest::getPurchaseChannel() const {
  return purchaseChannel_;
}

void DescribeLicenseOrdersRequest::setPurchaseChannel(const std::string &purchaseChannel) {
  purchaseChannel_ = purchaseChannel;
  setParameter(std::string("PurchaseChannel"), purchaseChannel);
}

std::string DescribeLicenseOrdersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLicenseOrdersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLicenseOrdersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLicenseOrdersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLicenseOrdersRequest::getPackageType() const {
  return packageType_;
}

void DescribeLicenseOrdersRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

