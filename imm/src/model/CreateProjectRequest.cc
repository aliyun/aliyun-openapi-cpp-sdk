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

#include <alibabacloud/imm/model/CreateProjectRequest.h>

using AlibabaCloud::Imm::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest() {}

long CreateProjectRequest::getDatasetMaxBindCount() const {
  return datasetMaxBindCount_;
}

void CreateProjectRequest::setDatasetMaxBindCount(long datasetMaxBindCount) {
  datasetMaxBindCount_ = datasetMaxBindCount;
  setParameter(std::string("DatasetMaxBindCount"), std::to_string(datasetMaxBindCount));
}

std::string CreateProjectRequest::getDescription() const {
  return description_;
}

void CreateProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateProjectRequest::getDatasetMaxRelationCount() const {
  return datasetMaxRelationCount_;
}

void CreateProjectRequest::setDatasetMaxRelationCount(long datasetMaxRelationCount) {
  datasetMaxRelationCount_ = datasetMaxRelationCount;
  setParameter(std::string("DatasetMaxRelationCount"), std::to_string(datasetMaxRelationCount));
}

long CreateProjectRequest::getDatasetMaxFileCount() const {
  return datasetMaxFileCount_;
}

void CreateProjectRequest::setDatasetMaxFileCount(long datasetMaxFileCount) {
  datasetMaxFileCount_ = datasetMaxFileCount;
  setParameter(std::string("DatasetMaxFileCount"), std::to_string(datasetMaxFileCount));
}

std::string CreateProjectRequest::getProjectName() const {
  return projectName_;
}

void CreateProjectRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long CreateProjectRequest::getProjectMaxDatasetCount() const {
  return projectMaxDatasetCount_;
}

void CreateProjectRequest::setProjectMaxDatasetCount(long projectMaxDatasetCount) {
  projectMaxDatasetCount_ = projectMaxDatasetCount;
  setParameter(std::string("ProjectMaxDatasetCount"), std::to_string(projectMaxDatasetCount));
}

long CreateProjectRequest::getDatasetMaxEntityCount() const {
  return datasetMaxEntityCount_;
}

void CreateProjectRequest::setDatasetMaxEntityCount(long datasetMaxEntityCount) {
  datasetMaxEntityCount_ = datasetMaxEntityCount;
  setParameter(std::string("DatasetMaxEntityCount"), std::to_string(datasetMaxEntityCount));
}

std::string CreateProjectRequest::getTemplateId() const {
  return templateId_;
}

void CreateProjectRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

long CreateProjectRequest::getDatasetMaxTotalFileSize() const {
  return datasetMaxTotalFileSize_;
}

void CreateProjectRequest::setDatasetMaxTotalFileSize(long datasetMaxTotalFileSize) {
  datasetMaxTotalFileSize_ = datasetMaxTotalFileSize;
  setParameter(std::string("DatasetMaxTotalFileSize"), std::to_string(datasetMaxTotalFileSize));
}

std::string CreateProjectRequest::getServiceRole() const {
  return serviceRole_;
}

void CreateProjectRequest::setServiceRole(const std::string &serviceRole) {
  serviceRole_ = serviceRole;
  setParameter(std::string("ServiceRole"), serviceRole);
}

