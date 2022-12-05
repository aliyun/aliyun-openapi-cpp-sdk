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

#include <alibabacloud/sae/model/DescribeJobHistoryRequest.h>

using AlibabaCloud::Sae::Model::DescribeJobHistoryRequest;

DescribeJobHistoryRequest::DescribeJobHistoryRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/describeJobHistory"};
  setMethod(HttpRequest::Method::Get);
}

DescribeJobHistoryRequest::~DescribeJobHistoryRequest() {}

std::string DescribeJobHistoryRequest::getAppId() const {
  return appId_;
}

void DescribeJobHistoryRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long DescribeJobHistoryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeJobHistoryRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeJobHistoryRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeJobHistoryRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeJobHistoryRequest::getState() const {
  return state_;
}

void DescribeJobHistoryRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

