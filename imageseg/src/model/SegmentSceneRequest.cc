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

#include <alibabacloud/imageseg/model/SegmentSceneRequest.h>

using AlibabaCloud::Imageseg::Model::SegmentSceneRequest;

SegmentSceneRequest::SegmentSceneRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "SegmentScene") {
  setMethod(HttpRequest::Method::Post);
}

SegmentSceneRequest::~SegmentSceneRequest() {}

std::string SegmentSceneRequest::getOssFile() const {
  return ossFile_;
}

void SegmentSceneRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SegmentSceneRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SegmentSceneRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string SegmentSceneRequest::getImageURL() const {
  return imageURL_;
}

void SegmentSceneRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setParameter(std::string("ImageURL"), imageURL);
}

