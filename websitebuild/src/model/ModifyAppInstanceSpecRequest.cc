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

#include <alibabacloud/websitebuild/model/ModifyAppInstanceSpecRequest.h>

using AlibabaCloud::WebsiteBuild::Model::ModifyAppInstanceSpecRequest;

ModifyAppInstanceSpecRequest::ModifyAppInstanceSpecRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "ModifyAppInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAppInstanceSpecRequest::~ModifyAppInstanceSpecRequest() {}

std::string ModifyAppInstanceSpecRequest::getDeployArea() const {
  return deployArea_;
}

void ModifyAppInstanceSpecRequest::setDeployArea(const std::string &deployArea) {
  deployArea_ = deployArea;
  setParameter(std::string("DeployArea"), deployArea);
}

std::string ModifyAppInstanceSpecRequest::getClientToken() const {
  return clientToken_;
}

void ModifyAppInstanceSpecRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyAppInstanceSpecRequest::getExtend() const {
  return extend_;
}

void ModifyAppInstanceSpecRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string ModifyAppInstanceSpecRequest::getBizId() const {
  return bizId_;
}

void ModifyAppInstanceSpecRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string ModifyAppInstanceSpecRequest::getSiteVersion() const {
  return siteVersion_;
}

void ModifyAppInstanceSpecRequest::setSiteVersion(const std::string &siteVersion) {
  siteVersion_ = siteVersion;
  setParameter(std::string("SiteVersion"), siteVersion);
}

std::string ModifyAppInstanceSpecRequest::getApplicationType() const {
  return applicationType_;
}

void ModifyAppInstanceSpecRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setParameter(std::string("ApplicationType"), applicationType);
}

std::string ModifyAppInstanceSpecRequest::getPaymentType() const {
  return paymentType_;
}

void ModifyAppInstanceSpecRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}

