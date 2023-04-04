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

#include <alibabacloud/imm/model/CreateArchiveFileInspectionTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateArchiveFileInspectionTaskRequest;

CreateArchiveFileInspectionTaskRequest::CreateArchiveFileInspectionTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateArchiveFileInspectionTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateArchiveFileInspectionTaskRequest::~CreateArchiveFileInspectionTaskRequest() {}

std::string CreateArchiveFileInspectionTaskRequest::getUserData() const {
  return userData_;
}

void CreateArchiveFileInspectionTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateArchiveFileInspectionTaskRequest::Notification CreateArchiveFileInspectionTaskRequest::getNotification() const {
  return notification_;
}

void CreateArchiveFileInspectionTaskRequest::setNotification(const CreateArchiveFileInspectionTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateArchiveFileInspectionTaskRequest::getPassword() const {
  return password_;
}

void CreateArchiveFileInspectionTaskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateArchiveFileInspectionTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateArchiveFileInspectionTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateArchiveFileInspectionTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateArchiveFileInspectionTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string CreateArchiveFileInspectionTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateArchiveFileInspectionTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateArchiveFileInspectionTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateArchiveFileInspectionTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

CreateArchiveFileInspectionTaskRequest::CredentialConfig CreateArchiveFileInspectionTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateArchiveFileInspectionTaskRequest::setCredentialConfig(const CreateArchiveFileInspectionTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::string CreateArchiveFileInspectionTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateArchiveFileInspectionTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

