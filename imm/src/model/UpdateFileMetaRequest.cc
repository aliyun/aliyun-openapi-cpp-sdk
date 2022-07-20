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

#include <alibabacloud/imm/model/UpdateFileMetaRequest.h>

using AlibabaCloud::Imm::Model::UpdateFileMetaRequest;

UpdateFileMetaRequest::UpdateFileMetaRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateFileMeta") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFileMetaRequest::~UpdateFileMetaRequest() {}

UpdateFileMetaRequest::File UpdateFileMetaRequest::getFile() const {
  return file_;
}

void UpdateFileMetaRequest::setFile(const UpdateFileMetaRequest::File &file) {
  file_ = file;
  for(auto const &iter1 : file.customLabels) {
    setParameter(std::string("File") + ".CustomLabels." + iter1.first, iter1.second);
  }
  for(int dep1 = 0; dep1 != file.figures.size(); dep1++) {
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureId", file.figures[dep1].figureId);
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureClusterId", file.figures[dep1].figureClusterId);
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureType", file.figures[dep1].figureType);
  }
  setParameter(std::string("File") + ".OSSURI", file.oSSURI);
  setParameter(std::string("File") + ".FileHash", file.fileHash);
  setParameter(std::string("File") + ".URI", file.uRI);
  setParameter(std::string("File") + ".CustomId", file.customId);
  setParameter(std::string("File") + ".MediaType", file.mediaType);
  setParameter(std::string("File") + ".ContentType", file.contentType);
}

std::string UpdateFileMetaRequest::getDatasetName() const {
  return datasetName_;
}

void UpdateFileMetaRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string UpdateFileMetaRequest::getProjectName() const {
  return projectName_;
}

void UpdateFileMetaRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

