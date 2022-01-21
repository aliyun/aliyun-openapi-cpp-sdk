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

#include <alibabacloud/cms/model/PutCustomMetricRuleRequest.h>

using AlibabaCloud::Cms::Model::PutCustomMetricRuleRequest;

PutCustomMetricRuleRequest::PutCustomMetricRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutCustomMetricRule") {
  setMethod(HttpRequest::Method::Post);
}

PutCustomMetricRuleRequest::~PutCustomMetricRuleRequest() {}

std::string PutCustomMetricRuleRequest::getWebhook() const {
  return webhook_;
}

void PutCustomMetricRuleRequest::setWebhook(const std::string &webhook) {
  webhook_ = webhook;
  setParameter(std::string("Webhook"), webhook);
}

std::string PutCustomMetricRuleRequest::getRuleName() const {
  return ruleName_;
}

void PutCustomMetricRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string PutCustomMetricRuleRequest::getThreshold() const {
  return threshold_;
}

void PutCustomMetricRuleRequest::setThreshold(const std::string &threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), threshold);
}

std::string PutCustomMetricRuleRequest::getEffectiveInterval() const {
  return effectiveInterval_;
}

void PutCustomMetricRuleRequest::setEffectiveInterval(const std::string &effectiveInterval) {
  effectiveInterval_ = effectiveInterval;
  setParameter(std::string("EffectiveInterval"), effectiveInterval);
}

std::string PutCustomMetricRuleRequest::getEmailSubject() const {
  return emailSubject_;
}

void PutCustomMetricRuleRequest::setEmailSubject(const std::string &emailSubject) {
  emailSubject_ = emailSubject;
  setParameter(std::string("EmailSubject"), emailSubject);
}

int PutCustomMetricRuleRequest::getEvaluationCount() const {
  return evaluationCount_;
}

void PutCustomMetricRuleRequest::setEvaluationCount(int evaluationCount) {
  evaluationCount_ = evaluationCount;
  setParameter(std::string("EvaluationCount"), std::to_string(evaluationCount));
}

int PutCustomMetricRuleRequest::getSilenceTime() const {
  return silenceTime_;
}

void PutCustomMetricRuleRequest::setSilenceTime(int silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

std::string PutCustomMetricRuleRequest::getMetricName() const {
  return metricName_;
}

void PutCustomMetricRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string PutCustomMetricRuleRequest::getPeriod() const {
  return period_;
}

void PutCustomMetricRuleRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string PutCustomMetricRuleRequest::getContactGroups() const {
  return contactGroups_;
}

void PutCustomMetricRuleRequest::setContactGroups(const std::string &contactGroups) {
  contactGroups_ = contactGroups;
  setParameter(std::string("ContactGroups"), contactGroups);
}

std::string PutCustomMetricRuleRequest::getLevel() const {
  return level_;
}

void PutCustomMetricRuleRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string PutCustomMetricRuleRequest::getGroupId() const {
  return groupId_;
}

void PutCustomMetricRuleRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string PutCustomMetricRuleRequest::getResources() const {
  return resources_;
}

void PutCustomMetricRuleRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

std::string PutCustomMetricRuleRequest::getRuleId() const {
  return ruleId_;
}

void PutCustomMetricRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string PutCustomMetricRuleRequest::getComparisonOperator() const {
  return comparisonOperator_;
}

void PutCustomMetricRuleRequest::setComparisonOperator(const std::string &comparisonOperator) {
  comparisonOperator_ = comparisonOperator;
  setParameter(std::string("ComparisonOperator"), comparisonOperator);
}

std::string PutCustomMetricRuleRequest::getStatistics() const {
  return statistics_;
}

void PutCustomMetricRuleRequest::setStatistics(const std::string &statistics) {
  statistics_ = statistics;
  setParameter(std::string("Statistics"), statistics);
}

