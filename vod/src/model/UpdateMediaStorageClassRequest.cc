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

#include <alibabacloud/vod/model/UpdateMediaStorageClassRequest.h>

using AlibabaCloud::Vod::Model::UpdateMediaStorageClassRequest;

UpdateMediaStorageClassRequest::UpdateMediaStorageClassRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateMediaStorageClass") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaStorageClassRequest::~UpdateMediaStorageClassRequest() {}

std::string UpdateMediaStorageClassRequest::getRestoreTier() const {
  return restoreTier_;
}

void UpdateMediaStorageClassRequest::setRestoreTier(const std::string &restoreTier) {
  restoreTier_ = restoreTier;
  setParameter(std::string("RestoreTier"), restoreTier);
}

std::string UpdateMediaStorageClassRequest::getScope() const {
  return scope_;
}

void UpdateMediaStorageClassRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string UpdateMediaStorageClassRequest::getMediaIds() const {
  return mediaIds_;
}

void UpdateMediaStorageClassRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

std::string UpdateMediaStorageClassRequest::getStorageClass() const {
  return storageClass_;
}

void UpdateMediaStorageClassRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setParameter(std::string("StorageClass"), storageClass);
}

bool UpdateMediaStorageClassRequest::getAllowUpdateWithoutTimeLimit() const {
  return allowUpdateWithoutTimeLimit_;
}

void UpdateMediaStorageClassRequest::setAllowUpdateWithoutTimeLimit(bool allowUpdateWithoutTimeLimit) {
  allowUpdateWithoutTimeLimit_ = allowUpdateWithoutTimeLimit;
  setParameter(std::string("AllowUpdateWithoutTimeLimit"), allowUpdateWithoutTimeLimit ? "true" : "false");
}

