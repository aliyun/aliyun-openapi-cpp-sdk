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

#include <alibabacloud/imm/model/UpdateDatasetRequest.h>

using AlibabaCloud::Imm::Model::UpdateDatasetRequest;

UpdateDatasetRequest::UpdateDatasetRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateDataset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDatasetRequest::~UpdateDatasetRequest() {}

long UpdateDatasetRequest::getDatasetMaxBindCount() const {
  return datasetMaxBindCount_;
}

void UpdateDatasetRequest::setDatasetMaxBindCount(long datasetMaxBindCount) {
  datasetMaxBindCount_ = datasetMaxBindCount;
  setParameter(std::string("DatasetMaxBindCount"), std::to_string(datasetMaxBindCount));
}

std::string UpdateDatasetRequest::getDescription() const {
  return description_;
}

void UpdateDatasetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateDatasetRequest::getDatasetMaxRelationCount() const {
  return datasetMaxRelationCount_;
}

void UpdateDatasetRequest::setDatasetMaxRelationCount(long datasetMaxRelationCount) {
  datasetMaxRelationCount_ = datasetMaxRelationCount;
  setParameter(std::string("DatasetMaxRelationCount"), std::to_string(datasetMaxRelationCount));
}

std::string UpdateDatasetRequest::getDatasetName() const {
  return datasetName_;
}

void UpdateDatasetRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

long UpdateDatasetRequest::getDatasetMaxFileCount() const {
  return datasetMaxFileCount_;
}

void UpdateDatasetRequest::setDatasetMaxFileCount(long datasetMaxFileCount) {
  datasetMaxFileCount_ = datasetMaxFileCount;
  setParameter(std::string("DatasetMaxFileCount"), std::to_string(datasetMaxFileCount));
}

std::string UpdateDatasetRequest::getProjectName() const {
  return projectName_;
}

void UpdateDatasetRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long UpdateDatasetRequest::getDatasetMaxEntityCount() const {
  return datasetMaxEntityCount_;
}

void UpdateDatasetRequest::setDatasetMaxEntityCount(long datasetMaxEntityCount) {
  datasetMaxEntityCount_ = datasetMaxEntityCount;
  setParameter(std::string("DatasetMaxEntityCount"), std::to_string(datasetMaxEntityCount));
}

std::string UpdateDatasetRequest::getTemplateId() const {
  return templateId_;
}

void UpdateDatasetRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

long UpdateDatasetRequest::getDatasetMaxTotalFileSize() const {
  return datasetMaxTotalFileSize_;
}

void UpdateDatasetRequest::setDatasetMaxTotalFileSize(long datasetMaxTotalFileSize) {
  datasetMaxTotalFileSize_ = datasetMaxTotalFileSize;
  setParameter(std::string("DatasetMaxTotalFileSize"), std::to_string(datasetMaxTotalFileSize));
}

