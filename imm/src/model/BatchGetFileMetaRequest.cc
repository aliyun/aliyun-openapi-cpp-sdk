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

#include <alibabacloud/imm/model/BatchGetFileMetaRequest.h>

using AlibabaCloud::Imm::Model::BatchGetFileMetaRequest;

BatchGetFileMetaRequest::BatchGetFileMetaRequest()
    : RpcServiceRequest("imm", "2020-09-30", "BatchGetFileMeta") {
  setMethod(HttpRequest::Method::Post);
}

BatchGetFileMetaRequest::~BatchGetFileMetaRequest() {}

std::string BatchGetFileMetaRequest::getDatasetName() const {
  return datasetName_;
}

void BatchGetFileMetaRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string BatchGetFileMetaRequest::getProjectName() const {
  return projectName_;
}

void BatchGetFileMetaRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<BatchGetFileMetaRequest::std::string> BatchGetFileMetaRequest::getURIs() const {
  return uRIs_;
}

void BatchGetFileMetaRequest::setURIs(const std::vector<BatchGetFileMetaRequest::std::string> &uRIs) {
  uRIs_ = uRIs;
  for(int dep1 = 0; dep1 != uRIs.size(); dep1++) {
    setParameter(std::string("URIs") + "." + std::to_string(dep1 + 1), uRIs[dep1]);
  }
}

