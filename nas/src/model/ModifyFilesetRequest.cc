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

#include <alibabacloud/nas/model/ModifyFilesetRequest.h>

using AlibabaCloud::NAS::Model::ModifyFilesetRequest;

ModifyFilesetRequest::ModifyFilesetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyFileset") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFilesetRequest::~ModifyFilesetRequest() {}

std::string ModifyFilesetRequest::getFsetId() const {
  return fsetId_;
}

void ModifyFilesetRequest::setFsetId(const std::string &fsetId) {
  fsetId_ = fsetId;
  setParameter(std::string("FsetId"), fsetId);
}

std::string ModifyFilesetRequest::getClientToken() const {
  return clientToken_;
}

void ModifyFilesetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyFilesetRequest::getDescription() const {
  return description_;
}

void ModifyFilesetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool ModifyFilesetRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyFilesetRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string ModifyFilesetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyFilesetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyFilesetRequest::getDryRun() const {
  return dryRun_;
}

void ModifyFilesetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

