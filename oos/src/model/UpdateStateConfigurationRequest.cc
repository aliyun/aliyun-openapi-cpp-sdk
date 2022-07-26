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

#include <alibabacloud/oos/model/UpdateStateConfigurationRequest.h>

using AlibabaCloud::Oos::Model::UpdateStateConfigurationRequest;

UpdateStateConfigurationRequest::UpdateStateConfigurationRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateStateConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

UpdateStateConfigurationRequest::~UpdateStateConfigurationRequest() {}

std::string UpdateStateConfigurationRequest::getScheduleType() const {
  return scheduleType_;
}

void UpdateStateConfigurationRequest::setScheduleType(const std::string &scheduleType) {
  scheduleType_ = scheduleType;
  setParameter(std::string("ScheduleType"), scheduleType);
}

std::string UpdateStateConfigurationRequest::getClientToken() const {
  return clientToken_;
}

void UpdateStateConfigurationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateStateConfigurationRequest::getDescription() const {
  return description_;
}

void UpdateStateConfigurationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateStateConfigurationRequest::getTargets() const {
  return targets_;
}

void UpdateStateConfigurationRequest::setTargets(const std::string &targets) {
  targets_ = targets;
  setParameter(std::string("Targets"), targets);
}

std::string UpdateStateConfigurationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateStateConfigurationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateStateConfigurationRequest::getRegionId() const {
  return regionId_;
}

void UpdateStateConfigurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateStateConfigurationRequest::getScheduleExpression() const {
  return scheduleExpression_;
}

void UpdateStateConfigurationRequest::setScheduleExpression(const std::string &scheduleExpression) {
  scheduleExpression_ = scheduleExpression;
  setParameter(std::string("ScheduleExpression"), scheduleExpression);
}

std::string UpdateStateConfigurationRequest::getConfigureMode() const {
  return configureMode_;
}

void UpdateStateConfigurationRequest::setConfigureMode(const std::string &configureMode) {
  configureMode_ = configureMode;
  setParameter(std::string("ConfigureMode"), configureMode);
}

std::string UpdateStateConfigurationRequest::getTags() const {
  return tags_;
}

void UpdateStateConfigurationRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateStateConfigurationRequest::getParameters() const {
  return parameters_;
}

void UpdateStateConfigurationRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

std::string UpdateStateConfigurationRequest::getStateConfigurationId() const {
  return stateConfigurationId_;
}

void UpdateStateConfigurationRequest::setStateConfigurationId(const std::string &stateConfigurationId) {
  stateConfigurationId_ = stateConfigurationId;
  setParameter(std::string("StateConfigurationId"), stateConfigurationId);
}

