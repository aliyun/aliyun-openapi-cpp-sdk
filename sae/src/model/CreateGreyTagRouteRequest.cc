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

#include <alibabacloud/sae/model/CreateGreyTagRouteRequest.h>

using AlibabaCloud::Sae::Model::CreateGreyTagRouteRequest;

CreateGreyTagRouteRequest::CreateGreyTagRouteRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/tagroute/greyTagRoute"};
  setMethod(HttpRequest::Method::Post);
}

CreateGreyTagRouteRequest::~CreateGreyTagRouteRequest() {}

std::string CreateGreyTagRouteRequest::getAppId() const {
  return appId_;
}

void CreateGreyTagRouteRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateGreyTagRouteRequest::getName() const {
  return name_;
}

void CreateGreyTagRouteRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateGreyTagRouteRequest::getDescription() const {
  return description_;
}

void CreateGreyTagRouteRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGreyTagRouteRequest::getDubboRules() const {
  return dubboRules_;
}

void CreateGreyTagRouteRequest::setDubboRules(const std::string &dubboRules) {
  dubboRules_ = dubboRules;
  setParameter(std::string("DubboRules"), dubboRules);
}

std::string CreateGreyTagRouteRequest::getAlbRules() const {
  return albRules_;
}

void CreateGreyTagRouteRequest::setAlbRules(const std::string &albRules) {
  albRules_ = albRules;
  setParameter(std::string("AlbRules"), albRules);
}

std::string CreateGreyTagRouteRequest::getScRules() const {
  return scRules_;
}

void CreateGreyTagRouteRequest::setScRules(const std::string &scRules) {
  scRules_ = scRules;
  setParameter(std::string("ScRules"), scRules);
}

