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

#include <alibabacloud/cdn/model/DescribeRangeDataByLocateAndIspServiceRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRangeDataByLocateAndIspServiceRequest;

DescribeRangeDataByLocateAndIspServiceRequest::DescribeRangeDataByLocateAndIspServiceRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeRangeDataByLocateAndIspService") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRangeDataByLocateAndIspServiceRequest::~DescribeRangeDataByLocateAndIspServiceRequest() {}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getDomainNames() const {
  return domainNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getLocationNames() const {
  return locationNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setLocationNames(const std::string &locationNames) {
  locationNames_ = locationNames;
  setParameter(std::string("LocationNames"), locationNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getStartTime() const {
  return startTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getIspNames() const {
  return ispNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setIspNames(const std::string &ispNames) {
  ispNames_ = ispNames;
  setParameter(std::string("IspNames"), ispNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getEndTime() const {
  return endTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeRangeDataByLocateAndIspServiceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

