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

#include <alibabacloud/dcdn/model/DescribeDcdnFullDomainsBlockIPHistoryRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnFullDomainsBlockIPHistoryRequest;

DescribeDcdnFullDomainsBlockIPHistoryRequest::DescribeDcdnFullDomainsBlockIPHistoryRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnFullDomainsBlockIPHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnFullDomainsBlockIPHistoryRequest::~DescribeDcdnFullDomainsBlockIPHistoryRequest() {}

std::string DescribeDcdnFullDomainsBlockIPHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnFullDomainsBlockIPHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnFullDomainsBlockIPHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnFullDomainsBlockIPHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnFullDomainsBlockIPHistoryRequest::getIPList() const {
  return iPList_;
}

void DescribeDcdnFullDomainsBlockIPHistoryRequest::setIPList(const std::string &iPList) {
  iPList_ = iPList;
  setBodyParameter(std::string("IPList"), iPList);
}

