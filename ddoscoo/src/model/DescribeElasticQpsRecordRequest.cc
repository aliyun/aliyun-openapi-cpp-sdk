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

#include <alibabacloud/ddoscoo/model/DescribeElasticQpsRecordRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeElasticQpsRecordRequest;

DescribeElasticQpsRecordRequest::DescribeElasticQpsRecordRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeElasticQpsRecord") {
  setMethod(HttpRequest::Method::Post);
}

DescribeElasticQpsRecordRequest::~DescribeElasticQpsRecordRequest() {}

std::string DescribeElasticQpsRecordRequest::getIp() const {
  return ip_;
}

void DescribeElasticQpsRecordRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeElasticQpsRecordRequest::getEndTime() const {
  return endTime_;
}

void DescribeElasticQpsRecordRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeElasticQpsRecordRequest::getStartTime() const {
  return startTime_;
}

void DescribeElasticQpsRecordRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeElasticQpsRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeElasticQpsRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

