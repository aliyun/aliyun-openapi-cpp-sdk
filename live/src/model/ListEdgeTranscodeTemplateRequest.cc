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

#include <alibabacloud/live/model/ListEdgeTranscodeTemplateRequest.h>

using AlibabaCloud::Live::Model::ListEdgeTranscodeTemplateRequest;

ListEdgeTranscodeTemplateRequest::ListEdgeTranscodeTemplateRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListEdgeTranscodeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ListEdgeTranscodeTemplateRequest::~ListEdgeTranscodeTemplateRequest() {}

std::string ListEdgeTranscodeTemplateRequest::getType() const {
  return type_;
}

void ListEdgeTranscodeTemplateRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListEdgeTranscodeTemplateRequest::getRegionId() const {
  return regionId_;
}

void ListEdgeTranscodeTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListEdgeTranscodeTemplateRequest::getPageSize() const {
  return pageSize_;
}

void ListEdgeTranscodeTemplateRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEdgeTranscodeTemplateRequest::getKeyword() const {
  return keyword_;
}

void ListEdgeTranscodeTemplateRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListEdgeTranscodeTemplateRequest::getClusterId() const {
  return clusterId_;
}

void ListEdgeTranscodeTemplateRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long ListEdgeTranscodeTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void ListEdgeTranscodeTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListEdgeTranscodeTemplateRequest::getPageNo() const {
  return pageNo_;
}

void ListEdgeTranscodeTemplateRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListEdgeTranscodeTemplateRequest::getSortBy() const {
  return sortBy_;
}

void ListEdgeTranscodeTemplateRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListEdgeTranscodeTemplateRequest::getVideoCodec() const {
  return videoCodec_;
}

void ListEdgeTranscodeTemplateRequest::setVideoCodec(const std::string &videoCodec) {
  videoCodec_ = videoCodec;
  setParameter(std::string("VideoCodec"), videoCodec);
}

