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

#include <alibabacloud/nas/model/ModifyFileSystemRequest.h>

using AlibabaCloud::NAS::Model::ModifyFileSystemRequest;

ModifyFileSystemRequest::ModifyFileSystemRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFileSystemRequest::~ModifyFileSystemRequest() {}

std::string ModifyFileSystemRequest::getDescription() const {
  return description_;
}

void ModifyFileSystemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

ModifyFileSystemRequest::Options ModifyFileSystemRequest::getOptions() const {
  return options_;
}

void ModifyFileSystemRequest::setOptions(const ModifyFileSystemRequest::Options &options) {
  options_ = options;
  setParameter(std::string("Options") + ".EnableOplock", options.enableOplock ? "true" : "false");
}

std::string ModifyFileSystemRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyFileSystemRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

