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

#include <alibabacloud/oos/model/StartExecutionRequest.h>

using AlibabaCloud::Oos::Model::StartExecutionRequest;

StartExecutionRequest::StartExecutionRequest()
    : RpcServiceRequest("oos", "2019-06-01", "StartExecution") {
  setMethod(HttpRequest::Method::Post);
}

StartExecutionRequest::~StartExecutionRequest() {}

std::string StartExecutionRequest::getClientToken() const {
  return clientToken_;
}

void StartExecutionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StartExecutionRequest::getDescription() const {
  return description_;
}

void StartExecutionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string StartExecutionRequest::getTemplateURL() const {
  return templateURL_;
}

void StartExecutionRequest::setTemplateURL(const std::string &templateURL) {
  templateURL_ = templateURL;
  setParameter(std::string("TemplateURL"), templateURL);
}

std::string StartExecutionRequest::getMode() const {
  return mode_;
}

void StartExecutionRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string StartExecutionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void StartExecutionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string StartExecutionRequest::getTemplateVersion() const {
  return templateVersion_;
}

void StartExecutionRequest::setTemplateVersion(const std::string &templateVersion) {
  templateVersion_ = templateVersion;
  setParameter(std::string("TemplateVersion"), templateVersion);
}

std::string StartExecutionRequest::getRegionId() const {
  return regionId_;
}

void StartExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartExecutionRequest::getTemplateName() const {
  return templateName_;
}

void StartExecutionRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string StartExecutionRequest::getLoopMode() const {
  return loopMode_;
}

void StartExecutionRequest::setLoopMode(const std::string &loopMode) {
  loopMode_ = loopMode;
  setParameter(std::string("LoopMode"), loopMode);
}

std::string StartExecutionRequest::getSafetyCheck() const {
  return safetyCheck_;
}

void StartExecutionRequest::setSafetyCheck(const std::string &safetyCheck) {
  safetyCheck_ = safetyCheck;
  setParameter(std::string("SafetyCheck"), safetyCheck);
}

std::map<std::string, std::string> StartExecutionRequest::getTags() const {
  return tags_;
}

void StartExecutionRequest::setTags(std::map<std::string, std::string> tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string StartExecutionRequest::getTemplateContent() const {
  return templateContent_;
}

void StartExecutionRequest::setTemplateContent(const std::string &templateContent) {
  templateContent_ = templateContent;
  setParameter(std::string("TemplateContent"), templateContent);
}

std::string StartExecutionRequest::getParentExecutionId() const {
  return parentExecutionId_;
}

void StartExecutionRequest::setParentExecutionId(const std::string &parentExecutionId) {
  parentExecutionId_ = parentExecutionId;
  setParameter(std::string("ParentExecutionId"), parentExecutionId);
}

std::string StartExecutionRequest::getParameters() const {
  return parameters_;
}

void StartExecutionRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

