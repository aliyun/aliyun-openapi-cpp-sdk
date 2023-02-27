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

#include <alibabacloud/ice/model/ListLiveTranscodeTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListLiveTranscodeTemplatesRequest;

ListLiveTranscodeTemplatesRequest::ListLiveTranscodeTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveTranscodeTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveTranscodeTemplatesRequest::~ListLiveTranscodeTemplatesRequest() {}

std::string ListLiveTranscodeTemplatesRequest::getType() const {
  return type_;
}

void ListLiveTranscodeTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListLiveTranscodeTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveTranscodeTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveTranscodeTemplatesRequest::getKeyWord() const {
  return keyWord_;
}

void ListLiveTranscodeTemplatesRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

int ListLiveTranscodeTemplatesRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveTranscodeTemplatesRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListLiveTranscodeTemplatesRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveTranscodeTemplatesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLiveTranscodeTemplatesRequest::getVideoCodec() const {
  return videoCodec_;
}

void ListLiveTranscodeTemplatesRequest::setVideoCodec(const std::string &videoCodec) {
  videoCodec_ = videoCodec;
  setParameter(std::string("VideoCodec"), videoCodec);
}

std::string ListLiveTranscodeTemplatesRequest::getCategory() const {
  return category_;
}

void ListLiveTranscodeTemplatesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

