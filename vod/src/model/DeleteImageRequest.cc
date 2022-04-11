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

#include <alibabacloud/vod/model/DeleteImageRequest.h>

using AlibabaCloud::Vod::Model::DeleteImageRequest;

DeleteImageRequest::DeleteImageRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteImage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteImageRequest::~DeleteImageRequest() {}

std::string DeleteImageRequest::getImageURLs() const {
  return imageURLs_;
}

void DeleteImageRequest::setImageURLs(const std::string &imageURLs) {
  imageURLs_ = imageURLs;
  setParameter(std::string("ImageURLs"), imageURLs);
}

std::string DeleteImageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteImageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteImageRequest::getImageType() const {
  return imageType_;
}

void DeleteImageRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string DeleteImageRequest::getVideoId() const {
  return videoId_;
}

void DeleteImageRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string DeleteImageRequest::getDeleteImageType() const {
  return deleteImageType_;
}

void DeleteImageRequest::setDeleteImageType(const std::string &deleteImageType) {
  deleteImageType_ = deleteImageType;
  setParameter(std::string("DeleteImageType"), deleteImageType);
}

std::string DeleteImageRequest::getImageIds() const {
  return imageIds_;
}

void DeleteImageRequest::setImageIds(const std::string &imageIds) {
  imageIds_ = imageIds;
  setParameter(std::string("ImageIds"), imageIds);
}

