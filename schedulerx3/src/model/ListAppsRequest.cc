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

#include <alibabacloud/schedulerx3/model/ListAppsRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListAppsRequest;

ListAppsRequest::ListAppsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListApps") {
  setMethod(HttpRequest::Method::Get);
}

ListAppsRequest::~ListAppsRequest() {}

std::string ListAppsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAppsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListAppsRequest::getTitle() const {
  return title_;
}

void ListAppsRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

int ListAppsRequest::getPageNum() const {
  return pageNum_;
}

void ListAppsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAppsRequest::getAppName() const {
  return appName_;
}

void ListAppsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListAppsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAppsRequest::getClusterId() const {
  return clusterId_;
}

void ListAppsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

