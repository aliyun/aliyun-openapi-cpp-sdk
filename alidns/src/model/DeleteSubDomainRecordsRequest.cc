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

#include <alibabacloud/alidns/model/DeleteSubDomainRecordsRequest.h>

using AlibabaCloud::Alidns::Model::DeleteSubDomainRecordsRequest;

DeleteSubDomainRecordsRequest::DeleteSubDomainRecordsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DeleteSubDomainRecords") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSubDomainRecordsRequest::~DeleteSubDomainRecordsRequest() {}

std::string DeleteSubDomainRecordsRequest::getRR() const {
  return rR_;
}

void DeleteSubDomainRecordsRequest::setRR(const std::string &rR) {
  rR_ = rR;
  setParameter(std::string("RR"), rR);
}

std::string DeleteSubDomainRecordsRequest::getDomainName() const {
  return domainName_;
}

void DeleteSubDomainRecordsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DeleteSubDomainRecordsRequest::getType() const {
  return type_;
}

void DeleteSubDomainRecordsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DeleteSubDomainRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteSubDomainRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteSubDomainRecordsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DeleteSubDomainRecordsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DeleteSubDomainRecordsRequest::getLang() const {
  return lang_;
}

void DeleteSubDomainRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

