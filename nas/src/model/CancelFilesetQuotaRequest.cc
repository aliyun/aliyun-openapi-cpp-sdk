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

#include <alibabacloud/nas/model/CancelFilesetQuotaRequest.h>

using AlibabaCloud::NAS::Model::CancelFilesetQuotaRequest;

CancelFilesetQuotaRequest::CancelFilesetQuotaRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CancelFilesetQuota") {
  setMethod(HttpRequest::Method::Post);
}

CancelFilesetQuotaRequest::~CancelFilesetQuotaRequest() {}

std::string CancelFilesetQuotaRequest::getFsetId() const {
  return fsetId_;
}

void CancelFilesetQuotaRequest::setFsetId(const std::string &fsetId) {
  fsetId_ = fsetId;
  setParameter(std::string("FsetId"), fsetId);
}

std::string CancelFilesetQuotaRequest::getClientToken() const {
  return clientToken_;
}

void CancelFilesetQuotaRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CancelFilesetQuotaRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CancelFilesetQuotaRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CancelFilesetQuotaRequest::getDryRun() const {
  return dryRun_;
}

void CancelFilesetQuotaRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

