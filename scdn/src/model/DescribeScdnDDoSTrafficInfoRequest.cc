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

#include <alibabacloud/scdn/model/DescribeScdnDDoSTrafficInfoRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDDoSTrafficInfoRequest;

DescribeScdnDDoSTrafficInfoRequest::DescribeScdnDDoSTrafficInfoRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDDoSTrafficInfo") {
  setMethod(HttpRequest::Method::Get);
}

DescribeScdnDDoSTrafficInfoRequest::~DescribeScdnDDoSTrafficInfoRequest() {}

std::string DescribeScdnDDoSTrafficInfoRequest::getLine() const {
  return line_;
}

void DescribeScdnDDoSTrafficInfoRequest::setLine(const std::string &line) {
  line_ = line;
  setParameter(std::string("Line"), line);
}

std::string DescribeScdnDDoSTrafficInfoRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDDoSTrafficInfoRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDDoSTrafficInfoRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDDoSTrafficInfoRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

