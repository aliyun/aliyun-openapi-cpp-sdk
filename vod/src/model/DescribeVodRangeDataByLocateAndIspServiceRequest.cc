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

#include <alibabacloud/vod/model/DescribeVodRangeDataByLocateAndIspServiceRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodRangeDataByLocateAndIspServiceRequest;

DescribeVodRangeDataByLocateAndIspServiceRequest::DescribeVodRangeDataByLocateAndIspServiceRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodRangeDataByLocateAndIspService") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodRangeDataByLocateAndIspServiceRequest::~DescribeVodRangeDataByLocateAndIspServiceRequest() {}

std::string DescribeVodRangeDataByLocateAndIspServiceRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeVodRangeDataByLocateAndIspServiceRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodRangeDataByLocateAndIspServiceRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeVodRangeDataByLocateAndIspServiceRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodRangeDataByLocateAndIspServiceRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodRangeDataByLocateAndIspServiceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodRangeDataByLocateAndIspServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

