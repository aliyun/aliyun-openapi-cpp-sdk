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

#include <alibabacloud/antiddos-public/model/DescribeBgpPackByIpRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeBgpPackByIpRequest;

DescribeBgpPackByIpRequest::DescribeBgpPackByIpRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeBgpPackByIp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBgpPackByIpRequest::~DescribeBgpPackByIpRequest() {}

std::string DescribeBgpPackByIpRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBgpPackByIpRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeBgpPackByIpRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeBgpPackByIpRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeBgpPackByIpRequest::getLang() const {
  return lang_;
}

void DescribeBgpPackByIpRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeBgpPackByIpRequest::getIp() const {
  return ip_;
}

void DescribeBgpPackByIpRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

