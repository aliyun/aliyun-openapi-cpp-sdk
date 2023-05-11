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

#include <alibabacloud/alidns/model/GetMainDomainNameRequest.h>

using AlibabaCloud::Alidns::Model::GetMainDomainNameRequest;

GetMainDomainNameRequest::GetMainDomainNameRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "GetMainDomainName") {
  setMethod(HttpRequest::Method::Post);
}

GetMainDomainNameRequest::~GetMainDomainNameRequest() {}

std::string GetMainDomainNameRequest::getInputString() const {
  return inputString_;
}

void GetMainDomainNameRequest::setInputString(const std::string &inputString) {
  inputString_ = inputString;
  setParameter(std::string("InputString"), inputString);
}

std::string GetMainDomainNameRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetMainDomainNameRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetMainDomainNameRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetMainDomainNameRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetMainDomainNameRequest::getLang() const {
  return lang_;
}

void GetMainDomainNameRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

