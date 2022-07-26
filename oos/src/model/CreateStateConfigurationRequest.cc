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

#include <alibabacloud/oos/model/CreateStateConfigurationRequest.h>

using AlibabaCloud::Oos::Model::CreateStateConfigurationRequest;

CreateStateConfigurationRequest::CreateStateConfigurationRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreateStateConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

CreateStateConfigurationRequest::~CreateStateConfigurationRequest() {}

std::string CreateStateConfigurationRequest::getScheduleType() const {
  return scheduleType_;
}

void CreateStateConfigurationRequest::setScheduleType(const std::string &scheduleType) {
  scheduleType_ = scheduleType;
  setParameter(std::string("ScheduleType"), scheduleType);
}

std::string CreateStateConfigurationRequest::getClientToken() const {
  return clientToken_;
}

void CreateStateConfigurationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateStateConfigurationRequest::getDescription() const {
  return description_;
}

void CreateStateConfigurationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateStateConfigurationRequest::getTargets() const {
  return targets_;
}

void CreateStateConfigurationRequest::setTargets(const std::string &targets) {
  targets_ = targets;
  setParameter(std::string("Targets"), targets);
}

std::string CreateStateConfigurationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateStateConfigurationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateStateConfigurationRequest::getTemplateVersion() const {
  return templateVersion_;
}

void CreateStateConfigurationRequest::setTemplateVersion(const std::string &templateVersion) {
  templateVersion_ = templateVersion;
  setParameter(std::string("TemplateVersion"), templateVersion);
}

std::string CreateStateConfigurationRequest::getRegionId() const {
  return regionId_;
}

void CreateStateConfigurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateStateConfigurationRequest::getScheduleExpression() const {
  return scheduleExpression_;
}

void CreateStateConfigurationRequest::setScheduleExpression(const std::string &scheduleExpression) {
  scheduleExpression_ = scheduleExpression;
  setParameter(std::string("ScheduleExpression"), scheduleExpression);
}

std::string CreateStateConfigurationRequest::getTemplateName() const {
  return templateName_;
}

void CreateStateConfigurationRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string CreateStateConfigurationRequest::getConfigureMode() const {
  return configureMode_;
}

void CreateStateConfigurationRequest::setConfigureMode(const std::string &configureMode) {
  configureMode_ = configureMode;
  setParameter(std::string("ConfigureMode"), configureMode);
}

std::string CreateStateConfigurationRequest::getTags() const {
  return tags_;
}

void CreateStateConfigurationRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateStateConfigurationRequest::getParameters() const {
  return parameters_;
}

void CreateStateConfigurationRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

