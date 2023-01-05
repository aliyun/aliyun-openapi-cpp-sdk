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

#include <alibabacloud/dataworks-public/model/MountDirectoryRequest.h>

using AlibabaCloud::Dataworks_public::Model::MountDirectoryRequest;

MountDirectoryRequest::MountDirectoryRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "MountDirectory") {
  setMethod(HttpRequest::Method::Post);
}

MountDirectoryRequest::~MountDirectoryRequest() {}

std::string MountDirectoryRequest::getTargetType() const {
  return targetType_;
}

void MountDirectoryRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setBodyParameter(std::string("TargetType"), targetType);
}

std::string MountDirectoryRequest::getTargetId() const {
  return targetId_;
}

void MountDirectoryRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setBodyParameter(std::string("TargetId"), targetId);
}

