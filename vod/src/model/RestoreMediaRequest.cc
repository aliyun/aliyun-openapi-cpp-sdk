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

#include <alibabacloud/vod/model/RestoreMediaRequest.h>

using AlibabaCloud::Vod::Model::RestoreMediaRequest;

RestoreMediaRequest::RestoreMediaRequest()
    : RpcServiceRequest("vod", "2017-03-21", "RestoreMedia") {
  setMethod(HttpRequest::Method::Post);
}

RestoreMediaRequest::~RestoreMediaRequest() {}

std::string RestoreMediaRequest::getRestoreTier() const {
  return restoreTier_;
}

void RestoreMediaRequest::setRestoreTier(const std::string &restoreTier) {
  restoreTier_ = restoreTier;
  setParameter(std::string("RestoreTier"), restoreTier);
}

std::string RestoreMediaRequest::getRestoreDays() const {
  return restoreDays_;
}

void RestoreMediaRequest::setRestoreDays(const std::string &restoreDays) {
  restoreDays_ = restoreDays;
  setParameter(std::string("RestoreDays"), restoreDays);
}

std::string RestoreMediaRequest::getScope() const {
  return scope_;
}

void RestoreMediaRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string RestoreMediaRequest::getMediaIds() const {
  return mediaIds_;
}

void RestoreMediaRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

