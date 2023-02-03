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

#include <alibabacloud/mse/model/AddSecurityGroupRuleRequest.h>

using AlibabaCloud::Mse::Model::AddSecurityGroupRuleRequest;

AddSecurityGroupRuleRequest::AddSecurityGroupRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddSecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

AddSecurityGroupRuleRequest::~AddSecurityGroupRuleRequest() {}

std::string AddSecurityGroupRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddSecurityGroupRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddSecurityGroupRuleRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddSecurityGroupRuleRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddSecurityGroupRuleRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AddSecurityGroupRuleRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AddSecurityGroupRuleRequest::getDescription() const {
  return description_;
}

void AddSecurityGroupRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddSecurityGroupRuleRequest::getPortRange() const {
  return portRange_;
}

void AddSecurityGroupRuleRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string AddSecurityGroupRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddSecurityGroupRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

