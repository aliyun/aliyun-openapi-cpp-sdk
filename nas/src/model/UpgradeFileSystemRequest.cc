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

#include <alibabacloud/nas/model/UpgradeFileSystemRequest.h>

using AlibabaCloud::NAS::Model::UpgradeFileSystemRequest;

UpgradeFileSystemRequest::UpgradeFileSystemRequest()
    : RpcServiceRequest("nas", "2017-06-26", "UpgradeFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeFileSystemRequest::~UpgradeFileSystemRequest() {}

std::string UpgradeFileSystemRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeFileSystemRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long UpgradeFileSystemRequest::getCapacity() const {
  return capacity_;
}

void UpgradeFileSystemRequest::setCapacity(long capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::string UpgradeFileSystemRequest::getFileSystemId() const {
  return fileSystemId_;
}

void UpgradeFileSystemRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool UpgradeFileSystemRequest::getDryRun() const {
  return dryRun_;
}

void UpgradeFileSystemRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

