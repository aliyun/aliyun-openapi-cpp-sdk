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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainUsageDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainUsageDataRequest;

DescribeDcdnDomainUsageDataRequest::DescribeDcdnDomainUsageDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainUsageDataRequest::~DescribeDcdnDomainUsageDataRequest() {}

std::string DescribeDcdnDomainUsageDataRequest::getArea() const {
  return area_;
}

void DescribeDcdnDomainUsageDataRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string DescribeDcdnDomainUsageDataRequest::getField() const {
  return field_;
}

void DescribeDcdnDomainUsageDataRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeDcdnDomainUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainUsageDataRequest::getType() const {
  return type_;
}

void DescribeDcdnDomainUsageDataRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeDcdnDomainUsageDataRequest::getDataProtocol() const {
  return dataProtocol_;
}

void DescribeDcdnDomainUsageDataRequest::setDataProtocol(const std::string &dataProtocol) {
  dataProtocol_ = dataProtocol;
  setParameter(std::string("DataProtocol"), dataProtocol);
}

