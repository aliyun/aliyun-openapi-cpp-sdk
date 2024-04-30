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

#include <alibabacloud/dcdn/model/DescribeDcdnBgpTrafficDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnBgpTrafficDataRequest;

DescribeDcdnBgpTrafficDataRequest::DescribeDcdnBgpTrafficDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnBgpTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnBgpTrafficDataRequest::~DescribeDcdnBgpTrafficDataRequest() {}

std::string DescribeDcdnBgpTrafficDataRequest::getIsp() const {
  return isp_;
}

void DescribeDcdnBgpTrafficDataRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeDcdnBgpTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnBgpTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnBgpTrafficDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnBgpTrafficDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnBgpTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnBgpTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

