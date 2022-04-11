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

#include <alibabacloud/vod/model/UpdateAppInfoRequest.h>

using AlibabaCloud::Vod::Model::UpdateAppInfoRequest;

UpdateAppInfoRequest::UpdateAppInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateAppInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAppInfoRequest::~UpdateAppInfoRequest() {}

std::string UpdateAppInfoRequest::getDescription() const {
  return description_;
}

void UpdateAppInfoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateAppInfoRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void UpdateAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string UpdateAppInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateAppInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateAppInfoRequest::getAppName() const {
  return appName_;
}

void UpdateAppInfoRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateAppInfoRequest::getAppId() const {
  return appId_;
}

void UpdateAppInfoRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateAppInfoRequest::getStatus() const {
  return status_;
}

void UpdateAppInfoRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

