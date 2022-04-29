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

#include <alibabacloud/nas/model/CreateSnapshotRequest.h>

using AlibabaCloud::NAS::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnapshotRequest::~CreateSnapshotRequest() {}

std::string CreateSnapshotRequest::getDescription() const {
  return description_;
}

void CreateSnapshotRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string CreateSnapshotRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateSnapshotRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

int CreateSnapshotRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateSnapshotRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

