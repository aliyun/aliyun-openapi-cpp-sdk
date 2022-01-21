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

#include <alibabacloud/cms/model/PutResourceMetricRuleRequest.h>

using AlibabaCloud::Cms::Model::PutResourceMetricRuleRequest;

PutResourceMetricRuleRequest::PutResourceMetricRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutResourceMetricRule") {
  setMethod(HttpRequest::Method::Post);
}

PutResourceMetricRuleRequest::~PutResourceMetricRuleRequest() {}

std::string PutResourceMetricRuleRequest::getWebhook() const {
  return webhook_;
}

void PutResourceMetricRuleRequest::setWebhook(const std::string &webhook) {
  webhook_ = webhook;
  setParameter(std::string("Webhook"), webhook);
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnComparisonOperator() const {
  return escalationsWarnComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnComparisonOperator(const std::string &escalationsWarnComparisonOperator) {
  escalationsWarnComparisonOperator_ = escalationsWarnComparisonOperator;
  setParameter(std::string("Escalations.Warn.ComparisonOperator"), escalationsWarnComparisonOperator);
}

std::string PutResourceMetricRuleRequest::getRuleName() const {
  return ruleName_;
}

void PutResourceMetricRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string PutResourceMetricRuleRequest::getEffectiveInterval() const {
  return effectiveInterval_;
}

void PutResourceMetricRuleRequest::setEffectiveInterval(const std::string &effectiveInterval) {
  effectiveInterval_ = effectiveInterval;
  setParameter(std::string("EffectiveInterval"), effectiveInterval);
}

std::string PutResourceMetricRuleRequest::getNoDataPolicy() const {
  return noDataPolicy_;
}

void PutResourceMetricRuleRequest::setNoDataPolicy(const std::string &noDataPolicy) {
  noDataPolicy_ = noDataPolicy;
  setParameter(std::string("NoDataPolicy"), noDataPolicy);
}

std::string PutResourceMetricRuleRequest::getNoEffectiveInterval() const {
  return noEffectiveInterval_;
}

void PutResourceMetricRuleRequest::setNoEffectiveInterval(const std::string &noEffectiveInterval) {
  noEffectiveInterval_ = noEffectiveInterval;
  setParameter(std::string("NoEffectiveInterval"), noEffectiveInterval);
}

std::string PutResourceMetricRuleRequest::getEmailSubject() const {
  return emailSubject_;
}

void PutResourceMetricRuleRequest::setEmailSubject(const std::string &emailSubject) {
  emailSubject_ = emailSubject;
  setParameter(std::string("EmailSubject"), emailSubject);
}

std::string PutResourceMetricRuleRequest::getOptions() const {
  return options_;
}

void PutResourceMetricRuleRequest::setOptions(const std::string &options) {
  options_ = options;
  setParameter(std::string("Options"), options);
}

std::string PutResourceMetricRuleRequest::getMetricName() const {
  return metricName_;
}

void PutResourceMetricRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

int PutResourceMetricRuleRequest::getEscalationsWarnTimes() const {
  return escalationsWarnTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnTimes(int escalationsWarnTimes) {
  escalationsWarnTimes_ = escalationsWarnTimes;
  setParameter(std::string("Escalations.Warn.Times"), std::to_string(escalationsWarnTimes));
}

std::string PutResourceMetricRuleRequest::getPeriod() const {
  return period_;
}

void PutResourceMetricRuleRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnThreshold() const {
  return escalationsWarnThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnThreshold(const std::string &escalationsWarnThreshold) {
  escalationsWarnThreshold_ = escalationsWarnThreshold;
  setParameter(std::string("Escalations.Warn.Threshold"), escalationsWarnThreshold);
}

std::string PutResourceMetricRuleRequest::getContactGroups() const {
  return contactGroups_;
}

void PutResourceMetricRuleRequest::setContactGroups(const std::string &contactGroups) {
  contactGroups_ = contactGroups;
  setParameter(std::string("ContactGroups"), contactGroups);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalStatistics() const {
  return escalationsCriticalStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalStatistics(const std::string &escalationsCriticalStatistics) {
  escalationsCriticalStatistics_ = escalationsCriticalStatistics;
  setParameter(std::string("Escalations.Critical.Statistics"), escalationsCriticalStatistics);
}

std::string PutResourceMetricRuleRequest::getGroupId() const {
  return groupId_;
}

void PutResourceMetricRuleRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string PutResourceMetricRuleRequest::getGroupName() const {
  return groupName_;
}

void PutResourceMetricRuleRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::vector<PutResourceMetricRuleRequest::Labels> PutResourceMetricRuleRequest::getLabels() const {
  return labels_;
}

void PutResourceMetricRuleRequest::setLabels(const std::vector<PutResourceMetricRuleRequest::Labels> &labels) {
  labels_ = labels;
  for(int dep1 = 0; dep1 != labels.size(); dep1++) {
  auto labelsObj = labels.at(dep1);
  std::string labelsObjStr = std::string("Labels") + "." + std::to_string(dep1 + 1);
    setParameter(labelsObjStr + ".Value", labelsObj.value);
    setParameter(labelsObjStr + ".Key", labelsObj.key);
  }
}

std::string PutResourceMetricRuleRequest::getInterval() const {
  return interval_;
}

void PutResourceMetricRuleRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string PutResourceMetricRuleRequest::getRuleId() const {
  return ruleId_;
}

void PutResourceMetricRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalThreshold() const {
  return escalationsCriticalThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalThreshold(const std::string &escalationsCriticalThreshold) {
  escalationsCriticalThreshold_ = escalationsCriticalThreshold;
  setParameter(std::string("Escalations.Critical.Threshold"), escalationsCriticalThreshold);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoStatistics() const {
  return escalationsInfoStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoStatistics(const std::string &escalationsInfoStatistics) {
  escalationsInfoStatistics_ = escalationsInfoStatistics;
  setParameter(std::string("Escalations.Info.Statistics"), escalationsInfoStatistics);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoComparisonOperator() const {
  return escalationsInfoComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoComparisonOperator(const std::string &escalationsInfoComparisonOperator) {
  escalationsInfoComparisonOperator_ = escalationsInfoComparisonOperator;
  setParameter(std::string("Escalations.Info.ComparisonOperator"), escalationsInfoComparisonOperator);
}

int PutResourceMetricRuleRequest::getSilenceTime() const {
  return silenceTime_;
}

void PutResourceMetricRuleRequest::setSilenceTime(int silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

PutResourceMetricRuleRequest::Prometheus PutResourceMetricRuleRequest::getPrometheus() const {
  return prometheus_;
}

void PutResourceMetricRuleRequest::setPrometheus(const PutResourceMetricRuleRequest::Prometheus &prometheus) {
  prometheus_ = prometheus;
  setParameter(std::string("Prometheus") + ".PromQL", prometheus.promQL);
  setParameter(std::string("Prometheus") + ".Times", std::to_string(prometheus.times));
  setParameter(std::string("Prometheus") + ".Level", prometheus.level);
  for(int dep1 = 0; dep1 != prometheus.annotations.size(); dep1++) {
    setParameter(std::string("Prometheus") + ".Annotations." + std::to_string(dep1 + 1) + ".Value", prometheus.annotations[dep1].value);
    setParameter(std::string("Prometheus") + ".Annotations." + std::to_string(dep1 + 1) + ".Key", prometheus.annotations[dep1].key);
  }
}

PutResourceMetricRuleRequest::CompositeExpression PutResourceMetricRuleRequest::getCompositeExpression() const {
  return compositeExpression_;
}

void PutResourceMetricRuleRequest::setCompositeExpression(const PutResourceMetricRuleRequest::CompositeExpression &compositeExpression) {
  compositeExpression_ = compositeExpression;
  setParameter(std::string("CompositeExpression") + ".Times", std::to_string(compositeExpression.times));
  for(int dep1 = 0; dep1 != compositeExpression.expressionList.size(); dep1++) {
    setParameter(std::string("CompositeExpression") + ".ExpressionList." + std::to_string(dep1 + 1) + ".Period", std::to_string(compositeExpression.expressionList[dep1].period));
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

std::string PutResourceMetricRuleRequest::getResources() const {
  return resources_;
}

void PutResourceMetricRuleRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

int PutResourceMetricRuleRequest::getEscalationsInfoTimes() const {
  return escalationsInfoTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoTimes(int escalationsInfoTimes) {
  escalationsInfoTimes_ = escalationsInfoTimes;
  setParameter(std::string("Escalations.Info.Times"), std::to_string(escalationsInfoTimes));
}

std::string PutResourceMetricRuleRequest::getGroupBy() const {
  return groupBy_;
}

void PutResourceMetricRuleRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

int PutResourceMetricRuleRequest::getEscalationsCriticalTimes() const {
  return escalationsCriticalTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalTimes(int escalationsCriticalTimes) {
  escalationsCriticalTimes_ = escalationsCriticalTimes;
  setParameter(std::string("Escalations.Critical.Times"), std::to_string(escalationsCriticalTimes));
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnStatistics() const {
  return escalationsWarnStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnStatistics(const std::string &escalationsWarnStatistics) {
  escalationsWarnStatistics_ = escalationsWarnStatistics;
  setParameter(std::string("Escalations.Warn.Statistics"), escalationsWarnStatistics);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoThreshold() const {
  return escalationsInfoThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoThreshold(const std::string &escalationsInfoThreshold) {
  escalationsInfoThreshold_ = escalationsInfoThreshold;
  setParameter(std::string("Escalations.Info.Threshold"), escalationsInfoThreshold);
}

std::string PutResourceMetricRuleRequest::get_Namespace() const {
  return _namespace_;
}

void PutResourceMetricRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalComparisonOperator() const {
  return escalationsCriticalComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalComparisonOperator(const std::string &escalationsCriticalComparisonOperator) {
  escalationsCriticalComparisonOperator_ = escalationsCriticalComparisonOperator;
  setParameter(std::string("Escalations.Critical.ComparisonOperator"), escalationsCriticalComparisonOperator);
}

