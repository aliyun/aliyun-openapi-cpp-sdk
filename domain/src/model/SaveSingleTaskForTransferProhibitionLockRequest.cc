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

#include <alibabacloud/domain/model/SaveSingleTaskForTransferProhibitionLockRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForTransferProhibitionLockRequest;

SaveSingleTaskForTransferProhibitionLockRequest::SaveSingleTaskForTransferProhibitionLockRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForTransferProhibitionLock") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForTransferProhibitionLockRequest::~SaveSingleTaskForTransferProhibitionLockRequest() {}

std::string SaveSingleTaskForTransferProhibitionLockRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForTransferProhibitionLockRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForTransferProhibitionLockRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForTransferProhibitionLockRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForTransferProhibitionLockRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForTransferProhibitionLockRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool SaveSingleTaskForTransferProhibitionLockRequest::getStatus() const {
  return status_;
}

void SaveSingleTaskForTransferProhibitionLockRequest::setStatus(bool status) {
  status_ = status;
  setParameter(std::string("Status"), status ? "true" : "false");
}

