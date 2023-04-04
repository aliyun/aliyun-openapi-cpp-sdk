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

#include <alibabacloud/imm/model/CreateLocationDateClusteringTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateLocationDateClusteringTaskRequest;

CreateLocationDateClusteringTaskRequest::CreateLocationDateClusteringTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateLocationDateClusteringTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateLocationDateClusteringTaskRequest::~CreateLocationDateClusteringTaskRequest() {}

std::string CreateLocationDateClusteringTaskRequest::getUserData() const {
  return userData_;
}

void CreateLocationDateClusteringTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateLocationDateClusteringTaskRequest::Notification CreateLocationDateClusteringTaskRequest::getNotification() const {
  return notification_;
}

void CreateLocationDateClusteringTaskRequest::setNotification(const CreateLocationDateClusteringTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateLocationDateClusteringTaskRequest::getDatasetName() const {
  return datasetName_;
}

void CreateLocationDateClusteringTaskRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateLocationDateClusteringTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateLocationDateClusteringTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

CreateLocationDateClusteringTaskRequest::LocationOptions CreateLocationDateClusteringTaskRequest::getLocationOptions() const {
  return locationOptions_;
}

void CreateLocationDateClusteringTaskRequest::setLocationOptions(const CreateLocationDateClusteringTaskRequest::LocationOptions &locationOptions) {
  locationOptions_ = locationOptions;
  for(int dep1 = 0; dep1 != locationOptions.locationDateClusterLevels.size(); dep1++) {
    setParameter(std::string("LocationOptions") + ".LocationDateClusterLevels." + std::to_string(dep1 + 1), locationOptions.locationDateClusterLevels[dep1]);
  }
}

std::string CreateLocationDateClusteringTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateLocationDateClusteringTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateLocationDateClusteringTaskRequest::getTags() const {
  return tags_;
}

void CreateLocationDateClusteringTaskRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

CreateLocationDateClusteringTaskRequest::DateOptions CreateLocationDateClusteringTaskRequest::getDateOptions() const {
  return dateOptions_;
}

void CreateLocationDateClusteringTaskRequest::setDateOptions(const CreateLocationDateClusteringTaskRequest::DateOptions &dateOptions) {
  dateOptions_ = dateOptions;
  setParameter(std::string("DateOptions") + ".MinDays", std::to_string(dateOptions.minDays));
  setParameter(std::string("DateOptions") + ".GapDays", std::to_string(dateOptions.gapDays));
  setParameter(std::string("DateOptions") + ".MaxDays", std::to_string(dateOptions.maxDays));
}

