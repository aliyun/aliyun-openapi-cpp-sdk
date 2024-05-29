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

#include <alibabacloud/ddoscoo/model/DescribeWebReportTopIpRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeWebReportTopIpRequest;

DescribeWebReportTopIpRequest::DescribeWebReportTopIpRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeWebReportTopIp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebReportTopIpRequest::~DescribeWebReportTopIpRequest() {}

long DescribeWebReportTopIpRequest::getStartTime() const {
  return startTime_;
}

void DescribeWebReportTopIpRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeWebReportTopIpRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebReportTopIpRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebReportTopIpRequest::getTop() const {
  return top_;
}

void DescribeWebReportTopIpRequest::setTop(int top) {
  top_ = top;
  setParameter(std::string("Top"), std::to_string(top));
}

std::string DescribeWebReportTopIpRequest::getQueryType() const {
  return queryType_;
}

void DescribeWebReportTopIpRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

long DescribeWebReportTopIpRequest::getEndTime() const {
  return endTime_;
}

void DescribeWebReportTopIpRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeWebReportTopIpRequest::getDomain() const {
  return domain_;
}

void DescribeWebReportTopIpRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int DescribeWebReportTopIpRequest::getInterval() const {
  return interval_;
}

void DescribeWebReportTopIpRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

