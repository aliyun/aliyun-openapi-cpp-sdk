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

#include <alibabacloud/nas/model/SetFilesetQuotaRequest.h>

using AlibabaCloud::NAS::Model::SetFilesetQuotaRequest;

SetFilesetQuotaRequest::SetFilesetQuotaRequest()
    : RpcServiceRequest("nas", "2017-06-26", "SetFilesetQuota") {
  setMethod(HttpRequest::Method::Post);
}

SetFilesetQuotaRequest::~SetFilesetQuotaRequest() {}

std::string SetFilesetQuotaRequest::getFsetId() const {
  return fsetId_;
}

void SetFilesetQuotaRequest::setFsetId(const std::string &fsetId) {
  fsetId_ = fsetId;
  setParameter(std::string("FsetId"), fsetId);
}

std::string SetFilesetQuotaRequest::getClientToken() const {
  return clientToken_;
}

void SetFilesetQuotaRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long SetFilesetQuotaRequest::getFileCountLimit() const {
  return fileCountLimit_;
}

void SetFilesetQuotaRequest::setFileCountLimit(long fileCountLimit) {
  fileCountLimit_ = fileCountLimit;
  setParameter(std::string("FileCountLimit"), std::to_string(fileCountLimit));
}

long SetFilesetQuotaRequest::getSizeLimit() const {
  return sizeLimit_;
}

void SetFilesetQuotaRequest::setSizeLimit(long sizeLimit) {
  sizeLimit_ = sizeLimit;
  setParameter(std::string("SizeLimit"), std::to_string(sizeLimit));
}

std::string SetFilesetQuotaRequest::getFileSystemId() const {
  return fileSystemId_;
}

void SetFilesetQuotaRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool SetFilesetQuotaRequest::getDryRun() const {
  return dryRun_;
}

void SetFilesetQuotaRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

