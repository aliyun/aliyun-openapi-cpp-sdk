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

#include <alibabacloud/imm/model/CreateStoryRequest.h>

using AlibabaCloud::Imm::Model::CreateStoryRequest;

CreateStoryRequest::CreateStoryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateStory") {
  setMethod(HttpRequest::Method::Post);
}

CreateStoryRequest::~CreateStoryRequest() {}

std::string CreateStoryRequest::getCustomLabels() const {
  return customLabels_;
}

void CreateStoryRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setBodyParameter(std::string("CustomLabels"), customLabels);
}

CreateStoryRequest::Notification CreateStoryRequest::getNotification() const {
  return notification_;
}

void CreateStoryRequest::setNotification(const CreateStoryRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateStoryRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateStoryRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setBodyParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateStoryRequest::getProjectName() const {
  return projectName_;
}

void CreateStoryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string CreateStoryRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateStoryRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setBodyParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateStoryRequest::getStoryType() const {
  return storyType_;
}

void CreateStoryRequest::setStoryType(const std::string &storyType) {
  storyType_ = storyType;
  setBodyParameter(std::string("StoryType"), storyType);
}

std::map<std::string, std::string> CreateStoryRequest::getTags() const {
  return tags_;
}

void CreateStoryRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::string CreateStoryRequest::getStorySubType() const {
  return storySubType_;
}

void CreateStoryRequest::setStorySubType(const std::string &storySubType) {
  storySubType_ = storySubType;
  setBodyParameter(std::string("StorySubType"), storySubType);
}

long CreateStoryRequest::getMinFileCount() const {
  return minFileCount_;
}

void CreateStoryRequest::setMinFileCount(long minFileCount) {
  minFileCount_ = minFileCount;
  setBodyParameter(std::string("MinFileCount"), std::to_string(minFileCount));
}

std::string CreateStoryRequest::getUserData() const {
  return userData_;
}

void CreateStoryRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long CreateStoryRequest::getMaxFileCount() const {
  return maxFileCount_;
}

void CreateStoryRequest::setMaxFileCount(long maxFileCount) {
  maxFileCount_ = maxFileCount;
  setBodyParameter(std::string("MaxFileCount"), std::to_string(maxFileCount));
}

std::string CreateStoryRequest::getDatasetName() const {
  return datasetName_;
}

void CreateStoryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setBodyParameter(std::string("DatasetName"), datasetName);
}

std::string CreateStoryRequest::getStoryStartTime() const {
  return storyStartTime_;
}

void CreateStoryRequest::setStoryStartTime(const std::string &storyStartTime) {
  storyStartTime_ = storyStartTime;
  setBodyParameter(std::string("StoryStartTime"), storyStartTime);
}

CreateStoryRequest::Address CreateStoryRequest::getAddress() const {
  return address_;
}

void CreateStoryRequest::setAddress(const CreateStoryRequest::Address &address) {
  address_ = address;
  setBodyParameter(std::string("Address") + ".Country", address.country);
  setBodyParameter(std::string("Address") + ".Province", address.province);
  setBodyParameter(std::string("Address") + ".City", address.city);
  setBodyParameter(std::string("Address") + ".District", address.district);
  setBodyParameter(std::string("Address") + ".Township", address.township);
}

std::string CreateStoryRequest::getCustomId() const {
  return customId_;
}

void CreateStoryRequest::setCustomId(const std::string &customId) {
  customId_ = customId;
  setBodyParameter(std::string("CustomId"), customId);
}

std::string CreateStoryRequest::getStoryEndTime() const {
  return storyEndTime_;
}

void CreateStoryRequest::setStoryEndTime(const std::string &storyEndTime) {
  storyEndTime_ = storyEndTime;
  setBodyParameter(std::string("StoryEndTime"), storyEndTime);
}

std::string CreateStoryRequest::getObjectId() const {
  return objectId_;
}

void CreateStoryRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setBodyParameter(std::string("ObjectId"), objectId);
}

std::string CreateStoryRequest::getStoryName() const {
  return storyName_;
}

void CreateStoryRequest::setStoryName(const std::string &storyName) {
  storyName_ = storyName;
  setBodyParameter(std::string("StoryName"), storyName);
}

