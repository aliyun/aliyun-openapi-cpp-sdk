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

#include <alibabacloud/antiddos-public/model/DescribeDdosThresholdRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeDdosThresholdRequest;

DescribeDdosThresholdRequest::DescribeDdosThresholdRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeDdosThreshold") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDdosThresholdRequest::~DescribeDdosThresholdRequest() {}

std::string DescribeDdosThresholdRequest::getDdosType() const {
  return ddosType_;
}

void DescribeDdosThresholdRequest::setDdosType(const std::string &ddosType) {
  ddosType_ = ddosType;
  setParameter(std::string("DdosType"), ddosType);
}

std::string DescribeDdosThresholdRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDdosThresholdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDdosThresholdRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeDdosThresholdRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeDdosThresholdRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeDdosThresholdRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeDdosThresholdRequest::getLang() const {
  return lang_;
}

void DescribeDdosThresholdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<std::string> DescribeDdosThresholdRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeDdosThresholdRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

