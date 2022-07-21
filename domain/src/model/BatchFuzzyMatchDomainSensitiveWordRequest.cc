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

#include <alibabacloud/domain/model/BatchFuzzyMatchDomainSensitiveWordRequest.h>

using AlibabaCloud::Domain::Model::BatchFuzzyMatchDomainSensitiveWordRequest;

BatchFuzzyMatchDomainSensitiveWordRequest::BatchFuzzyMatchDomainSensitiveWordRequest()
    : RpcServiceRequest("domain", "2018-01-29", "BatchFuzzyMatchDomainSensitiveWord") {
  setMethod(HttpRequest::Method::Post);
}

BatchFuzzyMatchDomainSensitiveWordRequest::~BatchFuzzyMatchDomainSensitiveWordRequest() {}

std::string BatchFuzzyMatchDomainSensitiveWordRequest::getUserClientIp() const {
  return userClientIp_;
}

void BatchFuzzyMatchDomainSensitiveWordRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string BatchFuzzyMatchDomainSensitiveWordRequest::getKeyword() const {
  return keyword_;
}

void BatchFuzzyMatchDomainSensitiveWordRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string BatchFuzzyMatchDomainSensitiveWordRequest::getLang() const {
  return lang_;
}

void BatchFuzzyMatchDomainSensitiveWordRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

