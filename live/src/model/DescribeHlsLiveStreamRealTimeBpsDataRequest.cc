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

#include <alibabacloud/live/model/DescribeHlsLiveStreamRealTimeBpsDataRequest.h>

using AlibabaCloud::Live::Model::DescribeHlsLiveStreamRealTimeBpsDataRequest;

DescribeHlsLiveStreamRealTimeBpsDataRequest::DescribeHlsLiveStreamRealTimeBpsDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeHlsLiveStreamRealTimeBpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeHlsLiveStreamRealTimeBpsDataRequest::~DescribeHlsLiveStreamRealTimeBpsDataRequest() {}

std::string DescribeHlsLiveStreamRealTimeBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeHlsLiveStreamRealTimeBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeHlsLiveStreamRealTimeBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHlsLiveStreamRealTimeBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHlsLiveStreamRealTimeBpsDataRequest::getTime() const {
  return time_;
}

void DescribeHlsLiveStreamRealTimeBpsDataRequest::setTime(const std::string &time) {
  time_ = time;
  setParameter(std::string("Time"), time);
}

