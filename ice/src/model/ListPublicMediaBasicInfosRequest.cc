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

#include <alibabacloud/ice/model/ListPublicMediaBasicInfosRequest.h>

using AlibabaCloud::ICE::Model::ListPublicMediaBasicInfosRequest;

ListPublicMediaBasicInfosRequest::ListPublicMediaBasicInfosRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListPublicMediaBasicInfos") {
  setMethod(HttpRequest::Method::Post);
}

ListPublicMediaBasicInfosRequest::~ListPublicMediaBasicInfosRequest() {}

std::string ListPublicMediaBasicInfosRequest::getNextToken() const {
  return nextToken_;
}

void ListPublicMediaBasicInfosRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListPublicMediaBasicInfosRequest::getPageNo() const {
  return pageNo_;
}

void ListPublicMediaBasicInfosRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int ListPublicMediaBasicInfosRequest::getPageSize() const {
  return pageSize_;
}

void ListPublicMediaBasicInfosRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListPublicMediaBasicInfosRequest::getMaxResults() const {
  return maxResults_;
}

void ListPublicMediaBasicInfosRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

bool ListPublicMediaBasicInfosRequest::getIncludeFileBasicInfo() const {
  return includeFileBasicInfo_;
}

void ListPublicMediaBasicInfosRequest::setIncludeFileBasicInfo(bool includeFileBasicInfo) {
  includeFileBasicInfo_ = includeFileBasicInfo;
  setParameter(std::string("IncludeFileBasicInfo"), includeFileBasicInfo ? "true" : "false");
}

std::string ListPublicMediaBasicInfosRequest::getMediaTagId() const {
  return mediaTagId_;
}

void ListPublicMediaBasicInfosRequest::setMediaTagId(const std::string &mediaTagId) {
  mediaTagId_ = mediaTagId;
  setParameter(std::string("MediaTagId"), mediaTagId);
}

