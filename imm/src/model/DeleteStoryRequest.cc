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

#include <alibabacloud/imm/model/DeleteStoryRequest.h>

using AlibabaCloud::Imm::Model::DeleteStoryRequest;

DeleteStoryRequest::DeleteStoryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "DeleteStory") {
  setMethod(HttpRequest::Method::Post);
}

DeleteStoryRequest::~DeleteStoryRequest() {}

std::string DeleteStoryRequest::getDatasetName() const {
  return datasetName_;
}

void DeleteStoryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string DeleteStoryRequest::getProjectName() const {
  return projectName_;
}

void DeleteStoryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string DeleteStoryRequest::getObjectId() const {
  return objectId_;
}

void DeleteStoryRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

