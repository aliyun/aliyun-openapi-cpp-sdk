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

#include <alibabacloud/imm/model/CreateImageModerationTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateImageModerationTaskRequest;

CreateImageModerationTaskRequest::CreateImageModerationTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateImageModerationTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageModerationTaskRequest::~CreateImageModerationTaskRequest() {}

std::string CreateImageModerationTaskRequest::getUserData() const {
  return userData_;
}

void CreateImageModerationTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateImageModerationTaskRequest::Notification CreateImageModerationTaskRequest::getNotification() const {
  return notification_;
}

void CreateImageModerationTaskRequest::setNotification(const CreateImageModerationTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateImageModerationTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateImageModerationTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateImageModerationTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateImageModerationTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateImageModerationTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateImageModerationTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

long CreateImageModerationTaskRequest::getMaxFrames() const {
  return maxFrames_;
}

void CreateImageModerationTaskRequest::setMaxFrames(long maxFrames) {
  maxFrames_ = maxFrames;
  setParameter(std::string("MaxFrames"), std::to_string(maxFrames));
}

CreateImageModerationTaskRequest::CredentialConfig CreateImageModerationTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateImageModerationTaskRequest::setCredentialConfig(const CreateImageModerationTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::string CreateImageModerationTaskRequest::getReviewer() const {
  return reviewer_;
}

void CreateImageModerationTaskRequest::setReviewer(const std::string &reviewer) {
  reviewer_ = reviewer;
  setParameter(std::string("Reviewer"), reviewer);
}

std::map<std::string, std::string> CreateImageModerationTaskRequest::getTags() const {
  return tags_;
}

void CreateImageModerationTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::string CreateImageModerationTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateImageModerationTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

std::vector<CreateImageModerationTaskRequest::std::string> CreateImageModerationTaskRequest::getScenes() const {
  return scenes_;
}

void CreateImageModerationTaskRequest::setScenes(const std::vector<CreateImageModerationTaskRequest::std::string> &scenes) {
  scenes_ = scenes;
  for(int dep1 = 0; dep1 != scenes.size(); dep1++) {
    setParameter(std::string("Scenes") + "." + std::to_string(dep1 + 1), scenes[dep1]);
  }
}

long CreateImageModerationTaskRequest::getInterval() const {
  return interval_;
}

void CreateImageModerationTaskRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

