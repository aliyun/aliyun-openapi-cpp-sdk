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

#include <alibabacloud/antiddos-public/model/DescribeIpLocationServiceRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeIpLocationServiceRequest;

DescribeIpLocationServiceRequest::DescribeIpLocationServiceRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeIpLocationService") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpLocationServiceRequest::~DescribeIpLocationServiceRequest() {}

std::string DescribeIpLocationServiceRequest::getInternetIp() const {
  return internetIp_;
}

void DescribeIpLocationServiceRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string DescribeIpLocationServiceRequest::getEagleEyeRpcId() const {
  return eagleEyeRpcId_;
}

void DescribeIpLocationServiceRequest::setEagleEyeRpcId(const std::string &eagleEyeRpcId) {
  eagleEyeRpcId_ = eagleEyeRpcId;
  setBodyParameter(std::string("EagleEyeRpcId"), eagleEyeRpcId);
}

std::string DescribeIpLocationServiceRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeIpLocationServiceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeIpLocationServiceRequest::getEagleEyeTraceId() const {
  return eagleEyeTraceId_;
}

void DescribeIpLocationServiceRequest::setEagleEyeTraceId(const std::string &eagleEyeTraceId) {
  eagleEyeTraceId_ = eagleEyeTraceId;
  setBodyParameter(std::string("EagleEyeTraceId"), eagleEyeTraceId);
}

std::string DescribeIpLocationServiceRequest::getLang() const {
  return lang_;
}

void DescribeIpLocationServiceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeIpLocationServiceRequest::getEagleEyeUserData() const {
  return eagleEyeUserData_;
}

void DescribeIpLocationServiceRequest::setEagleEyeUserData(const std::string &eagleEyeUserData) {
  eagleEyeUserData_ = eagleEyeUserData;
  setBodyParameter(std::string("EagleEyeUserData"), eagleEyeUserData);
}

