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

#include <alibabacloud/cms/model/ApplyMetricRuleTemplateRequest.h>

using AlibabaCloud::Cms::Model::ApplyMetricRuleTemplateRequest;

ApplyMetricRuleTemplateRequest::ApplyMetricRuleTemplateRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ApplyMetricRuleTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ApplyMetricRuleTemplateRequest::~ApplyMetricRuleTemplateRequest() {}

std::string ApplyMetricRuleTemplateRequest::getApplyMode() const {
  return applyMode_;
}

void ApplyMetricRuleTemplateRequest::setApplyMode(const std::string &applyMode) {
  applyMode_ = applyMode;
  setParameter(std::string("ApplyMode"), applyMode);
}

std::string ApplyMetricRuleTemplateRequest::getWebhook() const {
  return webhook_;
}

void ApplyMetricRuleTemplateRequest::setWebhook(const std::string &webhook) {
  webhook_ = webhook;
  setParameter(std::string("Webhook"), webhook);
}

std::string ApplyMetricRuleTemplateRequest::getTemplateIds() const {
  return templateIds_;
}

void ApplyMetricRuleTemplateRequest::setTemplateIds(const std::string &templateIds) {
  templateIds_ = templateIds;
  setParameter(std::string("TemplateIds"), templateIds);
}

long ApplyMetricRuleTemplateRequest::getEnableEndTime() const {
  return enableEndTime_;
}

void ApplyMetricRuleTemplateRequest::setEnableEndTime(long enableEndTime) {
  enableEndTime_ = enableEndTime;
  setParameter(std::string("EnableEndTime"), std::to_string(enableEndTime));
}

long ApplyMetricRuleTemplateRequest::getGroupId() const {
  return groupId_;
}

void ApplyMetricRuleTemplateRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

long ApplyMetricRuleTemplateRequest::getNotifyLevel() const {
  return notifyLevel_;
}

void ApplyMetricRuleTemplateRequest::setNotifyLevel(long notifyLevel) {
  notifyLevel_ = notifyLevel;
  setParameter(std::string("NotifyLevel"), std::to_string(notifyLevel));
}

long ApplyMetricRuleTemplateRequest::getEnableStartTime() const {
  return enableStartTime_;
}

void ApplyMetricRuleTemplateRequest::setEnableStartTime(long enableStartTime) {
  enableStartTime_ = enableStartTime;
  setParameter(std::string("EnableStartTime"), std::to_string(enableStartTime));
}

long ApplyMetricRuleTemplateRequest::getSilenceTime() const {
  return silenceTime_;
}

void ApplyMetricRuleTemplateRequest::setSilenceTime(long silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

