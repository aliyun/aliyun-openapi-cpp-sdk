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

#include <alibabacloud/avatar/model/SendCommandRequest.h>

using AlibabaCloud::Avatar::Model::SendCommandRequest;

SendCommandRequest::SendCommandRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SendCommand") {
  setMethod(HttpRequest::Method::Post);
}

SendCommandRequest::~SendCommandRequest() {}

bool SendCommandRequest::getFeedback() const {
  return feedback_;
}

void SendCommandRequest::setFeedback(bool feedback) {
  feedback_ = feedback;
  setParameter(std::string("Feedback"), feedback ? "true" : "false");
}

std::string SendCommandRequest::getCode() const {
  return code_;
}

void SendCommandRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string SendCommandRequest::getUniqueCode() const {
  return uniqueCode_;
}

void SendCommandRequest::setUniqueCode(const std::string &uniqueCode) {
  uniqueCode_ = uniqueCode;
  setParameter(std::string("UniqueCode"), uniqueCode);
}

long SendCommandRequest::getTenantId() const {
  return tenantId_;
}

void SendCommandRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SendCommandRequest::getSessionId() const {
  return sessionId_;
}

void SendCommandRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::map<std::string, std::string> SendCommandRequest::getContent() const {
  return content_;
}

void SendCommandRequest::setContent(const std::map<std::string, std::string> &content) {
  content_ = content;
  for(auto const &iter1 : content) {
    setParameter(std::string("Content") + "." + iter1.first, iter1.second);
  }
}

