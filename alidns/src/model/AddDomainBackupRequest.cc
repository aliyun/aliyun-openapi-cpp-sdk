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

#include <alibabacloud/alidns/model/AddDomainBackupRequest.h>

using AlibabaCloud::Alidns::Model::AddDomainBackupRequest;

AddDomainBackupRequest::AddDomainBackupRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDomainBackup") {
  setMethod(HttpRequest::Method::Post);
}

AddDomainBackupRequest::~AddDomainBackupRequest() {}

std::string AddDomainBackupRequest::getDomainName() const {
  return domainName_;
}

void AddDomainBackupRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string AddDomainBackupRequest::getPeriodType() const {
  return periodType_;
}

void AddDomainBackupRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

std::string AddDomainBackupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddDomainBackupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddDomainBackupRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDomainBackupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AddDomainBackupRequest::getLang() const {
  return lang_;
}

void AddDomainBackupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

