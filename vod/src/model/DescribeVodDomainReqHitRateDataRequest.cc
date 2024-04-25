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

#include <alibabacloud/vod/model/DescribeVodDomainReqHitRateDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainReqHitRateDataRequest;

DescribeVodDomainReqHitRateDataRequest::DescribeVodDomainReqHitRateDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainReqHitRateData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainReqHitRateDataRequest::~DescribeVodDomainReqHitRateDataRequest() {}

std::string DescribeVodDomainReqHitRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainReqHitRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainReqHitRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainReqHitRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainReqHitRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainReqHitRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodDomainReqHitRateDataRequest::getInterval() const {
  return interval_;
}

void DescribeVodDomainReqHitRateDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

