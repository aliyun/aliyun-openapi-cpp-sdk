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

#include <alibabacloud/alidns/model/DescribeDohUserInfoRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDohUserInfoRequest;

DescribeDohUserInfoRequest::DescribeDohUserInfoRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDohUserInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDohUserInfoRequest::~DescribeDohUserInfoRequest() {}

std::string DescribeDohUserInfoRequest::getStartDate() const {
  return startDate_;
}

void DescribeDohUserInfoRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeDohUserInfoRequest::getEndDate() const {
  return endDate_;
}

void DescribeDohUserInfoRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeDohUserInfoRequest::getLang() const {
  return lang_;
}

void DescribeDohUserInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

