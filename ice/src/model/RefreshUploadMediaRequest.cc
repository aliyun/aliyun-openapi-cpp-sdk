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

#include <alibabacloud/ice/model/RefreshUploadMediaRequest.h>

using AlibabaCloud::ICE::Model::RefreshUploadMediaRequest;

RefreshUploadMediaRequest::RefreshUploadMediaRequest()
    : RpcServiceRequest("ice", "2020-11-09", "RefreshUploadMedia") {
  setMethod(HttpRequest::Method::Post);
}

RefreshUploadMediaRequest::~RefreshUploadMediaRequest() {}

std::string RefreshUploadMediaRequest::getMediaId() const {
  return mediaId_;
}

void RefreshUploadMediaRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string RefreshUploadMediaRequest::getFileUrl() const {
  return fileUrl_;
}

void RefreshUploadMediaRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

