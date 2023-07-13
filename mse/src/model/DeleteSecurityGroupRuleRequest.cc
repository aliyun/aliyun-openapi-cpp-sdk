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

#include <alibabacloud/mse/model/DeleteSecurityGroupRuleRequest.h>

using AlibabaCloud::Mse::Model::DeleteSecurityGroupRuleRequest;

DeleteSecurityGroupRuleRequest::DeleteSecurityGroupRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteSecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSecurityGroupRuleRequest::~DeleteSecurityGroupRuleRequest() {}

std::string DeleteSecurityGroupRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteSecurityGroupRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteSecurityGroupRuleRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteSecurityGroupRuleRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long DeleteSecurityGroupRuleRequest::getId() const {
  return id_;
}

void DeleteSecurityGroupRuleRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DeleteSecurityGroupRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteSecurityGroupRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

