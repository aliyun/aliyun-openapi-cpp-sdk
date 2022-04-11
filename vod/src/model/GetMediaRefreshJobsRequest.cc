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

#include <alibabacloud/vod/model/GetMediaRefreshJobsRequest.h>

using AlibabaCloud::Vod::Model::GetMediaRefreshJobsRequest;

GetMediaRefreshJobsRequest::GetMediaRefreshJobsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetMediaRefreshJobs") {
  setMethod(HttpRequest::Method::Get);
}

GetMediaRefreshJobsRequest::~GetMediaRefreshJobsRequest() {}

std::string GetMediaRefreshJobsRequest::getMediaRefreshJobId() const {
  return mediaRefreshJobId_;
}

void GetMediaRefreshJobsRequest::setMediaRefreshJobId(const std::string &mediaRefreshJobId) {
  mediaRefreshJobId_ = mediaRefreshJobId;
  setParameter(std::string("MediaRefreshJobId"), mediaRefreshJobId);
}

std::string GetMediaRefreshJobsRequest::getMediaId() const {
  return mediaId_;
}

void GetMediaRefreshJobsRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

