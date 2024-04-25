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

#include <alibabacloud/vod/model/DescribeVodDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainRealTimeBpsDataRequest;

DescribeVodDomainRealTimeBpsDataRequest::DescribeVodDomainRealTimeBpsDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainRealTimeBpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeVodDomainRealTimeBpsDataRequest::~DescribeVodDomainRealTimeBpsDataRequest() {}

std::string DescribeVodDomainRealTimeBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeVodDomainRealTimeBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeVodDomainRealTimeBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainRealTimeBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainRealTimeBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainRealTimeBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainRealTimeBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

