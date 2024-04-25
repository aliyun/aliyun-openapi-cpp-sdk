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

#include <alibabacloud/vod/model/DescribeVodDomainRealTimeReqHitRateDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainRealTimeReqHitRateDataRequest;

DescribeVodDomainRealTimeReqHitRateDataRequest::DescribeVodDomainRealTimeReqHitRateDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainRealTimeReqHitRateData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeVodDomainRealTimeReqHitRateDataRequest::~DescribeVodDomainRealTimeReqHitRateDataRequest() {}

std::string DescribeVodDomainRealTimeReqHitRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainRealTimeReqHitRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainRealTimeReqHitRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainRealTimeReqHitRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainRealTimeReqHitRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainRealTimeReqHitRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainRealTimeReqHitRateDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainRealTimeReqHitRateDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

