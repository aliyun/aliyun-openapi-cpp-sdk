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

#include <alibabacloud/imm/model/BatchUpdateFileMetaRequest.h>

using AlibabaCloud::Imm::Model::BatchUpdateFileMetaRequest;

BatchUpdateFileMetaRequest::BatchUpdateFileMetaRequest()
    : RpcServiceRequest("imm", "2020-09-30", "BatchUpdateFileMeta") {
  setMethod(HttpRequest::Method::Post);
}

BatchUpdateFileMetaRequest::~BatchUpdateFileMetaRequest() {}

std::string BatchUpdateFileMetaRequest::getDatasetName() const {
  return datasetName_;
}

void BatchUpdateFileMetaRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string BatchUpdateFileMetaRequest::getProjectName() const {
  return projectName_;
}

void BatchUpdateFileMetaRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<BatchUpdateFileMetaRequest::Files> BatchUpdateFileMetaRequest::getFiles() const {
  return files_;
}

void BatchUpdateFileMetaRequest::setFiles(const std::vector<BatchUpdateFileMetaRequest::Files> &files) {
  files_ = files;
  for(int dep1 = 0; dep1 != files.size(); dep1++) {
    for(auto const &iter2 : files[dep1].customLabels) {
      setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".CustomLabels." + iter2.first, iter2.second);
    }
    for(int dep2 = 0; dep2 != files[dep1].figures.size(); dep2++) {
      setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".Figures." + std::to_string(dep2 + 1) + ".FigureId", files[dep1].figures[dep2].figureId);
      setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".Figures." + std::to_string(dep2 + 1) + ".FigureClusterId", files[dep1].figures[dep2].figureClusterId);
      setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".Figures." + std::to_string(dep2 + 1) + ".FigureType", files[dep1].figures[dep2].figureType);
    }
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".OSSURI", files[dep1].oSSURI);
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".FileHash", files[dep1].fileHash);
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".URI", files[dep1].uRI);
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".CustomId", files[dep1].customId);
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".MediaType", files[dep1].mediaType);
    setParameter(std::string("Files") + "." + std::to_string(dep1 + 1) + ".ContentType", files[dep1].contentType);
  }
}

