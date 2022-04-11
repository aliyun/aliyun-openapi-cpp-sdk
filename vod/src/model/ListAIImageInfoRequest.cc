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

#include <alibabacloud/vod/model/ListAIImageInfoRequest.h>

using AlibabaCloud::Vod::Model::ListAIImageInfoRequest;

ListAIImageInfoRequest::ListAIImageInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ListAIImageInfo") {
  setMethod(HttpRequest::Method::Post);
}

ListAIImageInfoRequest::~ListAIImageInfoRequest() {}

std::string ListAIImageInfoRequest::getVideoId() const {
  return videoId_;
}

void ListAIImageInfoRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string ListAIImageInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListAIImageInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

