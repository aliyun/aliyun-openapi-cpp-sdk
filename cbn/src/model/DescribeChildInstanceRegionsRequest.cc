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

#include <alibabacloud/cbn/model/DescribeChildInstanceRegionsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeChildInstanceRegionsRequest;

DescribeChildInstanceRegionsRequest::DescribeChildInstanceRegionsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeChildInstanceRegions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeChildInstanceRegionsRequest::~DescribeChildInstanceRegionsRequest() {}

long DescribeChildInstanceRegionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeChildInstanceRegionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeChildInstanceRegionsRequest::getProductType() const {
  return productType_;
}

void DescribeChildInstanceRegionsRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeChildInstanceRegionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeChildInstanceRegionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeChildInstanceRegionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeChildInstanceRegionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeChildInstanceRegionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeChildInstanceRegionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeChildInstanceRegionsRequest::getVersion() const {
  return version_;
}

void DescribeChildInstanceRegionsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

long DescribeChildInstanceRegionsRequest::getChildInstanceOwnerId() const {
  return childInstanceOwnerId_;
}

void DescribeChildInstanceRegionsRequest::setChildInstanceOwnerId(long childInstanceOwnerId) {
  childInstanceOwnerId_ = childInstanceOwnerId;
  setParameter(std::string("ChildInstanceOwnerId"), std::to_string(childInstanceOwnerId));
}

std::string DescribeChildInstanceRegionsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeChildInstanceRegionsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

