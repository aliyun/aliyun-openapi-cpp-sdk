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

#include <alibabacloud/cams/model/UpdateAccountWebhookRequest.h>

using AlibabaCloud::Cams::Model::UpdateAccountWebhookRequest;

UpdateAccountWebhookRequest::UpdateAccountWebhookRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdateAccountWebhook") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAccountWebhookRequest::~UpdateAccountWebhookRequest() {}

std::string UpdateAccountWebhookRequest::getApiCode() const {
  return apiCode_;
}

void UpdateAccountWebhookRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string UpdateAccountWebhookRequest::getProdCode() const {
  return prodCode_;
}

void UpdateAccountWebhookRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdateAccountWebhookRequest::getQueueFlag() const {
  return queueFlag_;
}

void UpdateAccountWebhookRequest::setQueueFlag(const std::string &queueFlag) {
  queueFlag_ = queueFlag;
  setParameter(std::string("QueueFlag"), queueFlag);
}

std::string UpdateAccountWebhookRequest::getHttpFlag() const {
  return httpFlag_;
}

void UpdateAccountWebhookRequest::setHttpFlag(const std::string &httpFlag) {
  httpFlag_ = httpFlag;
  setParameter(std::string("HttpFlag"), httpFlag);
}

std::string UpdateAccountWebhookRequest::getStatusCallbackUrl() const {
  return statusCallbackUrl_;
}

void UpdateAccountWebhookRequest::setStatusCallbackUrl(const std::string &statusCallbackUrl) {
  statusCallbackUrl_ = statusCallbackUrl;
  setParameter(std::string("StatusCallbackUrl"), statusCallbackUrl);
}

std::string UpdateAccountWebhookRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdateAccountWebhookRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

