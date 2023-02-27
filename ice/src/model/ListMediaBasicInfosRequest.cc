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

#include <alibabacloud/ice/model/ListMediaBasicInfosRequest.h>

using AlibabaCloud::ICE::Model::ListMediaBasicInfosRequest;

ListMediaBasicInfosRequest::ListMediaBasicInfosRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListMediaBasicInfos") {
  setMethod(HttpRequest::Method::Post);
}

ListMediaBasicInfosRequest::~ListMediaBasicInfosRequest() {}

std::string ListMediaBasicInfosRequest::getStartTime() const {
  return startTime_;
}

void ListMediaBasicInfosRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListMediaBasicInfosRequest::getSource() const {
  return source_;
}

void ListMediaBasicInfosRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string ListMediaBasicInfosRequest::getBusinessType() const {
  return businessType_;
}

void ListMediaBasicInfosRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string ListMediaBasicInfosRequest::getBiz() const {
  return biz_;
}

void ListMediaBasicInfosRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string ListMediaBasicInfosRequest::getNextToken() const {
  return nextToken_;
}

void ListMediaBasicInfosRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListMediaBasicInfosRequest::getPageSize() const {
  return pageSize_;
}

void ListMediaBasicInfosRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMediaBasicInfosRequest::getKeyword() const {
  return keyword_;
}

void ListMediaBasicInfosRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

bool ListMediaBasicInfosRequest::getIncludeDynamicMetaData() const {
  return includeDynamicMetaData_;
}

void ListMediaBasicInfosRequest::setIncludeDynamicMetaData(bool includeDynamicMetaData) {
  includeDynamicMetaData_ = includeDynamicMetaData;
  setParameter(std::string("IncludeDynamicMetaData"), includeDynamicMetaData ? "true" : "false");
}

std::string ListMediaBasicInfosRequest::getUploadSource() const {
  return uploadSource_;
}

void ListMediaBasicInfosRequest::setUploadSource(const std::string &uploadSource) {
  uploadSource_ = uploadSource;
  setParameter(std::string("UploadSource"), uploadSource);
}

std::string ListMediaBasicInfosRequest::getEndTime() const {
  return endTime_;
}

void ListMediaBasicInfosRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

bool ListMediaBasicInfosRequest::getIncludeFileBasicInfo() const {
  return includeFileBasicInfo_;
}

void ListMediaBasicInfosRequest::setIncludeFileBasicInfo(bool includeFileBasicInfo) {
  includeFileBasicInfo_ = includeFileBasicInfo;
  setParameter(std::string("IncludeFileBasicInfo"), includeFileBasicInfo ? "true" : "false");
}

std::string ListMediaBasicInfosRequest::getMediaId() const {
  return mediaId_;
}

void ListMediaBasicInfosRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

int ListMediaBasicInfosRequest::getPageNo() const {
  return pageNo_;
}

void ListMediaBasicInfosRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int ListMediaBasicInfosRequest::getMaxResults() const {
  return maxResults_;
}

void ListMediaBasicInfosRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListMediaBasicInfosRequest::getSortBy() const {
  return sortBy_;
}

void ListMediaBasicInfosRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListMediaBasicInfosRequest::getCategory() const {
  return category_;
}

void ListMediaBasicInfosRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string ListMediaBasicInfosRequest::getMediaType() const {
  return mediaType_;
}

void ListMediaBasicInfosRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

std::string ListMediaBasicInfosRequest::getStatus() const {
  return status_;
}

void ListMediaBasicInfosRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

