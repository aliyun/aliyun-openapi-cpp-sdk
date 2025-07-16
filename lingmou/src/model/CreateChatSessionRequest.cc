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

#include <alibabacloud/lingmou/model/CreateChatSessionRequest.h>

using AlibabaCloud::LingMou::Model::CreateChatSessionRequest;

CreateChatSessionRequest::CreateChatSessionRequest()
    : RoaServiceRequest("lingmou", "2025-05-27") {
  setResourcePath("/openapi/chat/init/[id]"};
  setMethod(HttpRequest::Method::Post);
}

CreateChatSessionRequest::~CreateChatSessionRequest() {}

std::string CreateChatSessionRequest::getLicense() const {
  return license_;
}

void CreateChatSessionRequest::setLicense(const std::string &license) {
  license_ = license;
  setParameter(std::string("license"), license);
}

std::string CreateChatSessionRequest::getInstanceId() const {
  return instanceId_;
}

void CreateChatSessionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

std::string CreateChatSessionRequest::getId() const {
  return id_;
}

void CreateChatSessionRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("id"), id);
}

std::string CreateChatSessionRequest::getPlatform() const {
  return platform_;
}

void CreateChatSessionRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("platform"), platform);
}

