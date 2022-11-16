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

#include <alibabacloud/dataworks-public/model/CreateRemindRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateRemindRequest;

CreateRemindRequest::CreateRemindRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateRemind") {
  setMethod(HttpRequest::Method::Post);
}

CreateRemindRequest::~CreateRemindRequest() {}

std::string CreateRemindRequest::getAlertUnit() const {
  return alertUnit_;
}

void CreateRemindRequest::setAlertUnit(const std::string &alertUnit) {
  alertUnit_ = alertUnit;
  setBodyParameter(std::string("AlertUnit"), alertUnit);
}

std::string CreateRemindRequest::getRobotUrls() const {
  return robotUrls_;
}

void CreateRemindRequest::setRobotUrls(const std::string &robotUrls) {
  robotUrls_ = robotUrls;
  setBodyParameter(std::string("RobotUrls"), robotUrls);
}

std::string CreateRemindRequest::getBizProcessIds() const {
  return bizProcessIds_;
}

void CreateRemindRequest::setBizProcessIds(const std::string &bizProcessIds) {
  bizProcessIds_ = bizProcessIds;
  setBodyParameter(std::string("BizProcessIds"), bizProcessIds);
}

std::string CreateRemindRequest::getRemindType() const {
  return remindType_;
}

void CreateRemindRequest::setRemindType(const std::string &remindType) {
  remindType_ = remindType;
  setBodyParameter(std::string("RemindType"), remindType);
}

std::string CreateRemindRequest::getBaselineIds() const {
  return baselineIds_;
}

void CreateRemindRequest::setBaselineIds(const std::string &baselineIds) {
  baselineIds_ = baselineIds;
  setBodyParameter(std::string("BaselineIds"), baselineIds);
}

long CreateRemindRequest::getProjectId() const {
  return projectId_;
}

void CreateRemindRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateRemindRequest::getDndEnd() const {
  return dndEnd_;
}

void CreateRemindRequest::setDndEnd(const std::string &dndEnd) {
  dndEnd_ = dndEnd;
  setBodyParameter(std::string("DndEnd"), dndEnd);
}

std::string CreateRemindRequest::getRemindUnit() const {
  return remindUnit_;
}

void CreateRemindRequest::setRemindUnit(const std::string &remindUnit) {
  remindUnit_ = remindUnit;
  setBodyParameter(std::string("RemindUnit"), remindUnit);
}

int CreateRemindRequest::getAlertInterval() const {
  return alertInterval_;
}

void CreateRemindRequest::setAlertInterval(int alertInterval) {
  alertInterval_ = alertInterval;
  setBodyParameter(std::string("AlertInterval"), std::to_string(alertInterval));
}

std::string CreateRemindRequest::getAlertMethods() const {
  return alertMethods_;
}

void CreateRemindRequest::setAlertMethods(const std::string &alertMethods) {
  alertMethods_ = alertMethods;
  setBodyParameter(std::string("AlertMethods"), alertMethods);
}

int CreateRemindRequest::getMaxAlertTimes() const {
  return maxAlertTimes_;
}

void CreateRemindRequest::setMaxAlertTimes(int maxAlertTimes) {
  maxAlertTimes_ = maxAlertTimes;
  setBodyParameter(std::string("MaxAlertTimes"), std::to_string(maxAlertTimes));
}

std::string CreateRemindRequest::getAlertTargets() const {
  return alertTargets_;
}

void CreateRemindRequest::setAlertTargets(const std::string &alertTargets) {
  alertTargets_ = alertTargets;
  setBodyParameter(std::string("AlertTargets"), alertTargets);
}

std::string CreateRemindRequest::getWebhooks() const {
  return webhooks_;
}

void CreateRemindRequest::setWebhooks(const std::string &webhooks) {
  webhooks_ = webhooks;
  setBodyParameter(std::string("Webhooks"), webhooks);
}

std::string CreateRemindRequest::getDetail() const {
  return detail_;
}

void CreateRemindRequest::setDetail(const std::string &detail) {
  detail_ = detail;
  setBodyParameter(std::string("Detail"), detail);
}

std::string CreateRemindRequest::getRemindName() const {
  return remindName_;
}

void CreateRemindRequest::setRemindName(const std::string &remindName) {
  remindName_ = remindName;
  setBodyParameter(std::string("RemindName"), remindName);
}

std::string CreateRemindRequest::getNodeIds() const {
  return nodeIds_;
}

void CreateRemindRequest::setNodeIds(const std::string &nodeIds) {
  nodeIds_ = nodeIds;
  setBodyParameter(std::string("NodeIds"), nodeIds);
}

