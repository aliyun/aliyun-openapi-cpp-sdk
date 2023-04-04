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

#include <alibabacloud/imm/model/CreateImageSplicingTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateImageSplicingTaskRequest;

CreateImageSplicingTaskRequest::CreateImageSplicingTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateImageSplicingTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageSplicingTaskRequest::~CreateImageSplicingTaskRequest() {}

long CreateImageSplicingTaskRequest::getAlign() const {
  return align_;
}

void CreateImageSplicingTaskRequest::setAlign(long align) {
  align_ = align;
  setParameter(std::string("Align"), std::to_string(align));
}

std::string CreateImageSplicingTaskRequest::getBackgroundColor() const {
  return backgroundColor_;
}

void CreateImageSplicingTaskRequest::setBackgroundColor(const std::string &backgroundColor) {
  backgroundColor_ = backgroundColor;
  setParameter(std::string("BackgroundColor"), backgroundColor);
}

CreateImageSplicingTaskRequest::Notification CreateImageSplicingTaskRequest::getNotification() const {
  return notification_;
}

void CreateImageSplicingTaskRequest::setNotification(const CreateImageSplicingTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateImageSplicingTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateImageSplicingTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateImageSplicingTaskRequest::getScaleType() const {
  return scaleType_;
}

void CreateImageSplicingTaskRequest::setScaleType(const std::string &scaleType) {
  scaleType_ = scaleType;
  setParameter(std::string("ScaleType"), scaleType);
}

std::string CreateImageSplicingTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateImageSplicingTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long CreateImageSplicingTaskRequest::getMargin() const {
  return margin_;
}

void CreateImageSplicingTaskRequest::setMargin(long margin) {
  margin_ = margin;
  setParameter(std::string("Margin"), std::to_string(margin));
}

std::string CreateImageSplicingTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateImageSplicingTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

long CreateImageSplicingTaskRequest::getQuality() const {
  return quality_;
}

void CreateImageSplicingTaskRequest::setQuality(long quality) {
  quality_ = quality;
  setParameter(std::string("Quality"), std::to_string(quality));
}

std::map<std::string, std::string> CreateImageSplicingTaskRequest::getTags() const {
  return tags_;
}

void CreateImageSplicingTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::vector<CreateImageSplicingTaskRequest::Sources> CreateImageSplicingTaskRequest::getSources() const {
  return sources_;
}

void CreateImageSplicingTaskRequest::setSources(const std::vector<CreateImageSplicingTaskRequest::Sources> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".Rotate", std::to_string(sources[dep1].rotate));
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".URI", sources[dep1].uRI);
  }
}

std::string CreateImageSplicingTaskRequest::getUserData() const {
  return userData_;
}

void CreateImageSplicingTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateImageSplicingTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateImageSplicingTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string CreateImageSplicingTaskRequest::getImageFormat() const {
  return imageFormat_;
}

void CreateImageSplicingTaskRequest::setImageFormat(const std::string &imageFormat) {
  imageFormat_ = imageFormat;
  setParameter(std::string("ImageFormat"), imageFormat);
}

std::string CreateImageSplicingTaskRequest::getDirection() const {
  return direction_;
}

void CreateImageSplicingTaskRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

long CreateImageSplicingTaskRequest::getPadding() const {
  return padding_;
}

void CreateImageSplicingTaskRequest::setPadding(long padding) {
  padding_ = padding;
  setParameter(std::string("Padding"), std::to_string(padding));
}

CreateImageSplicingTaskRequest::CredentialConfig CreateImageSplicingTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateImageSplicingTaskRequest::setCredentialConfig(const CreateImageSplicingTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

