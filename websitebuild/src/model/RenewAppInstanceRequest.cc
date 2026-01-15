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

#include <alibabacloud/websitebuild/model/RenewAppInstanceRequest.h>

using AlibabaCloud::WebsiteBuild::Model::RenewAppInstanceRequest;

RenewAppInstanceRequest::RenewAppInstanceRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "RenewAppInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewAppInstanceRequest::~RenewAppInstanceRequest() {}

std::string RenewAppInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RenewAppInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int RenewAppInstanceRequest::getDuration() const {
  return duration_;
}

void RenewAppInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string RenewAppInstanceRequest::getExtend() const {
  return extend_;
}

void RenewAppInstanceRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string RenewAppInstanceRequest::getBizId() const {
  return bizId_;
}

void RenewAppInstanceRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string RenewAppInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void RenewAppInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string RenewAppInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void RenewAppInstanceRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}

