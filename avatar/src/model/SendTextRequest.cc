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

#include <alibabacloud/avatar/model/SendTextRequest.h>

using AlibabaCloud::Avatar::Model::SendTextRequest;

SendTextRequest::SendTextRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SendText") {
  setMethod(HttpRequest::Method::Post);
}

SendTextRequest::~SendTextRequest() {}

bool SendTextRequest::getFeedback() const {
  return feedback_;
}

void SendTextRequest::setFeedback(bool feedback) {
  feedback_ = feedback;
  setParameter(std::string("Feedback"), feedback ? "true" : "false");
}

std::string SendTextRequest::getUniqueCode() const {
  return uniqueCode_;
}

void SendTextRequest::setUniqueCode(const std::string &uniqueCode) {
  uniqueCode_ = uniqueCode;
  setParameter(std::string("UniqueCode"), uniqueCode);
}

SendTextRequest::StreamExtension SendTextRequest::getStreamExtension() const {
  return streamExtension_;
}

void SendTextRequest::setStreamExtension(const SendTextRequest::StreamExtension &streamExtension) {
  streamExtension_ = streamExtension;
  setParameter(std::string("StreamExtension") + ".IsStream", streamExtension.isStream ? "true" : "false");
  setParameter(std::string("StreamExtension") + ".Index", std::to_string(streamExtension.index));
  setParameter(std::string("StreamExtension") + ".Position", streamExtension.position);
}

long SendTextRequest::getTenantId() const {
  return tenantId_;
}

void SendTextRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

bool SendTextRequest::getInterrupt() const {
  return interrupt_;
}

void SendTextRequest::setInterrupt(bool interrupt) {
  interrupt_ = interrupt;
  setParameter(std::string("Interrupt"), interrupt ? "true" : "false");
}

std::string SendTextRequest::getSessionId() const {
  return sessionId_;
}

void SendTextRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string SendTextRequest::getText() const {
  return text_;
}

void SendTextRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

