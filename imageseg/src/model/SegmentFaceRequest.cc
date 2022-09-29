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

#include <alibabacloud/imageseg/model/SegmentFaceRequest.h>

using AlibabaCloud::Imageseg::Model::SegmentFaceRequest;

SegmentFaceRequest::SegmentFaceRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "SegmentFace") {
  setMethod(HttpRequest::Method::Post);
}

SegmentFaceRequest::~SegmentFaceRequest() {}

std::string SegmentFaceRequest::getOssFile() const {
  return ossFile_;
}

void SegmentFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SegmentFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SegmentFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string SegmentFaceRequest::getImageURL() const {
  return imageURL_;
}

void SegmentFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setParameter(std::string("ImageURL"), imageURL);
}

