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

#include <alibabacloud/vod/model/MoveAppResourceRequest.h>

using AlibabaCloud::Vod::Model::MoveAppResourceRequest;

MoveAppResourceRequest::MoveAppResourceRequest()
    : RpcServiceRequest("vod", "2017-03-21", "MoveAppResource") {
  setMethod(HttpRequest::Method::Post);
}

MoveAppResourceRequest::~MoveAppResourceRequest() {}

long MoveAppResourceRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void MoveAppResourceRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string MoveAppResourceRequest::getResourceType() const {
  return resourceType_;
}

void MoveAppResourceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string MoveAppResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MoveAppResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MoveAppResourceRequest::getTargetAppId() const {
  return targetAppId_;
}

void MoveAppResourceRequest::setTargetAppId(const std::string &targetAppId) {
  targetAppId_ = targetAppId;
  setParameter(std::string("TargetAppId"), targetAppId);
}

std::string MoveAppResourceRequest::getResourceIds() const {
  return resourceIds_;
}

void MoveAppResourceRequest::setResourceIds(const std::string &resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), resourceIds);
}

