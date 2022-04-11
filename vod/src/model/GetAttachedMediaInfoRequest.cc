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

#include <alibabacloud/vod/model/GetAttachedMediaInfoRequest.h>

using AlibabaCloud::Vod::Model::GetAttachedMediaInfoRequest;

GetAttachedMediaInfoRequest::GetAttachedMediaInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetAttachedMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetAttachedMediaInfoRequest::~GetAttachedMediaInfoRequest() {}

long GetAttachedMediaInfoRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GetAttachedMediaInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string GetAttachedMediaInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetAttachedMediaInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetAttachedMediaInfoRequest::getOutputType() const {
  return outputType_;
}

void GetAttachedMediaInfoRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

std::string GetAttachedMediaInfoRequest::getMediaIds() const {
  return mediaIds_;
}

void GetAttachedMediaInfoRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

long GetAttachedMediaInfoRequest::getAuthTimeout() const {
  return authTimeout_;
}

void GetAttachedMediaInfoRequest::setAuthTimeout(long authTimeout) {
  authTimeout_ = authTimeout;
  setParameter(std::string("AuthTimeout"), std::to_string(authTimeout));
}

