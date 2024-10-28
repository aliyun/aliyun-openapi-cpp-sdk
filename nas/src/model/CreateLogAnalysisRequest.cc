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

#include <alibabacloud/nas/model/CreateLogAnalysisRequest.h>

using AlibabaCloud::NAS::Model::CreateLogAnalysisRequest;

CreateLogAnalysisRequest::CreateLogAnalysisRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateLogAnalysis") {
  setMethod(HttpRequest::Method::Post);
}

CreateLogAnalysisRequest::~CreateLogAnalysisRequest() {}

std::string CreateLogAnalysisRequest::getRegionId() const {
  return regionId_;
}

void CreateLogAnalysisRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLogAnalysisRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateLogAnalysisRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

