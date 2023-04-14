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

#include <alibabacloud/cams/model/UpdatePhoneWebhookRequest.h>

using AlibabaCloud::Cams::Model::UpdatePhoneWebhookRequest;

UpdatePhoneWebhookRequest::UpdatePhoneWebhookRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdatePhoneWebhook") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePhoneWebhookRequest::~UpdatePhoneWebhookRequest() {}

std::string UpdatePhoneWebhookRequest::getUpCallbackUrl() const {
  return upCallbackUrl_;
}

void UpdatePhoneWebhookRequest::setUpCallbackUrl(const std::string &upCallbackUrl) {
  upCallbackUrl_ = upCallbackUrl;
  setParameter(std::string("UpCallbackUrl"), upCallbackUrl);
}

std::string UpdatePhoneWebhookRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdatePhoneWebhookRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string UpdatePhoneWebhookRequest::getApiCode() const {
  return apiCode_;
}

void UpdatePhoneWebhookRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string UpdatePhoneWebhookRequest::getProdCode() const {
  return prodCode_;
}

void UpdatePhoneWebhookRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdatePhoneWebhookRequest::getQueueFlag() const {
  return queueFlag_;
}

void UpdatePhoneWebhookRequest::setQueueFlag(const std::string &queueFlag) {
  queueFlag_ = queueFlag;
  setParameter(std::string("QueueFlag"), queueFlag);
}

std::string UpdatePhoneWebhookRequest::getHttpFlag() const {
  return httpFlag_;
}

void UpdatePhoneWebhookRequest::setHttpFlag(const std::string &httpFlag) {
  httpFlag_ = httpFlag;
  setParameter(std::string("HttpFlag"), httpFlag);
}

std::string UpdatePhoneWebhookRequest::getStatusCallbackUrl() const {
  return statusCallbackUrl_;
}

void UpdatePhoneWebhookRequest::setStatusCallbackUrl(const std::string &statusCallbackUrl) {
  statusCallbackUrl_ = statusCallbackUrl;
  setParameter(std::string("StatusCallbackUrl"), statusCallbackUrl);
}

std::string UpdatePhoneWebhookRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdatePhoneWebhookRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

