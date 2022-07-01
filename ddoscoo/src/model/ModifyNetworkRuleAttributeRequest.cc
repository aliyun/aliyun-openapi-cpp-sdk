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

#include <alibabacloud/ddoscoo/model/ModifyNetworkRuleAttributeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyNetworkRuleAttributeRequest;

ModifyNetworkRuleAttributeRequest::ModifyNetworkRuleAttributeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyNetworkRuleAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkRuleAttributeRequest::~ModifyNetworkRuleAttributeRequest() {}

std::string ModifyNetworkRuleAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyNetworkRuleAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyNetworkRuleAttributeRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyNetworkRuleAttributeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyNetworkRuleAttributeRequest::getFrontendPort() const {
  return frontendPort_;
}

void ModifyNetworkRuleAttributeRequest::setFrontendPort(int frontendPort) {
  frontendPort_ = frontendPort;
  setParameter(std::string("FrontendPort"), std::to_string(frontendPort));
}

std::string ModifyNetworkRuleAttributeRequest::getForwardProtocol() const {
  return forwardProtocol_;
}

void ModifyNetworkRuleAttributeRequest::setForwardProtocol(const std::string &forwardProtocol) {
  forwardProtocol_ = forwardProtocol;
  setParameter(std::string("ForwardProtocol"), forwardProtocol);
}

std::string ModifyNetworkRuleAttributeRequest::getConfig() const {
  return config_;
}

void ModifyNetworkRuleAttributeRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

