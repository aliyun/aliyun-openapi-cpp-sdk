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

#include <alibabacloud/alidns/model/GetTxtRecordForVerifyRequest.h>

using AlibabaCloud::Alidns::Model::GetTxtRecordForVerifyRequest;

GetTxtRecordForVerifyRequest::GetTxtRecordForVerifyRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "GetTxtRecordForVerify") {
  setMethod(HttpRequest::Method::Post);
}

GetTxtRecordForVerifyRequest::~GetTxtRecordForVerifyRequest() {}

std::string GetTxtRecordForVerifyRequest::getDomainName() const {
  return domainName_;
}

void GetTxtRecordForVerifyRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string GetTxtRecordForVerifyRequest::getType() const {
  return type_;
}

void GetTxtRecordForVerifyRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string GetTxtRecordForVerifyRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetTxtRecordForVerifyRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetTxtRecordForVerifyRequest::getLang() const {
  return lang_;
}

void GetTxtRecordForVerifyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

