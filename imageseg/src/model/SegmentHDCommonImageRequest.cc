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

#include <alibabacloud/imageseg/model/SegmentHDCommonImageRequest.h>

using AlibabaCloud::Imageseg::Model::SegmentHDCommonImageRequest;

SegmentHDCommonImageRequest::SegmentHDCommonImageRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "SegmentHDCommonImage") {
  setMethod(HttpRequest::Method::Post);
}

SegmentHDCommonImageRequest::~SegmentHDCommonImageRequest() {}

std::string SegmentHDCommonImageRequest::getOssFile() const {
  return ossFile_;
}

void SegmentHDCommonImageRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SegmentHDCommonImageRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SegmentHDCommonImageRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

bool SegmentHDCommonImageRequest::getAsync() const {
  return async_;
}

void SegmentHDCommonImageRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string SegmentHDCommonImageRequest::getImageUrl() const {
  return imageUrl_;
}

void SegmentHDCommonImageRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

