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

#include <alibabacloud/antiddos-public/model/DescribeDdosCountRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeDdosCountRequest;

DescribeDdosCountRequest::DescribeDdosCountRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeDdosCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDdosCountRequest::~DescribeDdosCountRequest() {}

std::string DescribeDdosCountRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDdosCountRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDdosCountRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeDdosCountRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeDdosCountRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeDdosCountRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeDdosCountRequest::getLang() const {
  return lang_;
}

void DescribeDdosCountRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

