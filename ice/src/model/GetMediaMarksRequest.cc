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

#include <alibabacloud/ice/model/GetMediaMarksRequest.h>

using AlibabaCloud::ICE::Model::GetMediaMarksRequest;

GetMediaMarksRequest::GetMediaMarksRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetMediaMarks") {
  setMethod(HttpRequest::Method::Post);
}

GetMediaMarksRequest::~GetMediaMarksRequest() {}

std::string GetMediaMarksRequest::getMediaId() const {
  return mediaId_;
}

void GetMediaMarksRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string GetMediaMarksRequest::getMediaMarkIds() const {
  return mediaMarkIds_;
}

void GetMediaMarksRequest::setMediaMarkIds(const std::string &mediaMarkIds) {
  mediaMarkIds_ = mediaMarkIds;
  setParameter(std::string("MediaMarkIds"), mediaMarkIds);
}

