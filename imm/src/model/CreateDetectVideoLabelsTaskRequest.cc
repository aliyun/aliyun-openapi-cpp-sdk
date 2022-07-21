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

#include <alibabacloud/imm/model/CreateDetectVideoLabelsTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateDetectVideoLabelsTaskRequest;

CreateDetectVideoLabelsTaskRequest::CreateDetectVideoLabelsTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateDetectVideoLabelsTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateDetectVideoLabelsTaskRequest::~CreateDetectVideoLabelsTaskRequest() {}

std::string CreateDetectVideoLabelsTaskRequest::getUserData() const {
  return userData_;
}

void CreateDetectVideoLabelsTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateDetectVideoLabelsTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateDetectVideoLabelsTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateDetectVideoLabelsTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateDetectVideoLabelsTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateDetectVideoLabelsTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateDetectVideoLabelsTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

std::string CreateDetectVideoLabelsTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateDetectVideoLabelsTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

CreateDetectVideoLabelsTaskRequest::CredentialConfig CreateDetectVideoLabelsTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateDetectVideoLabelsTaskRequest::setCredentialConfig(const CreateDetectVideoLabelsTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::map<std::string, std::string> CreateDetectVideoLabelsTaskRequest::getTags() const {
  return tags_;
}

void CreateDetectVideoLabelsTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

