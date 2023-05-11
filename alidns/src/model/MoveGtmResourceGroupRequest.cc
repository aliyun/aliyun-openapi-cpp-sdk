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

#include <alibabacloud/alidns/model/MoveGtmResourceGroupRequest.h>

using AlibabaCloud::Alidns::Model::MoveGtmResourceGroupRequest;

MoveGtmResourceGroupRequest::MoveGtmResourceGroupRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "MoveGtmResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

MoveGtmResourceGroupRequest::~MoveGtmResourceGroupRequest() {}

std::string MoveGtmResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void MoveGtmResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string MoveGtmResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void MoveGtmResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

std::string MoveGtmResourceGroupRequest::getUserClientIp() const {
  return userClientIp_;
}

void MoveGtmResourceGroupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string MoveGtmResourceGroupRequest::getLang() const {
  return lang_;
}

void MoveGtmResourceGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

