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

#include <alibabacloud/ice/model/DescribePlayEventListRequest.h>

using AlibabaCloud::ICE::Model::DescribePlayEventListRequest;

DescribePlayEventListRequest::DescribePlayEventListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribePlayEventList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayEventListRequest::~DescribePlayEventListRequest() {}

std::string DescribePlayEventListRequest::getSessionId() const {
  return sessionId_;
}

void DescribePlayEventListRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string DescribePlayEventListRequest::getPlayTs() const {
  return playTs_;
}

void DescribePlayEventListRequest::setPlayTs(const std::string &playTs) {
  playTs_ = playTs;
  setParameter(std::string("PlayTs"), playTs);
}

int DescribePlayEventListRequest::getPageNo() const {
  return pageNo_;
}

void DescribePlayEventListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int DescribePlayEventListRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlayEventListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

