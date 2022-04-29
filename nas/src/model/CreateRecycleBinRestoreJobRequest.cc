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

#include <alibabacloud/nas/model/CreateRecycleBinRestoreJobRequest.h>

using AlibabaCloud::NAS::Model::CreateRecycleBinRestoreJobRequest;

CreateRecycleBinRestoreJobRequest::CreateRecycleBinRestoreJobRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateRecycleBinRestoreJob") {
  setMethod(HttpRequest::Method::Get);
}

CreateRecycleBinRestoreJobRequest::~CreateRecycleBinRestoreJobRequest() {}

std::string CreateRecycleBinRestoreJobRequest::getClientToken() const {
  return clientToken_;
}

void CreateRecycleBinRestoreJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRecycleBinRestoreJobRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateRecycleBinRestoreJobRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string CreateRecycleBinRestoreJobRequest::getFileId() const {
  return fileId_;
}

void CreateRecycleBinRestoreJobRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

std::string CreateRecycleBinRestoreJobRequest::getTargetFileId() const {
  return targetFileId_;
}

void CreateRecycleBinRestoreJobRequest::setTargetFileId(const std::string &targetFileId) {
  targetFileId_ = targetFileId;
  setParameter(std::string("TargetFileId"), targetFileId);
}

