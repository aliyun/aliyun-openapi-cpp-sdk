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

#include <alibabacloud/imm/model/CreateImageToPDFTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateImageToPDFTaskRequest;

CreateImageToPDFTaskRequest::CreateImageToPDFTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateImageToPDFTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageToPDFTaskRequest::~CreateImageToPDFTaskRequest() {}

std::vector<CreateImageToPDFTaskRequest::Sources> CreateImageToPDFTaskRequest::getSources() const {
  return sources_;
}

void CreateImageToPDFTaskRequest::setSources(const std::vector<CreateImageToPDFTaskRequest::Sources> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".Rotate", std::to_string(sources[dep1].rotate));
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".URI", sources[dep1].uRI);
  }
}

std::string CreateImageToPDFTaskRequest::getUserData() const {
  return userData_;
}

void CreateImageToPDFTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateImageToPDFTaskRequest::Notification CreateImageToPDFTaskRequest::getNotification() const {
  return notification_;
}

void CreateImageToPDFTaskRequest::setNotification(const CreateImageToPDFTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateImageToPDFTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateImageToPDFTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateImageToPDFTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateImageToPDFTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string CreateImageToPDFTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateImageToPDFTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateImageToPDFTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateImageToPDFTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

CreateImageToPDFTaskRequest::CredentialConfig CreateImageToPDFTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateImageToPDFTaskRequest::setCredentialConfig(const CreateImageToPDFTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::map<std::string, std::string> CreateImageToPDFTaskRequest::getTags() const {
  return tags_;
}

void CreateImageToPDFTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

