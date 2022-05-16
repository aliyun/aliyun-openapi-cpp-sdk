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

#include <alibabacloud/sae/model/ListLogConfigsRequest.h>

using AlibabaCloud::Sae::Model::ListLogConfigsRequest;

ListLogConfigsRequest::ListLogConfigsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/log/listLogConfigs"};
  setMethod(HttpRequest::Method::Get);
}

ListLogConfigsRequest::~ListLogConfigsRequest() {}

std::string ListLogConfigsRequest::getAppId() const {
  return appId_;
}

void ListLogConfigsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListLogConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListLogConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListLogConfigsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListLogConfigsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

