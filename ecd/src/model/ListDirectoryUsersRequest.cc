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

#include <alibabacloud/ecd/model/ListDirectoryUsersRequest.h>

using AlibabaCloud::Ecd::Model::ListDirectoryUsersRequest;

ListDirectoryUsersRequest::ListDirectoryUsersRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ListDirectoryUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListDirectoryUsersRequest::~ListDirectoryUsersRequest() {}

std::string ListDirectoryUsersRequest::getOUPath() const {
  return oUPath_;
}

void ListDirectoryUsersRequest::setOUPath(const std::string &oUPath) {
  oUPath_ = oUPath;
  setParameter(std::string("OUPath"), oUPath);
}

std::string ListDirectoryUsersRequest::getFilter() const {
  return filter_;
}

void ListDirectoryUsersRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListDirectoryUsersRequest::getRegionId() const {
  return regionId_;
}

void ListDirectoryUsersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDirectoryUsersRequest::getNextToken() const {
  return nextToken_;
}

void ListDirectoryUsersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListDirectoryUsersRequest::getMaxResults() const {
  return maxResults_;
}

void ListDirectoryUsersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListDirectoryUsersRequest::getDirectoryId() const {
  return directoryId_;
}

void ListDirectoryUsersRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

