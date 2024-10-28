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

#include <alibabacloud/nas/model/CreateFilesetRequest.h>

using AlibabaCloud::NAS::Model::CreateFilesetRequest;

CreateFilesetRequest::CreateFilesetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateFileset") {
  setMethod(HttpRequest::Method::Post);
}

CreateFilesetRequest::~CreateFilesetRequest() {}

std::string CreateFilesetRequest::getClientToken() const {
  return clientToken_;
}

void CreateFilesetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFilesetRequest::getDescription() const {
  return description_;
}

void CreateFilesetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateFilesetRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateFilesetRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

CreateFilesetRequest::Quota CreateFilesetRequest::getQuota() const {
  return quota_;
}

void CreateFilesetRequest::setQuota(const CreateFilesetRequest::Quota &quota) {
  quota_ = quota;
  setParameter(std::string("Quota") + ".SizeLimit", std::to_string(quota.sizeLimit));
  setParameter(std::string("Quota") + ".FileCountLimit", std::to_string(quota.fileCountLimit));
}

std::string CreateFilesetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateFilesetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateFilesetRequest::getDryRun() const {
  return dryRun_;
}

void CreateFilesetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateFilesetRequest::getFileSystemPath() const {
  return fileSystemPath_;
}

void CreateFilesetRequest::setFileSystemPath(const std::string &fileSystemPath) {
  fileSystemPath_ = fileSystemPath;
  setParameter(std::string("FileSystemPath"), fileSystemPath);
}

