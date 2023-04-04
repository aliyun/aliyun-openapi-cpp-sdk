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

#include <alibabacloud/imm/model/CreateSimilarImageClusteringTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateSimilarImageClusteringTaskRequest;

CreateSimilarImageClusteringTaskRequest::CreateSimilarImageClusteringTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateSimilarImageClusteringTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateSimilarImageClusteringTaskRequest::~CreateSimilarImageClusteringTaskRequest() {}

std::string CreateSimilarImageClusteringTaskRequest::getUserData() const {
  return userData_;
}

void CreateSimilarImageClusteringTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateSimilarImageClusteringTaskRequest::Notification CreateSimilarImageClusteringTaskRequest::getNotification() const {
  return notification_;
}

void CreateSimilarImageClusteringTaskRequest::setNotification(const CreateSimilarImageClusteringTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateSimilarImageClusteringTaskRequest::getDatasetName() const {
  return datasetName_;
}

void CreateSimilarImageClusteringTaskRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateSimilarImageClusteringTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateSimilarImageClusteringTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateSimilarImageClusteringTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateSimilarImageClusteringTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateSimilarImageClusteringTaskRequest::getTags() const {
  return tags_;
}

void CreateSimilarImageClusteringTaskRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

