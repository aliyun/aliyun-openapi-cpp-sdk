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

#include <alibabacloud/imm/model/CreateFileUncompressionTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateFileUncompressionTaskRequest;

CreateFileUncompressionTaskRequest::CreateFileUncompressionTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateFileUncompressionTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileUncompressionTaskRequest::~CreateFileUncompressionTaskRequest() {}

std::string CreateFileUncompressionTaskRequest::getUserData() const {
  return userData_;
}

void CreateFileUncompressionTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateFileUncompressionTaskRequest::Notification CreateFileUncompressionTaskRequest::getNotification() const {
  return notification_;
}

void CreateFileUncompressionTaskRequest::setNotification(const CreateFileUncompressionTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateFileUncompressionTaskRequest::getPassword() const {
  return password_;
}

void CreateFileUncompressionTaskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::vector<CreateFileUncompressionTaskRequest::std::string> CreateFileUncompressionTaskRequest::getSelectedFiles() const {
  return selectedFiles_;
}

void CreateFileUncompressionTaskRequest::setSelectedFiles(const std::vector<CreateFileUncompressionTaskRequest::std::string> &selectedFiles) {
  selectedFiles_ = selectedFiles;
  for(int dep1 = 0; dep1 != selectedFiles.size(); dep1++) {
    setParameter(std::string("SelectedFiles") + "." + std::to_string(dep1 + 1), selectedFiles[dep1]);
  }
}

std::string CreateFileUncompressionTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateFileUncompressionTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateFileUncompressionTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateFileUncompressionTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFileUncompressionTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateFileUncompressionTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

CreateFileUncompressionTaskRequest::CredentialConfig CreateFileUncompressionTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateFileUncompressionTaskRequest::setCredentialConfig(const CreateFileUncompressionTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

CreateFileUncompressionTaskRequest::Target CreateFileUncompressionTaskRequest::getTarget() const {
  return target_;
}

void CreateFileUncompressionTaskRequest::setTarget(const CreateFileUncompressionTaskRequest::Target &target) {
  target_ = target;
  setParameter(std::string("Target") + ".ManifestURI", target.manifestURI);
  setParameter(std::string("Target") + ".URI", target.uRI);
}

std::string CreateFileUncompressionTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateFileUncompressionTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

