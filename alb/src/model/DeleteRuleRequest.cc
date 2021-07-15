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

#include <alibabacloud/alb/model/DeleteRuleRequest.h>

using AlibabaCloud::Alb::Model::DeleteRuleRequest;

DeleteRuleRequest::DeleteRuleRequest()
    : RpcServiceRequest("alb", "2020-06-16", "DeleteRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRuleRequest::~DeleteRuleRequest() {}

std::string DeleteRuleRequest::getClientToken() const {
  return clientToken_;
}

void DeleteRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteRuleRequest::getDryRun() const {
  return dryRun_;
}

void DeleteRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

