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

#include <alibabacloud/vod/model/DescribeVodDomainMax95BpsDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainMax95BpsDataRequest;

DescribeVodDomainMax95BpsDataRequest::DescribeVodDomainMax95BpsDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainMax95BpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeVodDomainMax95BpsDataRequest::~DescribeVodDomainMax95BpsDataRequest() {}

std::string DescribeVodDomainMax95BpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainMax95BpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainMax95BpsDataRequest::getCycle() const {
  return cycle_;
}

void DescribeVodDomainMax95BpsDataRequest::setCycle(const std::string &cycle) {
  cycle_ = cycle;
  setParameter(std::string("Cycle"), cycle);
}

std::string DescribeVodDomainMax95BpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainMax95BpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainMax95BpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainMax95BpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainMax95BpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainMax95BpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodDomainMax95BpsDataRequest::getTimePoint() const {
  return timePoint_;
}

void DescribeVodDomainMax95BpsDataRequest::setTimePoint(const std::string &timePoint) {
  timePoint_ = timePoint;
  setParameter(std::string("TimePoint"), timePoint);
}

