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

#include <alibabacloud/imm/model/UpdateStoryRequest.h>

using AlibabaCloud::Imm::Model::UpdateStoryRequest;

UpdateStoryRequest::UpdateStoryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateStory") {
  setMethod(HttpRequest::Method::Post);
}

UpdateStoryRequest::~UpdateStoryRequest() {}

std::string UpdateStoryRequest::getCustomLabels() const {
  return customLabels_;
}

void UpdateStoryRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setBodyParameter(std::string("CustomLabels"), customLabels);
}

UpdateStoryRequest::Cover UpdateStoryRequest::getCover() const {
  return cover_;
}

void UpdateStoryRequest::setCover(const UpdateStoryRequest::Cover &cover) {
  cover_ = cover;
  setBodyParameter(std::string("Cover") + ".URI", cover.uRI);
}

std::string UpdateStoryRequest::getDatasetName() const {
  return datasetName_;
}

void UpdateStoryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setBodyParameter(std::string("DatasetName"), datasetName);
}

std::string UpdateStoryRequest::getProjectName() const {
  return projectName_;
}

void UpdateStoryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string UpdateStoryRequest::getCustomId() const {
  return customId_;
}

void UpdateStoryRequest::setCustomId(const std::string &customId) {
  customId_ = customId;
  setBodyParameter(std::string("CustomId"), customId);
}

std::string UpdateStoryRequest::getObjectId() const {
  return objectId_;
}

void UpdateStoryRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setBodyParameter(std::string("ObjectId"), objectId);
}

std::string UpdateStoryRequest::getStoryName() const {
  return storyName_;
}

void UpdateStoryRequest::setStoryName(const std::string &storyName) {
  storyName_ = storyName;
  setBodyParameter(std::string("StoryName"), storyName);
}

