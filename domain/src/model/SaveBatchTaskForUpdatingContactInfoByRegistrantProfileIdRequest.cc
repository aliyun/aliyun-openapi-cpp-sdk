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

#include <alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest;

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() {}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getContactType() const {
  return contactType_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setContactType(const std::string &contactType) {
  contactType_ = contactType;
  setParameter(std::string("ContactType"), contactType);
}

long SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getRegistrantProfileId() const {
  return registrantProfileId_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setRegistrantProfileId(long registrantProfileId) {
  registrantProfileId_ = registrantProfileId;
  setParameter(std::string("RegistrantProfileId"), std::to_string(registrantProfileId));
}

std::vector<std::string> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getDomainName() const {
  return domainName_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setDomainName(const std::vector<std::string> &domainName) {
  domainName_ = domainName;
}

bool SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getTransferOutProhibited() const {
  return transferOutProhibited_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setTransferOutProhibited(bool transferOutProhibited) {
  transferOutProhibited_ = transferOutProhibited;
  setParameter(std::string("TransferOutProhibited"), transferOutProhibited ? "true" : "false");
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getLang() const {
  return lang_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

