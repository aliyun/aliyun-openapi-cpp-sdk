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

#include <alibabacloud/push/model/UnbindTagRequest.h>

using AlibabaCloud::Push::Model::UnbindTagRequest;

UnbindTagRequest::UnbindTagRequest()
    : RpcServiceRequest("push", "2016-08-01", "UnbindTag") {
  setMethod(HttpRequest::Method::Post);
}

UnbindTagRequest::~UnbindTagRequest() {}

std::string UnbindTagRequest::getKeyType() const {
  return keyType_;
}

void UnbindTagRequest::setKeyType(const std::string &keyType) {
  keyType_ = keyType;
  setParameter(std::string("KeyType"), keyType);
}

std::string UnbindTagRequest::getTagName() const {
  return tagName_;
}

void UnbindTagRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string UnbindTagRequest::getClientKey() const {
  return clientKey_;
}

void UnbindTagRequest::setClientKey(const std::string &clientKey) {
  clientKey_ = clientKey;
  setParameter(std::string("ClientKey"), clientKey);
}

long UnbindTagRequest::getAppKey() const {
  return appKey_;
}

void UnbindTagRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

