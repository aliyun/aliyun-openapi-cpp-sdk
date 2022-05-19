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

#include <alibabacloud/bssopenapi/model/ReleaseInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::ReleaseInstanceRequest;

ReleaseInstanceRequest::ReleaseInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ReleaseInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseInstanceRequest::~ReleaseInstanceRequest() {}

std::string ReleaseInstanceRequest::getProductCode() const {
  return productCode_;
}

void ReleaseInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ReleaseInstanceRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void ReleaseInstanceRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

long ReleaseInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReleaseInstanceRequest::getProductType() const {
  return productType_;
}

void ReleaseInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string ReleaseInstanceRequest::getInstanceIds() const {
  return instanceIds_;
}

void ReleaseInstanceRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string ReleaseInstanceRequest::getRegion() const {
  return region_;
}

void ReleaseInstanceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ReleaseInstanceRequest::getRenewStatus() const {
  return renewStatus_;
}

void ReleaseInstanceRequest::setRenewStatus(const std::string &renewStatus) {
  renewStatus_ = renewStatus;
  setParameter(std::string("RenewStatus"), renewStatus);
}

