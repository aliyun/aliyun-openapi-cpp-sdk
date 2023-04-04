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

#include <alibabacloud/imm/model/GetDatasetRequest.h>

using AlibabaCloud::Imm::Model::GetDatasetRequest;

GetDatasetRequest::GetDatasetRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GetDataset") {
  setMethod(HttpRequest::Method::Post);
}

GetDatasetRequest::~GetDatasetRequest() {}

std::string GetDatasetRequest::getDatasetName() const {
  return datasetName_;
}

void GetDatasetRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string GetDatasetRequest::getProjectName() const {
  return projectName_;
}

void GetDatasetRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

bool GetDatasetRequest::getWithStatistics() const {
  return withStatistics_;
}

void GetDatasetRequest::setWithStatistics(bool withStatistics) {
  withStatistics_ = withStatistics;
  setParameter(std::string("WithStatistics"), withStatistics ? "true" : "false");
}

