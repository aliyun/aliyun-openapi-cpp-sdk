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

#include <alibabacloud/imageseg/model/ChangeSkyRequest.h>

using AlibabaCloud::Imageseg::Model::ChangeSkyRequest;

ChangeSkyRequest::ChangeSkyRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "ChangeSky") {
  setMethod(HttpRequest::Method::Post);
}

ChangeSkyRequest::~ChangeSkyRequest() {}

std::string ChangeSkyRequest::getOssFile() const {
  return ossFile_;
}

void ChangeSkyRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string ChangeSkyRequest::getReplaceImageURL() const {
  return replaceImageURL_;
}

void ChangeSkyRequest::setReplaceImageURL(const std::string &replaceImageURL) {
  replaceImageURL_ = replaceImageURL;
  setParameter(std::string("ReplaceImageURL"), replaceImageURL);
}

std::string ChangeSkyRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ChangeSkyRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string ChangeSkyRequest::getImageURL() const {
  return imageURL_;
}

void ChangeSkyRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setParameter(std::string("ImageURL"), imageURL);
}

