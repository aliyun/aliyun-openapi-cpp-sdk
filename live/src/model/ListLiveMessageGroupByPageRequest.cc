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

#include <alibabacloud/live/model/ListLiveMessageGroupByPageRequest.h>

using AlibabaCloud::Live::Model::ListLiveMessageGroupByPageRequest;

ListLiveMessageGroupByPageRequest::ListLiveMessageGroupByPageRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveMessageGroupByPage") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveMessageGroupByPageRequest::~ListLiveMessageGroupByPageRequest() {}

int ListLiveMessageGroupByPageRequest::getSortType() const {
  return sortType_;
}

void ListLiveMessageGroupByPageRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), std::to_string(sortType));
}

int ListLiveMessageGroupByPageRequest::getGroupStatus() const {
  return groupStatus_;
}

void ListLiveMessageGroupByPageRequest::setGroupStatus(int groupStatus) {
  groupStatus_ = groupStatus;
  setParameter(std::string("GroupStatus"), std::to_string(groupStatus));
}

std::string ListLiveMessageGroupByPageRequest::getDataCenter() const {
  return dataCenter_;
}

void ListLiveMessageGroupByPageRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

int ListLiveMessageGroupByPageRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLiveMessageGroupByPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLiveMessageGroupByPageRequest::getAppId() const {
  return appId_;
}

void ListLiveMessageGroupByPageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListLiveMessageGroupByPageRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveMessageGroupByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

