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

#include <alibabacloud/outboundbot/model/CreateInstanceRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

int CreateInstanceRequest::getMaxConcurrentConversation() const {
  return maxConcurrentConversation_;
}

void CreateInstanceRequest::setMaxConcurrentConversation(int maxConcurrentConversation) {
  maxConcurrentConversation_ = maxConcurrentConversation;
  setParameter(std::string("MaxConcurrentConversation"), std::to_string(maxConcurrentConversation));
}

std::string CreateInstanceRequest::getSecretKey() const {
  return secretKey_;
}

void CreateInstanceRequest::setSecretKey(const std::string &secretKey) {
  secretKey_ = secretKey;
  setParameter(std::string("SecretKey"), secretKey);
}

std::string CreateInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateInstanceRequest::getEndpoint() const {
  return endpoint_;
}

void CreateInstanceRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::vector<std::string> CreateInstanceRequest::getCallingNumber() const {
  return callingNumber_;
}

void CreateInstanceRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateInstanceRequest::getCallCenterInstanceId() const {
  return callCenterInstanceId_;
}

void CreateInstanceRequest::setCallCenterInstanceId(const std::string &callCenterInstanceId) {
  callCenterInstanceId_ = callCenterInstanceId;
  setParameter(std::string("CallCenterInstanceId"), callCenterInstanceId);
}

std::string CreateInstanceRequest::getAccessKey() const {
  return accessKey_;
}

void CreateInstanceRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string CreateInstanceRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void CreateInstanceRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}

std::string CreateInstanceRequest::getNluServiceType() const {
  return nluServiceType_;
}

void CreateInstanceRequest::setNluServiceType(const std::string &nluServiceType) {
  nluServiceType_ = nluServiceType;
  setParameter(std::string("NluServiceType"), nluServiceType);
}

