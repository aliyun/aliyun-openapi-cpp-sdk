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

#include <alibabacloud/cms/model/ModifyMetricRuleTemplateRequest.h>

using AlibabaCloud::Cms::Model::ModifyMetricRuleTemplateRequest;

ModifyMetricRuleTemplateRequest::ModifyMetricRuleTemplateRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ModifyMetricRuleTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMetricRuleTemplateRequest::~ModifyMetricRuleTemplateRequest() {}

long ModifyMetricRuleTemplateRequest::getRestVersion() const {
  return restVersion_;
}

void ModifyMetricRuleTemplateRequest::setRestVersion(long restVersion) {
  restVersion_ = restVersion;
  setParameter(std::string("RestVersion"), std::to_string(restVersion));
}

std::string ModifyMetricRuleTemplateRequest::getDescription() const {
  return description_;
}

void ModifyMetricRuleTemplateRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyMetricRuleTemplateRequest::getTemplateId() const {
  return templateId_;
}

void ModifyMetricRuleTemplateRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string ModifyMetricRuleTemplateRequest::getName() const {
  return name_;
}

void ModifyMetricRuleTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<ModifyMetricRuleTemplateRequest::AlertTemplates> ModifyMetricRuleTemplateRequest::getAlertTemplates() const {
  return alertTemplates_;
}

void ModifyMetricRuleTemplateRequest::setAlertTemplates(const std::vector<ModifyMetricRuleTemplateRequest::AlertTemplates> &alertTemplates) {
  alertTemplates_ = alertTemplates;
  for(int dep1 = 0; dep1 != alertTemplates.size(); dep1++) {
  auto alertTemplatesObj = alertTemplates.at(dep1);
  std::string alertTemplatesObjStr = std::string("AlertTemplates") + "." + std::to_string(dep1 + 1);
    setParameter(alertTemplatesObjStr + ".Escalations.Warn.Threshold", alertTemplatesObj.escalationsWarnThreshold);
    setParameter(alertTemplatesObjStr + ".Period", std::to_string(alertTemplatesObj.period));
    setParameter(alertTemplatesObjStr + ".Webhook", alertTemplatesObj.webhook);
    setParameter(alertTemplatesObjStr + ".Escalations.Warn.ComparisonOperator", alertTemplatesObj.escalationsWarnComparisonOperator);
    setParameter(alertTemplatesObjStr + ".Escalations.Critical.Statistics", alertTemplatesObj.escalationsCriticalStatistics);
    setParameter(alertTemplatesObjStr + ".Escalations.Info.Times", std::to_string(alertTemplatesObj.escalationsInfoTimes));
    setParameter(alertTemplatesObjStr + ".RuleName", alertTemplatesObj.ruleName);
    setParameter(alertTemplatesObjStr + ".Escalations.Info.Statistics", alertTemplatesObj.escalationsInfoStatistics);
    setParameter(alertTemplatesObjStr + ".Escalations.Critical.Times", std::to_string(alertTemplatesObj.escalationsCriticalTimes));
    setParameter(alertTemplatesObjStr + ".Escalations.Info.ComparisonOperator", alertTemplatesObj.escalationsInfoComparisonOperator);
    setParameter(alertTemplatesObjStr + ".Escalations.Info.Threshold", alertTemplatesObj.escalationsInfoThreshold);
    setParameter(alertTemplatesObjStr + ".Escalations.Warn.Statistics", alertTemplatesObj.escalationsWarnStatistics);
    setParameter(alertTemplatesObjStr + ".Namespace", alertTemplatesObj._namespace);
    setParameter(alertTemplatesObjStr + ".Selector", alertTemplatesObj.selector);
    setParameter(alertTemplatesObjStr + ".MetricName", alertTemplatesObj.metricName);
    setParameter(alertTemplatesObjStr + ".Escalations.Warn.Times", std::to_string(alertTemplatesObj.escalationsWarnTimes));
    setParameter(alertTemplatesObjStr + ".Category", alertTemplatesObj.category);
    setParameter(alertTemplatesObjStr + ".Escalations.Critical.ComparisonOperator", alertTemplatesObj.escalationsCriticalComparisonOperator);
    setParameter(alertTemplatesObjStr + ".Escalations.Critical.Threshold", alertTemplatesObj.escalationsCriticalThreshold);
  }
}

