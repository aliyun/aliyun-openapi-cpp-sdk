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

#include <alibabacloud/actiontrail/model/DescribeTrailsRequest.h>

using AlibabaCloud::Actiontrail::Model::DescribeTrailsRequest;

DescribeTrailsRequest::DescribeTrailsRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "DescribeTrails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTrailsRequest::~DescribeTrailsRequest() {}

bool DescribeTrailsRequest::getIncludeOrganizationTrail() const {
  return includeOrganizationTrail_;
}

void DescribeTrailsRequest::setIncludeOrganizationTrail(bool includeOrganizationTrail) {
  includeOrganizationTrail_ = includeOrganizationTrail;
  setParameter(std::string("IncludeOrganizationTrail"), includeOrganizationTrail ? "true" : "false");
}

bool DescribeTrailsRequest::getIncludeShadowTrails() const {
  return includeShadowTrails_;
}

void DescribeTrailsRequest::setIncludeShadowTrails(bool includeShadowTrails) {
  includeShadowTrails_ = includeShadowTrails;
  setParameter(std::string("IncludeShadowTrails"), includeShadowTrails ? "true" : "false");
}

std::string DescribeTrailsRequest::getNameList() const {
  return nameList_;
}

void DescribeTrailsRequest::setNameList(const std::string &nameList) {
  nameList_ = nameList;
  setParameter(std::string("NameList"), nameList);
}

