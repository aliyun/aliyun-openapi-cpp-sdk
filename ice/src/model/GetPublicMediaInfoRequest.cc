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

#include <alibabacloud/ice/model/GetPublicMediaInfoRequest.h>

using AlibabaCloud::ICE::Model::GetPublicMediaInfoRequest;

GetPublicMediaInfoRequest::GetPublicMediaInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetPublicMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetPublicMediaInfoRequest::~GetPublicMediaInfoRequest() {}

std::string GetPublicMediaInfoRequest::getMediaId() const {
  return mediaId_;
}

void GetPublicMediaInfoRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

