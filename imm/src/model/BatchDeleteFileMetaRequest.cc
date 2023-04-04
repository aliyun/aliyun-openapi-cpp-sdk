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

#include <alibabacloud/imm/model/BatchDeleteFileMetaRequest.h>

using AlibabaCloud::Imm::Model::BatchDeleteFileMetaRequest;

BatchDeleteFileMetaRequest::BatchDeleteFileMetaRequest()
    : RpcServiceRequest("imm", "2020-09-30", "BatchDeleteFileMeta") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteFileMetaRequest::~BatchDeleteFileMetaRequest() {}

std::string BatchDeleteFileMetaRequest::getDatasetName() const {
  return datasetName_;
}

void BatchDeleteFileMetaRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string BatchDeleteFileMetaRequest::getProjectName() const {
  return projectName_;
}

void BatchDeleteFileMetaRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<BatchDeleteFileMetaRequest::std::string> BatchDeleteFileMetaRequest::getURIs() const {
  return uRIs_;
}

void BatchDeleteFileMetaRequest::setURIs(const std::vector<BatchDeleteFileMetaRequest::std::string> &uRIs) {
  uRIs_ = uRIs;
  for(int dep1 = 0; dep1 != uRIs.size(); dep1++) {
    setParameter(std::string("URIs") + "." + std::to_string(dep1 + 1), uRIs[dep1]);
  }
}

