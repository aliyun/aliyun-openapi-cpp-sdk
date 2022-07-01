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

#include <alibabacloud/ddoscoo/model/DescribePortViewSourceCountriesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortViewSourceCountriesRequest;

DescribePortViewSourceCountriesRequest::DescribePortViewSourceCountriesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortViewSourceCountries") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortViewSourceCountriesRequest::~DescribePortViewSourceCountriesRequest() {}

long DescribePortViewSourceCountriesRequest::getEndTime() const {
  return endTime_;
}

void DescribePortViewSourceCountriesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribePortViewSourceCountriesRequest::getStartTime() const {
  return startTime_;
}

void DescribePortViewSourceCountriesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribePortViewSourceCountriesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortViewSourceCountriesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortViewSourceCountriesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortViewSourceCountriesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribePortViewSourceCountriesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePortViewSourceCountriesRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

