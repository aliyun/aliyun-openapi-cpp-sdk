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

#include <alibabacloud/arms/model/CreateOrUpdateWebhookContactRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateWebhookContactRequest;

CreateOrUpdateWebhookContactRequest::CreateOrUpdateWebhookContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateWebhookContact") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateWebhookContactRequest::~CreateOrUpdateWebhookContactRequest() {}

long CreateOrUpdateWebhookContactRequest::getWebhookId() const {
  return webhookId_;
}

void CreateOrUpdateWebhookContactRequest::setWebhookId(long webhookId) {
  webhookId_ = webhookId;
  setBodyParameter(std::string("WebhookId"), std::to_string(webhookId));
}

std::string CreateOrUpdateWebhookContactRequest::getMethod() const {
  return method_;
}

void CreateOrUpdateWebhookContactRequest::setMethod(const std::string &method) {
  method_ = method;
  setBodyParameter(std::string("Method"), method);
}

std::string CreateOrUpdateWebhookContactRequest::getWebhookName() const {
  return webhookName_;
}

void CreateOrUpdateWebhookContactRequest::setWebhookName(const std::string &webhookName) {
  webhookName_ = webhookName;
  setBodyParameter(std::string("WebhookName"), webhookName);
}

std::string CreateOrUpdateWebhookContactRequest::getBizParams() const {
  return bizParams_;
}

void CreateOrUpdateWebhookContactRequest::setBizParams(const std::string &bizParams) {
  bizParams_ = bizParams;
  setBodyParameter(std::string("BizParams"), bizParams);
}

std::string CreateOrUpdateWebhookContactRequest::getBody() const {
  return body_;
}

void CreateOrUpdateWebhookContactRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("Body"), body);
}

std::string CreateOrUpdateWebhookContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateOrUpdateWebhookContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setBodyParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateOrUpdateWebhookContactRequest::getUrl() const {
  return url_;
}

void CreateOrUpdateWebhookContactRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

std::string CreateOrUpdateWebhookContactRequest::getBizHeaders() const {
  return bizHeaders_;
}

void CreateOrUpdateWebhookContactRequest::setBizHeaders(const std::string &bizHeaders) {
  bizHeaders_ = bizHeaders;
  setBodyParameter(std::string("BizHeaders"), bizHeaders);
}

std::string CreateOrUpdateWebhookContactRequest::getRecoverBody() const {
  return recoverBody_;
}

void CreateOrUpdateWebhookContactRequest::setRecoverBody(const std::string &recoverBody) {
  recoverBody_ = recoverBody;
  setBodyParameter(std::string("RecoverBody"), recoverBody);
}

