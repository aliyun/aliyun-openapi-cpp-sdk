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

#include <alibabacloud/nas/model/GetDirectoryOrFilePropertiesRequest.h>

using AlibabaCloud::NAS::Model::GetDirectoryOrFilePropertiesRequest;

GetDirectoryOrFilePropertiesRequest::GetDirectoryOrFilePropertiesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "GetDirectoryOrFileProperties") {
  setMethod(HttpRequest::Method::Post);
}

GetDirectoryOrFilePropertiesRequest::~GetDirectoryOrFilePropertiesRequest() {}

std::string GetDirectoryOrFilePropertiesRequest::getPath() const {
  return path_;
}

void GetDirectoryOrFilePropertiesRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string GetDirectoryOrFilePropertiesRequest::getFileSystemId() const {
  return fileSystemId_;
}

void GetDirectoryOrFilePropertiesRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

