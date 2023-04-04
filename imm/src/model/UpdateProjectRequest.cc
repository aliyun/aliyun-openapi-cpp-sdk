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

#include <alibabacloud/imm/model/UpdateProjectRequest.h>

using AlibabaCloud::Imm::Model::UpdateProjectRequest;

UpdateProjectRequest::UpdateProjectRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateProject") {
  setMethod(HttpRequest::Method::Post);
}

UpdateProjectRequest::~UpdateProjectRequest() {}

long UpdateProjectRequest::getDatasetMaxBindCount() const {
  return datasetMaxBindCount_;
}

void UpdateProjectRequest::setDatasetMaxBindCount(long datasetMaxBindCount) {
  datasetMaxBindCount_ = datasetMaxBindCount;
  setParameter(std::string("DatasetMaxBindCount"), std::to_string(datasetMaxBindCount));
}

std::string UpdateProjectRequest::getDescription() const {
  return description_;
}

void UpdateProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateProjectRequest::getDatasetMaxRelationCount() const {
  return datasetMaxRelationCount_;
}

void UpdateProjectRequest::setDatasetMaxRelationCount(long datasetMaxRelationCount) {
  datasetMaxRelationCount_ = datasetMaxRelationCount;
  setParameter(std::string("DatasetMaxRelationCount"), std::to_string(datasetMaxRelationCount));
}

long UpdateProjectRequest::getDatasetMaxFileCount() const {
  return datasetMaxFileCount_;
}

void UpdateProjectRequest::setDatasetMaxFileCount(long datasetMaxFileCount) {
  datasetMaxFileCount_ = datasetMaxFileCount;
  setParameter(std::string("DatasetMaxFileCount"), std::to_string(datasetMaxFileCount));
}

std::string UpdateProjectRequest::getProjectName() const {
  return projectName_;
}

void UpdateProjectRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long UpdateProjectRequest::getProjectMaxDatasetCount() const {
  return projectMaxDatasetCount_;
}

void UpdateProjectRequest::setProjectMaxDatasetCount(long projectMaxDatasetCount) {
  projectMaxDatasetCount_ = projectMaxDatasetCount;
  setParameter(std::string("ProjectMaxDatasetCount"), std::to_string(projectMaxDatasetCount));
}

long UpdateProjectRequest::getDatasetMaxEntityCount() const {
  return datasetMaxEntityCount_;
}

void UpdateProjectRequest::setDatasetMaxEntityCount(long datasetMaxEntityCount) {
  datasetMaxEntityCount_ = datasetMaxEntityCount;
  setParameter(std::string("DatasetMaxEntityCount"), std::to_string(datasetMaxEntityCount));
}

std::string UpdateProjectRequest::getTemplateId() const {
  return templateId_;
}

void UpdateProjectRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

long UpdateProjectRequest::getDatasetMaxTotalFileSize() const {
  return datasetMaxTotalFileSize_;
}

void UpdateProjectRequest::setDatasetMaxTotalFileSize(long datasetMaxTotalFileSize) {
  datasetMaxTotalFileSize_ = datasetMaxTotalFileSize;
  setParameter(std::string("DatasetMaxTotalFileSize"), std::to_string(datasetMaxTotalFileSize));
}

std::string UpdateProjectRequest::getServiceRole() const {
  return serviceRole_;
}

void UpdateProjectRequest::setServiceRole(const std::string &serviceRole) {
  serviceRole_ = serviceRole;
  setParameter(std::string("ServiceRole"), serviceRole);
}

