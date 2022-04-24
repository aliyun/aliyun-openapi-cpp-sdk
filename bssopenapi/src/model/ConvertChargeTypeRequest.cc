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

#include <alibabacloud/bssopenapi/model/ConvertChargeTypeRequest.h>

using AlibabaCloud::BssOpenApi::Model::ConvertChargeTypeRequest;

ConvertChargeTypeRequest::ConvertChargeTypeRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ConvertChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ConvertChargeTypeRequest::~ConvertChargeTypeRequest() {}

int ConvertChargeTypeRequest::getPeriod() const {
  return period_;
}

void ConvertChargeTypeRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string ConvertChargeTypeRequest::getProductCode() const {
  return productCode_;
}

void ConvertChargeTypeRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ConvertChargeTypeRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void ConvertChargeTypeRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

long ConvertChargeTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ConvertChargeTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ConvertChargeTypeRequest::getProductType() const {
  return productType_;
}

void ConvertChargeTypeRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string ConvertChargeTypeRequest::getInstanceId() const {
  return instanceId_;
}

void ConvertChargeTypeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

