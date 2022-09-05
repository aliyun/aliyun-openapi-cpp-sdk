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

#include <alibabacloud/cdn/model/DescribeCdnReportRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnReportRequest;

DescribeCdnReportRequest::DescribeCdnReportRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnReportRequest::~DescribeCdnReportRequest() {}

long DescribeCdnReportRequest::getReportId() const {
  return reportId_;
}

void DescribeCdnReportRequest::setReportId(long reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), std::to_string(reportId));
}

std::string DescribeCdnReportRequest::getStartTime() const {
  return startTime_;
}

void DescribeCdnReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeCdnReportRequest::getArea() const {
  return area_;
}

void DescribeCdnReportRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string DescribeCdnReportRequest::getDomainName() const {
  return domainName_;
}

void DescribeCdnReportRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeCdnReportRequest::getEndTime() const {
  return endTime_;
}

void DescribeCdnReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCdnReportRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCdnReportRequest::getHttpCode() const {
  return httpCode_;
}

void DescribeCdnReportRequest::setHttpCode(const std::string &httpCode) {
  httpCode_ = httpCode;
  setParameter(std::string("HttpCode"), httpCode);
}

std::string DescribeCdnReportRequest::getIsOverseas() const {
  return isOverseas_;
}

void DescribeCdnReportRequest::setIsOverseas(const std::string &isOverseas) {
  isOverseas_ = isOverseas;
  setParameter(std::string("IsOverseas"), isOverseas);
}

