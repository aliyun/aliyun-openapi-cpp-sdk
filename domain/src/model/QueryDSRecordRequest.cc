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

#include <alibabacloud/domain/model/QueryDSRecordRequest.h>

using AlibabaCloud::Domain::Model::QueryDSRecordRequest;

QueryDSRecordRequest::QueryDSRecordRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryDSRecord") {
  setMethod(HttpRequest::Method::Post);
}

QueryDSRecordRequest::~QueryDSRecordRequest() {}

std::string QueryDSRecordRequest::getDomainName() const {
  return domainName_;
}

void QueryDSRecordRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string QueryDSRecordRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryDSRecordRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string QueryDSRecordRequest::getLang() const {
  return lang_;
}

void QueryDSRecordRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

