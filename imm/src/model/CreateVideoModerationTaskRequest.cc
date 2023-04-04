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

#include <alibabacloud/imm/model/CreateVideoModerationTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateVideoModerationTaskRequest;

CreateVideoModerationTaskRequest::CreateVideoModerationTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateVideoModerationTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateVideoModerationTaskRequest::~CreateVideoModerationTaskRequest() {}

std::string CreateVideoModerationTaskRequest::getUserData() const {
  return userData_;
}

void CreateVideoModerationTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateVideoModerationTaskRequest::Notification CreateVideoModerationTaskRequest::getNotification() const {
  return notification_;
}

void CreateVideoModerationTaskRequest::setNotification(const CreateVideoModerationTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateVideoModerationTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateVideoModerationTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateVideoModerationTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateVideoModerationTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateVideoModerationTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateVideoModerationTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

long CreateVideoModerationTaskRequest::getMaxFrames() const {
  return maxFrames_;
}

void CreateVideoModerationTaskRequest::setMaxFrames(long maxFrames) {
  maxFrames_ = maxFrames;
  setParameter(std::string("MaxFrames"), std::to_string(maxFrames));
}

CreateVideoModerationTaskRequest::CredentialConfig CreateVideoModerationTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateVideoModerationTaskRequest::setCredentialConfig(const CreateVideoModerationTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::string CreateVideoModerationTaskRequest::getReviewer() const {
  return reviewer_;
}

void CreateVideoModerationTaskRequest::setReviewer(const std::string &reviewer) {
  reviewer_ = reviewer;
  setParameter(std::string("Reviewer"), reviewer);
}

std::map<std::string, std::string> CreateVideoModerationTaskRequest::getTags() const {
  return tags_;
}

void CreateVideoModerationTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::string CreateVideoModerationTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateVideoModerationTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

std::vector<CreateVideoModerationTaskRequest::std::string> CreateVideoModerationTaskRequest::getScenes() const {
  return scenes_;
}

void CreateVideoModerationTaskRequest::setScenes(const std::vector<CreateVideoModerationTaskRequest::std::string> &scenes) {
  scenes_ = scenes;
  for(int dep1 = 0; dep1 != scenes.size(); dep1++) {
    setParameter(std::string("Scenes") + "." + std::to_string(dep1 + 1), scenes[dep1]);
  }
}

long CreateVideoModerationTaskRequest::getInterval() const {
  return interval_;
}

void CreateVideoModerationTaskRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

