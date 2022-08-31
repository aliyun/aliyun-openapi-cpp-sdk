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

#include <alibabacloud/cdn/model/DescribeDomainsUsageByDayRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainsUsageByDayRequest;

DescribeDomainsUsageByDayRequest::DescribeDomainsUsageByDayRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainsUsageByDay") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainsUsageByDayRequest::~DescribeDomainsUsageByDayRequest() {}

std::string DescribeDomainsUsageByDayRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainsUsageByDayRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainsUsageByDayRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainsUsageByDayRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainsUsageByDayRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainsUsageByDayRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainsUsageByDayRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainsUsageByDayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

