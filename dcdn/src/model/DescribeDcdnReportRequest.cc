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

#include <alibabacloud/dcdn/model/DescribeDcdnReportRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnReportRequest;

DescribeDcdnReportRequest::DescribeDcdnReportRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnReportRequest::~DescribeDcdnReportRequest() {}

std::string DescribeDcdnReportRequest::getArea() const {
  return area_;
}

void DescribeDcdnReportRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

long DescribeDcdnReportRequest::getReportId() const {
  return reportId_;
}

void DescribeDcdnReportRequest::setReportId(long reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), std::to_string(reportId));
}

std::string DescribeDcdnReportRequest::getIsOverseas() const {
  return isOverseas_;
}

void DescribeDcdnReportRequest::setIsOverseas(const std::string &isOverseas) {
  isOverseas_ = isOverseas;
  setParameter(std::string("IsOverseas"), isOverseas);
}

std::string DescribeDcdnReportRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnReportRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnReportRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnReportRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnReportRequest::getHttpCode() const {
  return httpCode_;
}

void DescribeDcdnReportRequest::setHttpCode(const std::string &httpCode) {
  httpCode_ = httpCode;
  setParameter(std::string("HttpCode"), httpCode);
}

