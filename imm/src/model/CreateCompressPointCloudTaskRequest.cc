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

#include <alibabacloud/imm/model/CreateCompressPointCloudTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateCompressPointCloudTaskRequest;

CreateCompressPointCloudTaskRequest::CreateCompressPointCloudTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateCompressPointCloudTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateCompressPointCloudTaskRequest::~CreateCompressPointCloudTaskRequest() {}

CreateCompressPointCloudTaskRequest::Notification CreateCompressPointCloudTaskRequest::getNotification() const {
  return notification_;
}

void CreateCompressPointCloudTaskRequest::setNotification(const CreateCompressPointCloudTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateCompressPointCloudTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateCompressPointCloudTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateCompressPointCloudTaskRequest::getCompressMethod() const {
  return compressMethod_;
}

void CreateCompressPointCloudTaskRequest::setCompressMethod(const std::string &compressMethod) {
  compressMethod_ = compressMethod;
  setParameter(std::string("CompressMethod"), compressMethod);
}

std::string CreateCompressPointCloudTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateCompressPointCloudTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateCompressPointCloudTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateCompressPointCloudTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::map<std::string, std::string> CreateCompressPointCloudTaskRequest::getTags() const {
  return tags_;
}

void CreateCompressPointCloudTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::vector<CreateCompressPointCloudTaskRequest::std::string> CreateCompressPointCloudTaskRequest::getPointCloudFields() const {
  return pointCloudFields_;
}

void CreateCompressPointCloudTaskRequest::setPointCloudFields(const std::vector<CreateCompressPointCloudTaskRequest::std::string> &pointCloudFields) {
  pointCloudFields_ = pointCloudFields;
  for(int dep1 = 0; dep1 != pointCloudFields.size(); dep1++) {
    setParameter(std::string("PointCloudFields") + "." + std::to_string(dep1 + 1), pointCloudFields[dep1]);
  }
}

std::string CreateCompressPointCloudTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateCompressPointCloudTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

std::string CreateCompressPointCloudTaskRequest::getPointCloudFileFormat() const {
  return pointCloudFileFormat_;
}

void CreateCompressPointCloudTaskRequest::setPointCloudFileFormat(const std::string &pointCloudFileFormat) {
  pointCloudFileFormat_ = pointCloudFileFormat;
  setParameter(std::string("PointCloudFileFormat"), pointCloudFileFormat);
}

CreateCompressPointCloudTaskRequest::OctreeOption CreateCompressPointCloudTaskRequest::getOctreeOption() const {
  return octreeOption_;
}

void CreateCompressPointCloudTaskRequest::setOctreeOption(const CreateCompressPointCloudTaskRequest::OctreeOption &octreeOption) {
  octreeOption_ = octreeOption;
  setParameter(std::string("OctreeOption") + ".PointResolution", std::to_string(octreeOption.pointResolution));
  setParameter(std::string("OctreeOption") + ".LibraryName", octreeOption.libraryName);
  setParameter(std::string("OctreeOption") + ".DoVoxelGridDownDownSampling", octreeOption.doVoxelGridDownDownSampling ? "true" : "false");
  setParameter(std::string("OctreeOption") + ".OctreeResolution", std::to_string(octreeOption.octreeResolution));
}

std::string CreateCompressPointCloudTaskRequest::getUserData() const {
  return userData_;
}

void CreateCompressPointCloudTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateCompressPointCloudTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateCompressPointCloudTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

CreateCompressPointCloudTaskRequest::KdtreeOption CreateCompressPointCloudTaskRequest::getKdtreeOption() const {
  return kdtreeOption_;
}

void CreateCompressPointCloudTaskRequest::setKdtreeOption(const CreateCompressPointCloudTaskRequest::KdtreeOption &kdtreeOption) {
  kdtreeOption_ = kdtreeOption;
  setParameter(std::string("KdtreeOption") + ".QuantizationBits", std::to_string(kdtreeOption.quantizationBits));
  setParameter(std::string("KdtreeOption") + ".LibraryName", kdtreeOption.libraryName);
  setParameter(std::string("KdtreeOption") + ".CompressionLevel", std::to_string(kdtreeOption.compressionLevel));
}

CreateCompressPointCloudTaskRequest::CredentialConfig CreateCompressPointCloudTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateCompressPointCloudTaskRequest::setCredentialConfig(const CreateCompressPointCloudTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

