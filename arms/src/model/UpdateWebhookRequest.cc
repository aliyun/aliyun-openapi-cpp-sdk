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

#include <alibabacloud/arms/model/UpdateWebhookRequest.h>

using AlibabaCloud::ARMS::Model::UpdateWebhookRequest;

UpdateWebhookRequest::UpdateWebhookRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateWebhook") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWebhookRequest::~UpdateWebhookRequest() {}

std::string UpdateWebhookRequest::getHttpHeaders() const {
  return httpHeaders_;
}

void UpdateWebhookRequest::setHttpHeaders(const std::string &httpHeaders) {
  httpHeaders_ = httpHeaders;
  setParameter(std::string("HttpHeaders"), httpHeaders);
}

std::string UpdateWebhookRequest::getMethod() const {
  return method_;
}

void UpdateWebhookRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

long UpdateWebhookRequest::getContactId() const {
  return contactId_;
}

void UpdateWebhookRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

std::string UpdateWebhookRequest::getHttpParams() const {
  return httpParams_;
}

void UpdateWebhookRequest::setHttpParams(const std::string &httpParams) {
  httpParams_ = httpParams;
  setParameter(std::string("HttpParams"), httpParams);
}

std::string UpdateWebhookRequest::getProxyUserId() const {
  return proxyUserId_;
}

void UpdateWebhookRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string UpdateWebhookRequest::getBody() const {
  return body_;
}

void UpdateWebhookRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

std::string UpdateWebhookRequest::getUrl() const {
  return url_;
}

void UpdateWebhookRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string UpdateWebhookRequest::getContactName() const {
  return contactName_;
}

void UpdateWebhookRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string UpdateWebhookRequest::getRegionId() const {
  return regionId_;
}

void UpdateWebhookRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateWebhookRequest::getRecoverBody() const {
  return recoverBody_;
}

void UpdateWebhookRequest::setRecoverBody(const std::string &recoverBody) {
  recoverBody_ = recoverBody;
  setParameter(std::string("RecoverBody"), recoverBody);
}

