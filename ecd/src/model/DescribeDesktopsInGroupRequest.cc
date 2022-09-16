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

#include <alibabacloud/ecd/model/DescribeDesktopsInGroupRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDesktopsInGroupRequest;

DescribeDesktopsInGroupRequest::DescribeDesktopsInGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDesktopsInGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDesktopsInGroupRequest::~DescribeDesktopsInGroupRequest() {}

bool DescribeDesktopsInGroupRequest::getIgnoreDeleted() const {
  return ignoreDeleted_;
}

void DescribeDesktopsInGroupRequest::setIgnoreDeleted(bool ignoreDeleted) {
  ignoreDeleted_ = ignoreDeleted;
  setParameter(std::string("IgnoreDeleted"), ignoreDeleted ? "true" : "false");
}

std::string DescribeDesktopsInGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeDesktopsInGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeDesktopsInGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeDesktopsInGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDesktopsInGroupRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDesktopsInGroupRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeDesktopsInGroupRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDesktopsInGroupRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeDesktopsInGroupRequest::getPayType() const {
  return payType_;
}

void DescribeDesktopsInGroupRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

