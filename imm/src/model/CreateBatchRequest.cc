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

#include <alibabacloud/imm/model/CreateBatchRequest.h>

using AlibabaCloud::Imm::Model::CreateBatchRequest;

CreateBatchRequest::CreateBatchRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateBatch") {
  setMethod(HttpRequest::Method::Post);
}

CreateBatchRequest::~CreateBatchRequest() {}

CreateBatchRequest::Notification CreateBatchRequest::getNotification() const {
  return notification_;
}

void CreateBatchRequest::setNotification(const CreateBatchRequest::Notification &notification) {
  notification_ = notification;
  setBodyParameter(std::string("Notification") + ".Endpoint", notification.endpoint);
  setBodyParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setBodyParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setBodyParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setBodyParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setBodyParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
  setBodyParameter(std::string("Notification") + ".Topic", notification.topic);
}

std::string CreateBatchRequest::getProjectName() const {
  return projectName_;
}

void CreateBatchRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::map<std::string, std::string> CreateBatchRequest::getTags() const {
  return tags_;
}

void CreateBatchRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setBodyParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

CreateBatchRequest::Input CreateBatchRequest::getInput() const {
  return input_;
}

void CreateBatchRequest::setInput(const CreateBatchRequest::Input &input) {
  input_ = input;
  setBodyParameter(std::string("Input") + ".OSS.Bucket", input.oSS.bucket);
  setBodyParameter(std::string("Input") + ".OSS.Prefix", input.oSS.prefix);
  for(int dep1 = 0; dep1 != input.oSS.matchExpressions.size(); dep1++) {
    setBodyParameter(std::string("Input") + ".OSS.MatchExpressions." + std::to_string(dep1 + 1), input.oSS.matchExpressions[dep1]);
  }
}

std::string CreateBatchRequest::getServiceRole() const {
  return serviceRole_;
}

void CreateBatchRequest::setServiceRole(const std::string &serviceRole) {
  serviceRole_ = serviceRole;
  setBodyParameter(std::string("ServiceRole"), serviceRole);
}

std::vector<CreateBatchRequest::Actions> CreateBatchRequest::getActions() const {
  return actions_;
}

void CreateBatchRequest::setActions(const std::vector<CreateBatchRequest::Actions> &actions) {
  actions_ = actions;
  for(int dep1 = 0; dep1 != actions.size(); dep1++) {
    setBodyParameter(std::string("Actions") + "." + std::to_string(dep1 + 1) + ".Name", actions[dep1].name);
    for(int dep2 = 0; dep2 != actions[dep1].parameters.size(); dep2++) {
      setBodyParameter(std::string("Actions") + "." + std::to_string(dep1 + 1) + ".Parameters." + std::to_string(dep2 + 1), actions[dep1].parameters[dep2]);
    }
  }
}

