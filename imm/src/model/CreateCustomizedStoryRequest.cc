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

#include <alibabacloud/imm/model/CreateCustomizedStoryRequest.h>

using AlibabaCloud::Imm::Model::CreateCustomizedStoryRequest;

CreateCustomizedStoryRequest::CreateCustomizedStoryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateCustomizedStory") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomizedStoryRequest::~CreateCustomizedStoryRequest() {}

std::map<std::string, std::string> CreateCustomizedStoryRequest::getCustomLabels() const {
  return customLabels_;
}

void CreateCustomizedStoryRequest::setCustomLabels(const std::map<std::string, std::string> &customLabels) {
  customLabels_ = customLabels;
  for(auto const &iter1 : customLabels) {
    setBodyParameter(std::string("CustomLabels") + "." + iter1.first, iter1.second);
  }
}

CreateCustomizedStoryRequest::Cover CreateCustomizedStoryRequest::getCover() const {
  return cover_;
}

void CreateCustomizedStoryRequest::setCover(const CreateCustomizedStoryRequest::Cover &cover) {
  cover_ = cover;
  setBodyParameter(std::string("Cover") + ".URI", cover.uRI);
}

std::string CreateCustomizedStoryRequest::getDatasetName() const {
  return datasetName_;
}

void CreateCustomizedStoryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setBodyParameter(std::string("DatasetName"), datasetName);
}

std::string CreateCustomizedStoryRequest::getProjectName() const {
  return projectName_;
}

void CreateCustomizedStoryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string CreateCustomizedStoryRequest::getStoryType() const {
  return storyType_;
}

void CreateCustomizedStoryRequest::setStoryType(const std::string &storyType) {
  storyType_ = storyType;
  setBodyParameter(std::string("StoryType"), storyType);
}

std::string CreateCustomizedStoryRequest::getStorySubType() const {
  return storySubType_;
}

void CreateCustomizedStoryRequest::setStorySubType(const std::string &storySubType) {
  storySubType_ = storySubType;
  setBodyParameter(std::string("StorySubType"), storySubType);
}

std::vector<CreateCustomizedStoryRequest::Files> CreateCustomizedStoryRequest::getFiles() const {
  return files_;
}

void CreateCustomizedStoryRequest::setFiles(const std::vector<CreateCustomizedStoryRequest::Files> &files) {
  files_ = files;
  for(int dep1 = 0; dep1 != files.size(); dep1++) {
    setBodyParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".URI", files[dep1].uRI);
  }
}

std::string CreateCustomizedStoryRequest::getStoryName() const {
  return storyName_;
}

void CreateCustomizedStoryRequest::setStoryName(const std::string &storyName) {
  storyName_ = storyName;
  setBodyParameter(std::string("StoryName"), storyName);
}

