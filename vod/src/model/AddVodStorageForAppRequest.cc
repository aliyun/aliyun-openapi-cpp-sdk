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

#include <alibabacloud/vod/model/AddVodStorageForAppRequest.h>

using AlibabaCloud::Vod::Model::AddVodStorageForAppRequest;

AddVodStorageForAppRequest::AddVodStorageForAppRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddVodStorageForApp") {
  setMethod(HttpRequest::Method::Post);
}

AddVodStorageForAppRequest::~AddVodStorageForAppRequest() {}

long AddVodStorageForAppRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void AddVodStorageForAppRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string AddVodStorageForAppRequest::getStorageType() const {
  return storageType_;
}

void AddVodStorageForAppRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string AddVodStorageForAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddVodStorageForAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddVodStorageForAppRequest::getStorageLocation() const {
  return storageLocation_;
}

void AddVodStorageForAppRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string AddVodStorageForAppRequest::getAppId() const {
  return appId_;
}

void AddVodStorageForAppRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

