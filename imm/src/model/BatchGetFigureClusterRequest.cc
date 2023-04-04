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

#include <alibabacloud/imm/model/BatchGetFigureClusterRequest.h>

using AlibabaCloud::Imm::Model::BatchGetFigureClusterRequest;

BatchGetFigureClusterRequest::BatchGetFigureClusterRequest()
    : RpcServiceRequest("imm", "2020-09-30", "BatchGetFigureCluster") {
  setMethod(HttpRequest::Method::Post);
}

BatchGetFigureClusterRequest::~BatchGetFigureClusterRequest() {}

std::string BatchGetFigureClusterRequest::getDatasetName() const {
  return datasetName_;
}

void BatchGetFigureClusterRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string BatchGetFigureClusterRequest::getProjectName() const {
  return projectName_;
}

void BatchGetFigureClusterRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<BatchGetFigureClusterRequest::std::string> BatchGetFigureClusterRequest::getObjectIds() const {
  return objectIds_;
}

void BatchGetFigureClusterRequest::setObjectIds(const std::vector<BatchGetFigureClusterRequest::std::string> &objectIds) {
  objectIds_ = objectIds;
  for(int dep1 = 0; dep1 != objectIds.size(); dep1++) {
    setParameter(std::string("ObjectIds") + "." + std::to_string(dep1 + 1), objectIds[dep1]);
  }
}

