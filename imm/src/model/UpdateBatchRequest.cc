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

#include <alibabacloud/imm/model/UpdateBatchRequest.h>

using AlibabaCloud::Imm::Model::UpdateBatchRequest;

UpdateBatchRequest::UpdateBatchRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateBatch") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBatchRequest::~UpdateBatchRequest() {}

UpdateBatchRequest::Notification UpdateBatchRequest::getNotification() const {
  return notification_;
}

void UpdateBatchRequest::setNotification(const UpdateBatchRequest::Notification &notification) {
  notification_ = notification;
  setBodyParameter(std::string("Notification") + ".Endpoint", notification.endpoint);
  setBodyParameter(std::string("Notification") + ".Topic", notification.topic);
}

std::string UpdateBatchRequest::getId() const {
  return id_;
}

void UpdateBatchRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string UpdateBatchRequest::getProjectName() const {
  return projectName_;
}

void UpdateBatchRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::map<std::string, std::string> UpdateBatchRequest::getTags() const {
  return tags_;
}

void UpdateBatchRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setBodyParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

UpdateBatchRequest::Input UpdateBatchRequest::getInput() const {
  return input_;
}

void UpdateBatchRequest::setInput(const UpdateBatchRequest::Input &input) {
  input_ = input;
  setBodyParameter(std::string("Input") + ".OSS.Bucket", input.oSS.bucket);
  setBodyParameter(std::string("Input") + ".OSS.Prefix", input.oSS.prefix);
  for(int dep1 = 0; dep1 != input.oSS.matchExpressions.size(); dep1++) {
    setBodyParameter(std::string("Input") + ".OSS.MatchExpressions." + std::to_string(dep1 + 1), input.oSS.matchExpressions[dep1]);
  }
}

std::vector<UpdateBatchRequest::Actions> UpdateBatchRequest::getActions() const {
  return actions_;
}

void UpdateBatchRequest::setActions(const std::vector<UpdateBatchRequest::Actions> &actions) {
  actions_ = actions;
  for(int dep1 = 0; dep1 != actions.size(); dep1++) {
    setBodyParameter(std::string("Actions") + "." + std::to_string(dep1 + 1) + ".Name", actions[dep1].name);
    for(int dep2 = 0; dep2 != actions[dep1].parameters.size(); dep2++) {
      setBodyParameter(std::string("Actions") + "." + std::to_string(dep1 + 1) + ".Parameters." + std::to_string(dep2 + 1), actions[dep1].parameters[dep2]);
    }
  }
}

