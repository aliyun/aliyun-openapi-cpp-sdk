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

#include <alibabacloud/antiddos-public/model/DescribeIpDdosThresholdRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeIpDdosThresholdRequest;

DescribeIpDdosThresholdRequest::DescribeIpDdosThresholdRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeIpDdosThreshold") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpDdosThresholdRequest::~DescribeIpDdosThresholdRequest() {}

std::string DescribeIpDdosThresholdRequest::getInternetIp() const {
  return internetIp_;
}

void DescribeIpDdosThresholdRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string DescribeIpDdosThresholdRequest::getDdosType() const {
  return ddosType_;
}

void DescribeIpDdosThresholdRequest::setDdosType(const std::string &ddosType) {
  ddosType_ = ddosType;
  setParameter(std::string("DdosType"), ddosType);
}

std::string DescribeIpDdosThresholdRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeIpDdosThresholdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeIpDdosThresholdRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeIpDdosThresholdRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeIpDdosThresholdRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeIpDdosThresholdRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeIpDdosThresholdRequest::getLang() const {
  return lang_;
}

void DescribeIpDdosThresholdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeIpDdosThresholdRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeIpDdosThresholdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

