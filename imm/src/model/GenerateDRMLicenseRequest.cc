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

#include <alibabacloud/imm/model/GenerateDRMLicenseRequest.h>

using AlibabaCloud::Imm::Model::GenerateDRMLicenseRequest;

GenerateDRMLicenseRequest::GenerateDRMLicenseRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GenerateDRMLicense") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDRMLicenseRequest::~GenerateDRMLicenseRequest() {}

std::string GenerateDRMLicenseRequest::getProtectionSystem() const {
  return protectionSystem_;
}

void GenerateDRMLicenseRequest::setProtectionSystem(const std::string &protectionSystem) {
  protectionSystem_ = protectionSystem;
  setParameter(std::string("ProtectionSystem"), protectionSystem);
}

std::string GenerateDRMLicenseRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void GenerateDRMLicenseRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string GenerateDRMLicenseRequest::getProjectName() const {
  return projectName_;
}

void GenerateDRMLicenseRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string GenerateDRMLicenseRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void GenerateDRMLicenseRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string GenerateDRMLicenseRequest::getKeyId() const {
  return keyId_;
}

void GenerateDRMLicenseRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

