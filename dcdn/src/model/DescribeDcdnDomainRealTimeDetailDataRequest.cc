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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeDetailDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeDetailDataRequest;

DescribeDcdnDomainRealTimeDetailDataRequest::DescribeDcdnDomainRealTimeDetailDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeDetailData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDcdnDomainRealTimeDetailDataRequest::~DescribeDcdnDomainRealTimeDetailDataRequest() {}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getField() const {
  return field_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getMerge() const {
  return merge_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setMerge(const std::string &merge) {
  merge_ = merge;
  setParameter(std::string("Merge"), merge);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getMergeLocIsp() const {
  return mergeLocIsp_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setMergeLocIsp(const std::string &mergeLocIsp) {
  mergeLocIsp_ = mergeLocIsp;
  setParameter(std::string("MergeLocIsp"), mergeLocIsp);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainRealTimeDetailDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainRealTimeDetailDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

