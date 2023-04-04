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

#include <alibabacloud/imm/model/CreateFigureClusteringTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateFigureClusteringTaskRequest;

CreateFigureClusteringTaskRequest::CreateFigureClusteringTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateFigureClusteringTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateFigureClusteringTaskRequest::~CreateFigureClusteringTaskRequest() {}

std::string CreateFigureClusteringTaskRequest::getUserData() const {
  return userData_;
}

void CreateFigureClusteringTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateFigureClusteringTaskRequest::Notification CreateFigureClusteringTaskRequest::getNotification() const {
  return notification_;
}

void CreateFigureClusteringTaskRequest::setNotification(const CreateFigureClusteringTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateFigureClusteringTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateFigureClusteringTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateFigureClusteringTaskRequest::getDatasetName() const {
  return datasetName_;
}

void CreateFigureClusteringTaskRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateFigureClusteringTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateFigureClusteringTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFigureClusteringTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateFigureClusteringTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::map<std::string, std::string> CreateFigureClusteringTaskRequest::getTags() const {
  return tags_;
}

void CreateFigureClusteringTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

