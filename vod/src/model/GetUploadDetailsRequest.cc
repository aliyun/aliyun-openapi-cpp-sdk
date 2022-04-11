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

#include <alibabacloud/vod/model/GetUploadDetailsRequest.h>

using AlibabaCloud::Vod::Model::GetUploadDetailsRequest;

GetUploadDetailsRequest::GetUploadDetailsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetUploadDetails") {
  setMethod(HttpRequest::Method::Post);
}

GetUploadDetailsRequest::~GetUploadDetailsRequest() {}

long GetUploadDetailsRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GetUploadDetailsRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string GetUploadDetailsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetUploadDetailsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetUploadDetailsRequest::getMediaIds() const {
  return mediaIds_;
}

void GetUploadDetailsRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

std::string GetUploadDetailsRequest::getMediaType() const {
  return mediaType_;
}

void GetUploadDetailsRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

