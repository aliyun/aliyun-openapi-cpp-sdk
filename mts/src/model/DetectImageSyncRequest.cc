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

#include <alibabacloud/mts/model/DetectImageSyncRequest.h>

using AlibabaCloud::Mts::Model::DetectImageSyncRequest;

DetectImageSyncRequest::DetectImageSyncRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DetectImageSync") {
  setMethod(HttpRequest::Method::Post);
}

DetectImageSyncRequest::~DetectImageSyncRequest() {}

std::string DetectImageSyncRequest::getImage() const {
  return image_;
}

void DetectImageSyncRequest::setImage(const std::string &image) {
  image_ = image;
  setParameter(std::string("Image"), image);
}

