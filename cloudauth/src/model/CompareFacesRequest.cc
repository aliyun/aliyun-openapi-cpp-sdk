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

#include <alibabacloud/cloudauth/model/CompareFacesRequest.h>

using AlibabaCloud::Cloudauth::Model::CompareFacesRequest;

CompareFacesRequest::CompareFacesRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "CompareFaces") {
  setMethod(HttpRequest::Method::Post);
}

CompareFacesRequest::~CompareFacesRequest() {}

std::string CompareFacesRequest::getSourceImageType() const {
  return sourceImageType_;
}

void CompareFacesRequest::setSourceImageType(const std::string &sourceImageType) {
  sourceImageType_ = sourceImageType;
  setBodyParameter(std::string("SourceImageType"), sourceImageType);
}

std::string CompareFacesRequest::getTargetImageType() const {
  return targetImageType_;
}

void CompareFacesRequest::setTargetImageType(const std::string &targetImageType) {
  targetImageType_ = targetImageType;
  setBodyParameter(std::string("TargetImageType"), targetImageType);
}

std::string CompareFacesRequest::getTargetImageValue() const {
  return targetImageValue_;
}

void CompareFacesRequest::setTargetImageValue(const std::string &targetImageValue) {
  targetImageValue_ = targetImageValue;
  setBodyParameter(std::string("TargetImageValue"), targetImageValue);
}

std::string CompareFacesRequest::getBizType() const {
  return bizType_;
}

void CompareFacesRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setBodyParameter(std::string("BizType"), bizType);
}

std::string CompareFacesRequest::getSourceImageValue() const {
  return sourceImageValue_;
}

void CompareFacesRequest::setSourceImageValue(const std::string &sourceImageValue) {
  sourceImageValue_ = sourceImageValue;
  setBodyParameter(std::string("SourceImageValue"), sourceImageValue);
}

