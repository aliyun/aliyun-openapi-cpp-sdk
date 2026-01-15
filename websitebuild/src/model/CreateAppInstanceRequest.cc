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

#include <alibabacloud/websitebuild/model/CreateAppInstanceRequest.h>

using AlibabaCloud::WebsiteBuild::Model::CreateAppInstanceRequest;

CreateAppInstanceRequest::CreateAppInstanceRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "CreateAppInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppInstanceRequest::~CreateAppInstanceRequest() {}

std::string CreateAppInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateAppInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int CreateAppInstanceRequest::getDuration() const {
  return duration_;
}

void CreateAppInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateAppInstanceRequest::getSiteVersion() const {
  return siteVersion_;
}

void CreateAppInstanceRequest::setSiteVersion(const std::string &siteVersion) {
  siteVersion_ = siteVersion;
  setParameter(std::string("SiteVersion"), siteVersion);
}

std::string CreateAppInstanceRequest::getDeployArea() const {
  return deployArea_;
}

void CreateAppInstanceRequest::setDeployArea(const std::string &deployArea) {
  deployArea_ = deployArea;
  setParameter(std::string("DeployArea"), deployArea);
}

int CreateAppInstanceRequest::getQuantity() const {
  return quantity_;
}

void CreateAppInstanceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string CreateAppInstanceRequest::getExtend() const {
  return extend_;
}

void CreateAppInstanceRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

bool CreateAppInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateAppInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateAppInstanceRequest::getApplicationType() const {
  return applicationType_;
}

void CreateAppInstanceRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setParameter(std::string("ApplicationType"), applicationType);
}

std::string CreateAppInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateAppInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string CreateAppInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void CreateAppInstanceRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}

