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

#include <alibabacloud/imm/model/CreateFileCompressionTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateFileCompressionTaskRequest;

CreateFileCompressionTaskRequest::CreateFileCompressionTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateFileCompressionTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileCompressionTaskRequest::~CreateFileCompressionTaskRequest() {}

std::vector<CreateFileCompressionTaskRequest::Sources> CreateFileCompressionTaskRequest::getSources() const {
  return sources_;
}

void CreateFileCompressionTaskRequest::setSources(const std::vector<CreateFileCompressionTaskRequest::Sources> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".Alias", sources[dep1].alias);
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".URI", sources[dep1].uRI);
  }
}

std::string CreateFileCompressionTaskRequest::getSourceManifestURI() const {
  return sourceManifestURI_;
}

void CreateFileCompressionTaskRequest::setSourceManifestURI(const std::string &sourceManifestURI) {
  sourceManifestURI_ = sourceManifestURI;
  setParameter(std::string("SourceManifestURI"), sourceManifestURI);
}

std::string CreateFileCompressionTaskRequest::getUserData() const {
  return userData_;
}

void CreateFileCompressionTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateFileCompressionTaskRequest::Notification CreateFileCompressionTaskRequest::getNotification() const {
  return notification_;
}

void CreateFileCompressionTaskRequest::setNotification(const CreateFileCompressionTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateFileCompressionTaskRequest::getPassword() const {
  return password_;
}

void CreateFileCompressionTaskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateFileCompressionTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateFileCompressionTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateFileCompressionTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateFileCompressionTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string CreateFileCompressionTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateFileCompressionTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFileCompressionTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateFileCompressionTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

CreateFileCompressionTaskRequest::CredentialConfig CreateFileCompressionTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateFileCompressionTaskRequest::setCredentialConfig(const CreateFileCompressionTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

bool CreateFileCompressionTaskRequest::getAllowCrossRegion() const {
  return allowCrossRegion_;
}

void CreateFileCompressionTaskRequest::setAllowCrossRegion(bool allowCrossRegion) {
  allowCrossRegion_ = allowCrossRegion;
  setParameter(std::string("AllowCrossRegion"), allowCrossRegion ? "true" : "false");
}

std::string CreateFileCompressionTaskRequest::getCompressedFormat() const {
  return compressedFormat_;
}

void CreateFileCompressionTaskRequest::setCompressedFormat(const std::string &compressedFormat) {
  compressedFormat_ = compressedFormat;
  setParameter(std::string("CompressedFormat"), compressedFormat);
}

