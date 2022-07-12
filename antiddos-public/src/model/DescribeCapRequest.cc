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

#include <alibabacloud/antiddos-public/model/DescribeCapRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeCapRequest;

DescribeCapRequest::DescribeCapRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeCap") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCapRequest::~DescribeCapRequest() {}

std::string DescribeCapRequest::getInternetIp() const {
  return internetIp_;
}

void DescribeCapRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

long DescribeCapRequest::getBegTime() const {
  return begTime_;
}

void DescribeCapRequest::setBegTime(long begTime) {
  begTime_ = begTime;
  setParameter(std::string("BegTime"), std::to_string(begTime));
}

std::string DescribeCapRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCapRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeCapRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeCapRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeCapRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeCapRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeCapRequest::getLang() const {
  return lang_;
}

void DescribeCapRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeCapRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCapRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

