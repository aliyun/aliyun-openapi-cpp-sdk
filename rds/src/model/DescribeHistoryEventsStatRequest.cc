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

#include <alibabacloud/rds/model/DescribeHistoryEventsStatRequest.h>

using AlibabaCloud::Rds::Model::DescribeHistoryEventsStatRequest;

DescribeHistoryEventsStatRequest::DescribeHistoryEventsStatRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHistoryEventsStat") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHistoryEventsStatRequest::~DescribeHistoryEventsStatRequest() {}

std::string DescribeHistoryEventsStatRequest::getToStartTime() const {
  return toStartTime_;
}

void DescribeHistoryEventsStatRequest::setToStartTime(const std::string &toStartTime) {
  toStartTime_ = toStartTime;
  setParameter(std::string("ToStartTime"), toStartTime);
}

std::string DescribeHistoryEventsStatRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHistoryEventsStatRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHistoryEventsStatRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeHistoryEventsStatRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeHistoryEventsStatRequest::getRegionId() const {
  return regionId_;
}

void DescribeHistoryEventsStatRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeHistoryEventsStatRequest::getFromStartTime() const {
  return fromStartTime_;
}

void DescribeHistoryEventsStatRequest::setFromStartTime(const std::string &fromStartTime) {
  fromStartTime_ = fromStartTime;
  setParameter(std::string("FromStartTime"), fromStartTime);
}

std::string DescribeHistoryEventsStatRequest::getArchiveStatus() const {
  return archiveStatus_;
}

void DescribeHistoryEventsStatRequest::setArchiveStatus(const std::string &archiveStatus) {
  archiveStatus_ = archiveStatus;
  setParameter(std::string("ArchiveStatus"), archiveStatus);
}

