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

#include <alibabacloud/live/model/ListLiveMessageAppsRequest.h>

using AlibabaCloud::Live::Model::ListLiveMessageAppsRequest;

ListLiveMessageAppsRequest::ListLiveMessageAppsRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveMessageApps") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveMessageAppsRequest::~ListLiveMessageAppsRequest() {}

int ListLiveMessageAppsRequest::getSortType() const {
  return sortType_;
}

void ListLiveMessageAppsRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), std::to_string(sortType));
}

long ListLiveMessageAppsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListLiveMessageAppsRequest::setNextPageToken(long nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), std::to_string(nextPageToken));
}

std::string ListLiveMessageAppsRequest::getDataCenter() const {
  return dataCenter_;
}

void ListLiveMessageAppsRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

