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

#include <alibabacloud/imageseg/model/SegmentBodyRequest.h>

using AlibabaCloud::Imageseg::Model::SegmentBodyRequest;

SegmentBodyRequest::SegmentBodyRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "SegmentBody") {
  setMethod(HttpRequest::Method::Post);
}

SegmentBodyRequest::~SegmentBodyRequest() {}

std::string SegmentBodyRequest::getReturnForm() const {
  return returnForm_;
}

void SegmentBodyRequest::setReturnForm(const std::string &returnForm) {
  returnForm_ = returnForm;
  setParameter(std::string("ReturnForm"), returnForm);
}

std::string SegmentBodyRequest::getOssFile() const {
  return ossFile_;
}

void SegmentBodyRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SegmentBodyRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SegmentBodyRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

bool SegmentBodyRequest::getAsync() const {
  return async_;
}

void SegmentBodyRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string SegmentBodyRequest::getImageURL() const {
  return imageURL_;
}

void SegmentBodyRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setParameter(std::string("ImageURL"), imageURL);
}

