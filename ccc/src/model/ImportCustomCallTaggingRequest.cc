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

#include <alibabacloud/ccc/model/ImportCustomCallTaggingRequest.h>

using AlibabaCloud::CCC::Model::ImportCustomCallTaggingRequest;

ImportCustomCallTaggingRequest::ImportCustomCallTaggingRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ImportCustomCallTagging") {
  setMethod(HttpRequest::Method::Post);
}

ImportCustomCallTaggingRequest::~ImportCustomCallTaggingRequest() {}

std::string ImportCustomCallTaggingRequest::getInstanceId() const {
  return instanceId_;
}

void ImportCustomCallTaggingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ImportCustomCallTaggingRequest::getFilePath() const {
  return filePath_;
}

void ImportCustomCallTaggingRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

