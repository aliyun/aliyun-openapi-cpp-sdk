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

#include <alibabacloud/sae/model/DescribeApplicationGroupsRequest.h>

using AlibabaCloud::Sae::Model::DescribeApplicationGroupsRequest;

DescribeApplicationGroupsRequest::DescribeApplicationGroupsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/describeApplicationGroups"};
  setMethod(HttpRequest::Method::Get);
}

DescribeApplicationGroupsRequest::~DescribeApplicationGroupsRequest() {}

std::string DescribeApplicationGroupsRequest::getAppId() const {
  return appId_;
}

void DescribeApplicationGroupsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int DescribeApplicationGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApplicationGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeApplicationGroupsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeApplicationGroupsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

