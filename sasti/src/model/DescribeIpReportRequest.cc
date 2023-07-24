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

#include <alibabacloud/sasti/model/DescribeIpReportRequest.h>

using AlibabaCloud::Sasti::Model::DescribeIpReportRequest;

DescribeIpReportRequest::DescribeIpReportRequest()
    : RpcServiceRequest("sasti", "2020-05-12", "DescribeIpReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpReportRequest::~DescribeIpReportRequest() {}

std::string DescribeIpReportRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeIpReportRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeIpReportRequest::getIp() const {
  return ip_;
}

void DescribeIpReportRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DescribeIpReportRequest::getField() const {
  return field_;
}

void DescribeIpReportRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeIpReportRequest::getServiceLang() const {
  return serviceLang_;
}

void DescribeIpReportRequest::setServiceLang(const std::string &serviceLang) {
  serviceLang_ = serviceLang;
  setParameter(std::string("ServiceLang"), serviceLang);
}

