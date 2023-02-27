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

#include <alibabacloud/ice/model/BatchGetMediaInfosRequest.h>

using AlibabaCloud::ICE::Model::BatchGetMediaInfosRequest;

BatchGetMediaInfosRequest::BatchGetMediaInfosRequest()
    : RpcServiceRequest("ice", "2020-11-09", "BatchGetMediaInfos") {
  setMethod(HttpRequest::Method::Post);
}

BatchGetMediaInfosRequest::~BatchGetMediaInfosRequest() {}

std::string BatchGetMediaInfosRequest::getAdditionType() const {
  return additionType_;
}

void BatchGetMediaInfosRequest::setAdditionType(const std::string &additionType) {
  additionType_ = additionType;
  setParameter(std::string("AdditionType"), additionType);
}

std::string BatchGetMediaInfosRequest::getMediaIds() const {
  return mediaIds_;
}

void BatchGetMediaInfosRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

