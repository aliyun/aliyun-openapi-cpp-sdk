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

#include <alibabacloud/vod/model/DescribeVodDomainRealTimeTrafficDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainRealTimeTrafficDataRequest;

DescribeVodDomainRealTimeTrafficDataRequest::DescribeVodDomainRealTimeTrafficDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainRealTimeTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainRealTimeTrafficDataRequest::~DescribeVodDomainRealTimeTrafficDataRequest() {}

std::string DescribeVodDomainRealTimeTrafficDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeVodDomainRealTimeTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainRealTimeTrafficDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeVodDomainRealTimeTrafficDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainRealTimeTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainRealTimeTrafficDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainRealTimeTrafficDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

