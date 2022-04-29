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

#include <alibabacloud/nas/model/ResetFileSystemRequest.h>

using AlibabaCloud::NAS::Model::ResetFileSystemRequest;

ResetFileSystemRequest::ResetFileSystemRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ResetFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

ResetFileSystemRequest::~ResetFileSystemRequest() {}

std::string ResetFileSystemRequest::getSnapshotId() const {
  return snapshotId_;
}

void ResetFileSystemRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string ResetFileSystemRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ResetFileSystemRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

