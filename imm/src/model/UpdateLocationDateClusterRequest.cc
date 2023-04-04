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

#include <alibabacloud/imm/model/UpdateLocationDateClusterRequest.h>

using AlibabaCloud::Imm::Model::UpdateLocationDateClusterRequest;

UpdateLocationDateClusterRequest::UpdateLocationDateClusterRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateLocationDateCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLocationDateClusterRequest::~UpdateLocationDateClusterRequest() {}

std::map<std::string, std::string> UpdateLocationDateClusterRequest::getCustomLabels() const {
  return customLabels_;
}

void UpdateLocationDateClusterRequest::setCustomLabels(const std::map<std::string, std::string> &customLabels) {
  customLabels_ = customLabels;
  for(auto const &iter1 : customLabels) {
    setParameter(std::string("CustomLabels") + "." + iter1.first, iter1.second);
  }
}

std::string UpdateLocationDateClusterRequest::getTitle() const {
  return title_;
}

void UpdateLocationDateClusterRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateLocationDateClusterRequest::getDatasetName() const {
  return datasetName_;
}

void UpdateLocationDateClusterRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string UpdateLocationDateClusterRequest::getProjectName() const {
  return projectName_;
}

void UpdateLocationDateClusterRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string UpdateLocationDateClusterRequest::getCustomId() const {
  return customId_;
}

void UpdateLocationDateClusterRequest::setCustomId(const std::string &customId) {
  customId_ = customId;
  setParameter(std::string("CustomId"), customId);
}

std::string UpdateLocationDateClusterRequest::getObjectId() const {
  return objectId_;
}

void UpdateLocationDateClusterRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

