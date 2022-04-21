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

#include <alibabacloud/outboundbot/model/ModifyInstanceRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRequest::~ModifyInstanceRequest() {}

int ModifyInstanceRequest::getMaxConcurrentConversation() const {
  return maxConcurrentConversation_;
}

void ModifyInstanceRequest::setMaxConcurrentConversation(int maxConcurrentConversation) {
  maxConcurrentConversation_ = maxConcurrentConversation;
  setParameter(std::string("MaxConcurrentConversation"), std::to_string(maxConcurrentConversation));
}

std::string ModifyInstanceRequest::getSecretKey() const {
  return secretKey_;
}

void ModifyInstanceRequest::setSecretKey(const std::string &secretKey) {
  secretKey_ = secretKey;
  setParameter(std::string("SecretKey"), secretKey);
}

std::string ModifyInstanceRequest::getEndpoint() const {
  return endpoint_;
}

void ModifyInstanceRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::vector<std::string> ModifyInstanceRequest::getCallingNumber() const {
  return callingNumber_;
}

void ModifyInstanceRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string ModifyInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string ModifyInstanceRequest::getCallCenterInstanceId() const {
  return callCenterInstanceId_;
}

void ModifyInstanceRequest::setCallCenterInstanceId(const std::string &callCenterInstanceId) {
  callCenterInstanceId_ = callCenterInstanceId;
  setParameter(std::string("CallCenterInstanceId"), callCenterInstanceId);
}

std::string ModifyInstanceRequest::getAccessKey() const {
  return accessKey_;
}

void ModifyInstanceRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string ModifyInstanceRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void ModifyInstanceRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}

std::string ModifyInstanceRequest::getNluServiceType() const {
  return nluServiceType_;
}

void ModifyInstanceRequest::setNluServiceType(const std::string &nluServiceType) {
  nluServiceType_ = nluServiceType;
  setParameter(std::string("NluServiceType"), nluServiceType);
}

