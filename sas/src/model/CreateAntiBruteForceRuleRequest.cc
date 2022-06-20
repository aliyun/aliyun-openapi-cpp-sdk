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

#include <alibabacloud/sas/model/CreateAntiBruteForceRuleRequest.h>

using AlibabaCloud::Sas::Model::CreateAntiBruteForceRuleRequest;

CreateAntiBruteForceRuleRequest::CreateAntiBruteForceRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateAntiBruteForceRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAntiBruteForceRuleRequest::~CreateAntiBruteForceRuleRequest() {}

long CreateAntiBruteForceRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAntiBruteForceRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateAntiBruteForceRuleRequest::getForbiddenTime() const {
  return forbiddenTime_;
}

void CreateAntiBruteForceRuleRequest::setForbiddenTime(int forbiddenTime) {
  forbiddenTime_ = forbiddenTime;
  setParameter(std::string("ForbiddenTime"), std::to_string(forbiddenTime));
}

int CreateAntiBruteForceRuleRequest::getFailCount() const {
  return failCount_;
}

void CreateAntiBruteForceRuleRequest::setFailCount(int failCount) {
  failCount_ = failCount;
  setParameter(std::string("FailCount"), std::to_string(failCount));
}

std::string CreateAntiBruteForceRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateAntiBruteForceRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

bool CreateAntiBruteForceRuleRequest::getEnableSmartRule() const {
  return enableSmartRule_;
}

void CreateAntiBruteForceRuleRequest::setEnableSmartRule(bool enableSmartRule) {
  enableSmartRule_ = enableSmartRule;
  setParameter(std::string("EnableSmartRule"), enableSmartRule ? "true" : "false");
}

std::vector<std::string> CreateAntiBruteForceRuleRequest::getUuidList() const {
  return uuidList_;
}

void CreateAntiBruteForceRuleRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

std::string CreateAntiBruteForceRuleRequest::getName() const {
  return name_;
}

void CreateAntiBruteForceRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int CreateAntiBruteForceRuleRequest::getSpan() const {
  return span_;
}

void CreateAntiBruteForceRuleRequest::setSpan(int span) {
  span_ = span;
  setParameter(std::string("Span"), std::to_string(span));
}

bool CreateAntiBruteForceRuleRequest::getDefaultRule() const {
  return defaultRule_;
}

void CreateAntiBruteForceRuleRequest::setDefaultRule(bool defaultRule) {
  defaultRule_ = defaultRule;
  setParameter(std::string("DefaultRule"), defaultRule ? "true" : "false");
}

