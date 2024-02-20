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

#include <alibabacloud/aigen/model/InteractiveFullSegmentationRequest.h>

using AlibabaCloud::Aigen::Model::InteractiveFullSegmentationRequest;

InteractiveFullSegmentationRequest::InteractiveFullSegmentationRequest()
    : RpcServiceRequest("aigen", "2024-01-11", "InteractiveFullSegmentation") {
  setMethod(HttpRequest::Method::Post);
}

InteractiveFullSegmentationRequest::~InteractiveFullSegmentationRequest() {}

std::string InteractiveFullSegmentationRequest::getReturnFormat() const {
  return returnFormat_;
}

void InteractiveFullSegmentationRequest::setReturnFormat(const std::string &returnFormat) {
  returnFormat_ = returnFormat;
  setBodyParameter(std::string("ReturnFormat"), returnFormat);
}

bool InteractiveFullSegmentationRequest::getAsync() const {
  return async_;
}

void InteractiveFullSegmentationRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string InteractiveFullSegmentationRequest::getImageUrl() const {
  return imageUrl_;
}

void InteractiveFullSegmentationRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

