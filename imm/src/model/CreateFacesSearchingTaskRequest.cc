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

#include <alibabacloud/imm/model/CreateFacesSearchingTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateFacesSearchingTaskRequest;

CreateFacesSearchingTaskRequest::CreateFacesSearchingTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateFacesSearchingTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateFacesSearchingTaskRequest::~CreateFacesSearchingTaskRequest() {}

long CreateFacesSearchingTaskRequest::getTopK() const {
  return topK_;
}

void CreateFacesSearchingTaskRequest::setTopK(long topK) {
  topK_ = topK;
  setParameter(std::string("TopK"), std::to_string(topK));
}

std::vector<CreateFacesSearchingTaskRequest::Sources> CreateFacesSearchingTaskRequest::getSources() const {
  return sources_;
}

void CreateFacesSearchingTaskRequest::setSources(const std::vector<CreateFacesSearchingTaskRequest::Sources> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1) + ".URI", sources[dep1].uRI);
  }
}

std::string CreateFacesSearchingTaskRequest::getUserData() const {
  return userData_;
}

void CreateFacesSearchingTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

CreateFacesSearchingTaskRequest::Notification CreateFacesSearchingTaskRequest::getNotification() const {
  return notification_;
}

void CreateFacesSearchingTaskRequest::setNotification(const CreateFacesSearchingTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateFacesSearchingTaskRequest::getDatasetName() const {
  return datasetName_;
}

void CreateFacesSearchingTaskRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateFacesSearchingTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateFacesSearchingTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFacesSearchingTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateFacesSearchingTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateFacesSearchingTaskRequest::getMaxResult() const {
  return maxResult_;
}

void CreateFacesSearchingTaskRequest::setMaxResult(const std::string &maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), maxResult);
}

