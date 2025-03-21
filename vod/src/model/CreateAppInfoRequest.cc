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

#include <alibabacloud/vod/model/CreateAppInfoRequest.h>

using AlibabaCloud::Vod::Model::CreateAppInfoRequest;

CreateAppInfoRequest::CreateAppInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "CreateAppInfo") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppInfoRequest::~CreateAppInfoRequest() {}

std::string CreateAppInfoRequest::getDescription() const {
  return description_;
}

void CreateAppInfoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateAppInfoRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void CreateAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string CreateAppInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAppInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAppInfoRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAppInfoRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAppInfoRequest::getAppName() const {
  return appName_;
}

void CreateAppInfoRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

CreateAppInfoRequest::Tag CreateAppInfoRequest::getTag() const {
  return tag_;
}

void CreateAppInfoRequest::setTag(const CreateAppInfoRequest::Tag &tag) {
  tag_ = tag;
  setParameter(std::string("Tag") + ".Value", tag.value);
  setParameter(std::string("Tag") + ".Key", tag.key);
}

