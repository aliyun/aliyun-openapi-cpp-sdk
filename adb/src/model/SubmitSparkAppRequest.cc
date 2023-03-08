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

#include <alibabacloud/adb/model/SubmitSparkAppRequest.h>

using AlibabaCloud::Adb::Model::SubmitSparkAppRequest;

SubmitSparkAppRequest::SubmitSparkAppRequest()
    : RpcServiceRequest("adb", "2021-12-01", "SubmitSparkApp") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSparkAppRequest::~SubmitSparkAppRequest() {}

std::string SubmitSparkAppRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void SubmitSparkAppRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setBodyParameter(std::string("ResourceGroupName"), resourceGroupName);
}

std::string SubmitSparkAppRequest::getAgentVersion() const {
  return agentVersion_;
}

void SubmitSparkAppRequest::setAgentVersion(const std::string &agentVersion) {
  agentVersion_ = agentVersion;
  setBodyParameter(std::string("AgentVersion"), agentVersion);
}

std::string SubmitSparkAppRequest::getData() const {
  return data_;
}

void SubmitSparkAppRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

std::string SubmitSparkAppRequest::getAppName() const {
  return appName_;
}

void SubmitSparkAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

long SubmitSparkAppRequest::getTemplateFileId() const {
  return templateFileId_;
}

void SubmitSparkAppRequest::setTemplateFileId(long templateFileId) {
  templateFileId_ = templateFileId;
  setBodyParameter(std::string("TemplateFileId"), std::to_string(templateFileId));
}

std::string SubmitSparkAppRequest::getDBClusterId() const {
  return dBClusterId_;
}

void SubmitSparkAppRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setBodyParameter(std::string("DBClusterId"), dBClusterId);
}

std::string SubmitSparkAppRequest::getAppType() const {
  return appType_;
}

void SubmitSparkAppRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setBodyParameter(std::string("AppType"), appType);
}

std::string SubmitSparkAppRequest::getAgentSource() const {
  return agentSource_;
}

void SubmitSparkAppRequest::setAgentSource(const std::string &agentSource) {
  agentSource_ = agentSource;
  setBodyParameter(std::string("AgentSource"), agentSource);
}

