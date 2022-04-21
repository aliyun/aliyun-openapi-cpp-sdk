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

#include <alibabacloud/outboundbot/model/CreateNumberDistrictInfoParsingTaskRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateNumberDistrictInfoParsingTaskRequest;

CreateNumberDistrictInfoParsingTaskRequest::CreateNumberDistrictInfoParsingTaskRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateNumberDistrictInfoParsingTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateNumberDistrictInfoParsingTaskRequest::~CreateNumberDistrictInfoParsingTaskRequest() {}

long CreateNumberDistrictInfoParsingTaskRequest::getFileSize() const {
  return fileSize_;
}

void CreateNumberDistrictInfoParsingTaskRequest::setFileSize(long fileSize) {
  fileSize_ = fileSize;
  setParameter(std::string("FileSize"), std::to_string(fileSize));
}

std::string CreateNumberDistrictInfoParsingTaskRequest::getFilePath() const {
  return filePath_;
}

void CreateNumberDistrictInfoParsingTaskRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

