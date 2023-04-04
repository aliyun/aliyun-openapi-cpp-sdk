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

#include <alibabacloud/avatar/model/SendMessageRequest.h>

using AlibabaCloud::Avatar::Model::SendMessageRequest;

SendMessageRequest::SendMessageRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SendMessage") {
  setMethod(HttpRequest::Method::Post);
}

SendMessageRequest::~SendMessageRequest() {}

std::string SendMessageRequest::getTextRequest() const {
  return textRequest_;
}

void SendMessageRequest::setTextRequest(const std::string &textRequest) {
  textRequest_ = textRequest;
  setParameter(std::string("TextRequest"), textRequest);
}

long SendMessageRequest::getTenantId() const {
  return tenantId_;
}

void SendMessageRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

SendMessageRequest::VAMLRequest SendMessageRequest::getVAMLRequest() const {
  return vAMLRequest_;
}

void SendMessageRequest::setVAMLRequest(const SendMessageRequest::VAMLRequest &vAMLRequest) {
  vAMLRequest_ = vAMLRequest;
  setParameter(std::string("VAMLRequest") + ".Code", vAMLRequest.code);
  setParameter(std::string("VAMLRequest") + ".Vaml", vAMLRequest.vaml);
}

std::string SendMessageRequest::getSessionId() const {
  return sessionId_;
}

void SendMessageRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

