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

#include <alibabacloud/smartsales/model/UpdateCallRequest.h>

using AlibabaCloud::SmartSales::Model::UpdateCallRequest;

UpdateCallRequest::UpdateCallRequest()
    : RpcServiceRequest("smartsales", "2022-08-18", "UpdateCall") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCallRequest::~UpdateCallRequest() {}

long UpdateCallRequest::getCallId() const {
  return callId_;
}

void UpdateCallRequest::setCallId(long callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), std::to_string(callId));
}

std::string UpdateCallRequest::getClueStatusRemark() const {
  return clueStatusRemark_;
}

void UpdateCallRequest::setClueStatusRemark(const std::string &clueStatusRemark) {
  clueStatusRemark_ = clueStatusRemark;
  setParameter(std::string("ClueStatusRemark"), clueStatusRemark);
}

std::string UpdateCallRequest::getAgentKey() const {
  return agentKey_;
}

void UpdateCallRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

int UpdateCallRequest::getBusinessResult() const {
  return businessResult_;
}

void UpdateCallRequest::setBusinessResult(int businessResult) {
  businessResult_ = businessResult;
  setParameter(std::string("BusinessResult"), std::to_string(businessResult));
}

std::string UpdateCallRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateCallRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateCallRequest::getCustomCallId() const {
  return customCallId_;
}

void UpdateCallRequest::setCustomCallId(const std::string &customCallId) {
  customCallId_ = customCallId;
  setParameter(std::string("CustomCallId"), customCallId);
}

