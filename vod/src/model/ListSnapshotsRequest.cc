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

#include <alibabacloud/vod/model/ListSnapshotsRequest.h>

using AlibabaCloud::Vod::Model::ListSnapshotsRequest;

ListSnapshotsRequest::ListSnapshotsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ListSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

ListSnapshotsRequest::~ListSnapshotsRequest() {}

std::string ListSnapshotsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListSnapshotsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void ListSnapshotsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListSnapshotsRequest::getAuthTimeout() const {
  return authTimeout_;
}

void ListSnapshotsRequest::setAuthTimeout(const std::string &authTimeout) {
  authTimeout_ = authTimeout;
  setParameter(std::string("AuthTimeout"), authTimeout);
}

std::string ListSnapshotsRequest::getVideoId() const {
  return videoId_;
}

void ListSnapshotsRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string ListSnapshotsRequest::getSnapshotType() const {
  return snapshotType_;
}

void ListSnapshotsRequest::setSnapshotType(const std::string &snapshotType) {
  snapshotType_ = snapshotType;
  setParameter(std::string("SnapshotType"), snapshotType);
}

std::string ListSnapshotsRequest::getPageNo() const {
  return pageNo_;
}

void ListSnapshotsRequest::setPageNo(const std::string &pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), pageNo);
}

