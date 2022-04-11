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

#include <alibabacloud/vod/model/RefreshMediaPlayUrlsRequest.h>

using AlibabaCloud::Vod::Model::RefreshMediaPlayUrlsRequest;

RefreshMediaPlayUrlsRequest::RefreshMediaPlayUrlsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "RefreshMediaPlayUrls") {
  setMethod(HttpRequest::Method::Post);
}

RefreshMediaPlayUrlsRequest::~RefreshMediaPlayUrlsRequest() {}

std::string RefreshMediaPlayUrlsRequest::getFormats() const {
  return formats_;
}

void RefreshMediaPlayUrlsRequest::setFormats(const std::string &formats) {
  formats_ = formats;
  setParameter(std::string("Formats"), formats);
}

std::string RefreshMediaPlayUrlsRequest::getUserData() const {
  return userData_;
}

void RefreshMediaPlayUrlsRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string RefreshMediaPlayUrlsRequest::getMediaIds() const {
  return mediaIds_;
}

void RefreshMediaPlayUrlsRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

std::string RefreshMediaPlayUrlsRequest::getDefinitions() const {
  return definitions_;
}

void RefreshMediaPlayUrlsRequest::setDefinitions(const std::string &definitions) {
  definitions_ = definitions;
  setParameter(std::string("Definitions"), definitions);
}

std::string RefreshMediaPlayUrlsRequest::getStreamType() const {
  return streamType_;
}

void RefreshMediaPlayUrlsRequest::setStreamType(const std::string &streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), streamType);
}

std::string RefreshMediaPlayUrlsRequest::getTaskType() const {
  return taskType_;
}

void RefreshMediaPlayUrlsRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

bool RefreshMediaPlayUrlsRequest::getSliceFlag() const {
  return sliceFlag_;
}

void RefreshMediaPlayUrlsRequest::setSliceFlag(bool sliceFlag) {
  sliceFlag_ = sliceFlag;
  setParameter(std::string("SliceFlag"), sliceFlag ? "true" : "false");
}

std::string RefreshMediaPlayUrlsRequest::getResultType() const {
  return resultType_;
}

void RefreshMediaPlayUrlsRequest::setResultType(const std::string &resultType) {
  resultType_ = resultType;
  setParameter(std::string("ResultType"), resultType);
}

int RefreshMediaPlayUrlsRequest::getSliceCount() const {
  return sliceCount_;
}

void RefreshMediaPlayUrlsRequest::setSliceCount(int sliceCount) {
  sliceCount_ = sliceCount;
  setParameter(std::string("SliceCount"), std::to_string(sliceCount));
}

