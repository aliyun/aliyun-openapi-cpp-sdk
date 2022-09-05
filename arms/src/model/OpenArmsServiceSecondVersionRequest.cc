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

#include <alibabacloud/arms/model/OpenArmsServiceSecondVersionRequest.h>

using AlibabaCloud::ARMS::Model::OpenArmsServiceSecondVersionRequest;

OpenArmsServiceSecondVersionRequest::OpenArmsServiceSecondVersionRequest()
    : RpcServiceRequest("arms", "2019-08-08", "OpenArmsServiceSecondVersion") {
  setMethod(HttpRequest::Method::Post);
}

OpenArmsServiceSecondVersionRequest::~OpenArmsServiceSecondVersionRequest() {}

std::string OpenArmsServiceSecondVersionRequest::getRegionId() const {
  return regionId_;
}

void OpenArmsServiceSecondVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OpenArmsServiceSecondVersionRequest::getType() const {
  return type_;
}

void OpenArmsServiceSecondVersionRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

