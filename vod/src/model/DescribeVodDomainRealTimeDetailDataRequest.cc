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

#include <alibabacloud/vod/model/DescribeVodDomainRealTimeDetailDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainRealTimeDetailDataRequest;

DescribeVodDomainRealTimeDetailDataRequest::DescribeVodDomainRealTimeDetailDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainRealTimeDetailData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeVodDomainRealTimeDetailDataRequest::~DescribeVodDomainRealTimeDetailDataRequest() {}

std::string DescribeVodDomainRealTimeDetailDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getMerge() const {
  return merge_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setMerge(const std::string &merge) {
  merge_ = merge;
  setParameter(std::string("Merge"), merge);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getMergeLocIsp() const {
  return mergeLocIsp_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setMergeLocIsp(const std::string &mergeLocIsp) {
  mergeLocIsp_ = mergeLocIsp;
  setParameter(std::string("MergeLocIsp"), mergeLocIsp);
}

long DescribeVodDomainRealTimeDetailDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodDomainRealTimeDetailDataRequest::getField() const {
  return field_;
}

void DescribeVodDomainRealTimeDetailDataRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

