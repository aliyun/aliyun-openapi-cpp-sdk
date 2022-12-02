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

#include <alibabacloud/live/model/QueryMessageAppRequest.h>

using AlibabaCloud::Live::Model::QueryMessageAppRequest;

QueryMessageAppRequest::QueryMessageAppRequest()
    : RpcServiceRequest("live", "2016-11-01", "QueryMessageApp") {
  setMethod(HttpRequest::Method::Post);
}

QueryMessageAppRequest::~QueryMessageAppRequest() {}

int QueryMessageAppRequest::getSortType() const {
  return sortType_;
}

void QueryMessageAppRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setBodyParameter(std::string("SortType"), std::to_string(sortType));
}

int QueryMessageAppRequest::getPageNum() const {
  return pageNum_;
}

void QueryMessageAppRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryMessageAppRequest::getAppName() const {
  return appName_;
}

void QueryMessageAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

int QueryMessageAppRequest::getPageSize() const {
  return pageSize_;
}

void QueryMessageAppRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryMessageAppRequest::getAppId() const {
  return appId_;
}

void QueryMessageAppRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

