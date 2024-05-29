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

#include <alibabacloud/ddoscoo/model/DescribeElasticQpsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeElasticQpsRequest;

DescribeElasticQpsRequest::DescribeElasticQpsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeElasticQps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeElasticQpsRequest::~DescribeElasticQpsRequest() {}

long DescribeElasticQpsRequest::getStartTime() const {
  return startTime_;
}

void DescribeElasticQpsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeElasticQpsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeElasticQpsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeElasticQpsRequest::getIp() const {
  return ip_;
}

void DescribeElasticQpsRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeElasticQpsRequest::getEndTime() const {
  return endTime_;
}

void DescribeElasticQpsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeElasticQpsRequest::getInterval() const {
  return interval_;
}

void DescribeElasticQpsRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeElasticQpsRequest::getRegion() const {
  return region_;
}

void DescribeElasticQpsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

