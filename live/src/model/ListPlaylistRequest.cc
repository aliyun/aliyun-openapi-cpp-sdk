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

#include <alibabacloud/live/model/ListPlaylistRequest.h>

using AlibabaCloud::Live::Model::ListPlaylistRequest;

ListPlaylistRequest::ListPlaylistRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListPlaylist") {
  setMethod(HttpRequest::Method::Post);
}

ListPlaylistRequest::~ListPlaylistRequest() {}

std::string ListPlaylistRequest::getRegionId() const {
  return regionId_;
}

void ListPlaylistRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListPlaylistRequest::getPageSize() const {
  return pageSize_;
}

void ListPlaylistRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPlaylistRequest::getProgramId() const {
  return programId_;
}

void ListPlaylistRequest::setProgramId(const std::string &programId) {
  programId_ = programId;
  setParameter(std::string("ProgramId"), programId);
}

long ListPlaylistRequest::getOwnerId() const {
  return ownerId_;
}

void ListPlaylistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListPlaylistRequest::getPage() const {
  return page_;
}

void ListPlaylistRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

