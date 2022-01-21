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

#include <alibabacloud/cms/model/PutGroupMetricRuleRequest.h>

using AlibabaCloud::Cms::Model::PutGroupMetricRuleRequest;

PutGroupMetricRuleRequest::PutGroupMetricRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutGroupMetricRule") {
  setMethod(HttpRequest::Method::Post);
}

PutGroupMetricRuleRequest::~PutGroupMetricRuleRequest() {}

std::string PutGroupMetricRuleRequest::getWebhook() const {
  return webhook_;
}

void PutGroupMetricRuleRequest::setWebhook(const std::string &webhook) {
  webhook_ = webhook;
  setParameter(std::string("Webhook"), webhook);
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnComparisonOperator() const {
  return escalationsWarnComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnComparisonOperator(const std::string &escalationsWarnComparisonOperator) {
  escalationsWarnComparisonOperator_ = escalationsWarnComparisonOperator;
  setParameter(std::string("Escalations.Warn.ComparisonOperator"), escalationsWarnComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getRuleName() const {
  return ruleName_;
}

void PutGroupMetricRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoStatistics() const {
  return escalationsInfoStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoStatistics(const std::string &escalationsInfoStatistics) {
  escalationsInfoStatistics_ = escalationsInfoStatistics;
  setParameter(std::string("Escalations.Info.Statistics"), escalationsInfoStatistics);
}

std::string PutGroupMetricRuleRequest::getEffectiveInterval() const {
  return effectiveInterval_;
}

void PutGroupMetricRuleRequest::setEffectiveInterval(const std::string &effectiveInterval) {
  effectiveInterval_ = effectiveInterval;
  setParameter(std::string("EffectiveInterval"), effectiveInterval);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoComparisonOperator() const {
  return escalationsInfoComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoComparisonOperator(const std::string &escalationsInfoComparisonOperator) {
  escalationsInfoComparisonOperator_ = escalationsInfoComparisonOperator;
  setParameter(std::string("Escalations.Info.ComparisonOperator"), escalationsInfoComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getNoDataPolicy() const {
  return noDataPolicy_;
}

void PutGroupMetricRuleRequest::setNoDataPolicy(const std::string &noDataPolicy) {
  noDataPolicy_ = noDataPolicy;
  setParameter(std::string("NoDataPolicy"), noDataPolicy);
}

std::string PutGroupMetricRuleRequest::getNoEffectiveInterval() const {
  return noEffectiveInterval_;
}

void PutGroupMetricRuleRequest::setNoEffectiveInterval(const std::string &noEffectiveInterval) {
  noEffectiveInterval_ = noEffectiveInterval;
  setParameter(std::string("NoEffectiveInterval"), noEffectiveInterval);
}

std::string PutGroupMetricRuleRequest::getEmailSubject() const {
  return emailSubject_;
}

void PutGroupMetricRuleRequest::setEmailSubject(const std::string &emailSubject) {
  emailSubject_ = emailSubject;
  setParameter(std::string("EmailSubject"), emailSubject);
}

int PutGroupMetricRuleRequest::getSilenceTime() const {
  return silenceTime_;
}

void PutGroupMetricRuleRequest::setSilenceTime(int silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

std::string PutGroupMetricRuleRequest::getMetricName() const {
  return metricName_;
}

void PutGroupMetricRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

int PutGroupMetricRuleRequest::getEscalationsWarnTimes() const {
  return escalationsWarnTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnTimes(int escalationsWarnTimes) {
  escalationsWarnTimes_ = escalationsWarnTimes;
  setParameter(std::string("Escalations.Warn.Times"), std::to_string(escalationsWarnTimes));
}

PutGroupMetricRuleRequest::CompositeExpression PutGroupMetricRuleRequest::getCompositeExpression() const {
  return compositeExpression_;
}

void PutGroupMetricRuleRequest::setCompositeExpression(const PutGroupMetricRuleRequest::CompositeExpression &compositeExpression) {
  compositeExpression_ = compositeExpression;
  setParameter(std::string("CompositeExpression") + ".Times", std::to_string(compositeExpression.times));
  for(int dep1 = 0; dep1 != compositeExpression.expressionList.size(); dep1++) {
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".Period", compositeExpression.expressionList[dep1].period);
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".Threshold", compositeExpression.expressionList[dep1].threshold);
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".Id", compositeExpression.expressionList[dep1].id);
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".MetricName", compositeExpression.expressionList[dep1].metricName);
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".ComparisonOperator", compositeExpression.expressionList[dep1].comparisonOperator);
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".Statistics", compositeExpression.expressionList[dep1].statistics);
  }
  setParameter(std::string("CompositeExpression") + ".Level", compositeExpression.level);
  setParameter(std::string("CompositeExpression") + ".ExpressionRaw", compositeExpression.expressionRaw);
  setParameter(std::string("CompositeExpression") + ".ExpressionListJoin", compositeExpression.expressionListJoin);
}

std::string PutGroupMetricRuleRequest::getPeriod() const {
  return period_;
}

void PutGroupMetricRuleRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnThreshold() const {
  return escalationsWarnThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnThreshold(const std::string &escalationsWarnThreshold) {
  escalationsWarnThreshold_ = escalationsWarnThreshold;
  setParameter(std::string("Escalations.Warn.Threshold"), escalationsWarnThreshold);
}

std::string PutGroupMetricRuleRequest::getContactGroups() const {
  return contactGroups_;
}

void PutGroupMetricRuleRequest::setContactGroups(const std::string &contactGroups) {
  contactGroups_ = contactGroups;
  setParameter(std::string("ContactGroups"), contactGroups);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalStatistics() const {
  return escalationsCriticalStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalStatistics(const std::string &escalationsCriticalStatistics) {
  escalationsCriticalStatistics_ = escalationsCriticalStatistics;
  setParameter(std::string("Escalations.Critical.Statistics"), escalationsCriticalStatistics);
}

std::string PutGroupMetricRuleRequest::getGroupId() const {
  return groupId_;
}

void PutGroupMetricRuleRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int PutGroupMetricRuleRequest::getEscalationsInfoTimes() const {
  return escalationsInfoTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoTimes(int escalationsInfoTimes) {
  escalationsInfoTimes_ = escalationsInfoTimes;
  setParameter(std::string("Escalations.Info.Times"), std::to_string(escalationsInfoTimes));
}

std::string PutGroupMetricRuleRequest::getExtraDimensionJson() const {
  return extraDimensionJson_;
}

void PutGroupMetricRuleRequest::setExtraDimensionJson(const std::string &extraDimensionJson) {
  extraDimensionJson_ = extraDimensionJson;
  setParameter(std::string("ExtraDimensionJson"), extraDimensionJson);
}

int PutGroupMetricRuleRequest::getEscalationsCriticalTimes() const {
  return escalationsCriticalTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalTimes(int escalationsCriticalTimes) {
  escalationsCriticalTimes_ = escalationsCriticalTimes;
  setParameter(std::string("Escalations.Critical.Times"), std::to_string(escalationsCriticalTimes));
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnStatistics() const {
  return escalationsWarnStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnStatistics(const std::string &escalationsWarnStatistics) {
  escalationsWarnStatistics_ = escalationsWarnStatistics;
  setParameter(std::string("Escalations.Warn.Statistics"), escalationsWarnStatistics);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoThreshold() const {
  return escalationsInfoThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoThreshold(const std::string &escalationsInfoThreshold) {
  escalationsInfoThreshold_ = escalationsInfoThreshold;
  setParameter(std::string("Escalations.Info.Threshold"), escalationsInfoThreshold);
}

std::string PutGroupMetricRuleRequest::get_Namespace() const {
  return _namespace_;
}

void PutGroupMetricRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string PutGroupMetricRuleRequest::getInterval() const {
  return interval_;
}

void PutGroupMetricRuleRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string PutGroupMetricRuleRequest::getRuleId() const {
  return ruleId_;
}

void PutGroupMetricRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string PutGroupMetricRuleRequest::getCategory() const {
  return category_;
}

void PutGroupMetricRuleRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalComparisonOperator() const {
  return escalationsCriticalComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalComparisonOperator(const std::string &escalationsCriticalComparisonOperator) {
  escalationsCriticalComparisonOperator_ = escalationsCriticalComparisonOperator;
  setParameter(std::string("Escalations.Critical.ComparisonOperator"), escalationsCriticalComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalThreshold() const {
  return escalationsCriticalThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalThreshold(const std::string &escalationsCriticalThreshold) {
  escalationsCriticalThreshold_ = escalationsCriticalThreshold;
  setParameter(std::string("Escalations.Critical.Threshold"), escalationsCriticalThreshold);
}

std::string PutGroupMetricRuleRequest::getDimensions() const {
  return dimensions_;
}

void PutGroupMetricRuleRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}

