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

#include <alibabacloud/vod/model/DescribeVodDomainSrcBpsDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainSrcBpsDataRequest;

DescribeVodDomainSrcBpsDataRequest::DescribeVodDomainSrcBpsDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainSrcBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainSrcBpsDataRequest::~DescribeVodDomainSrcBpsDataRequest() {}

std::string DescribeVodDomainSrcBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainSrcBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainSrcBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainSrcBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainSrcBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainSrcBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainSrcBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainSrcBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodDomainSrcBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeVodDomainSrcBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

