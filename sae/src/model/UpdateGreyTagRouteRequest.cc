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

#include <alibabacloud/sae/model/UpdateGreyTagRouteRequest.h>

using AlibabaCloud::Sae::Model::UpdateGreyTagRouteRequest;

UpdateGreyTagRouteRequest::UpdateGreyTagRouteRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/tagroute/greyTagRoute"};
  setMethod(HttpRequest::Method::Put);
}

UpdateGreyTagRouteRequest::~UpdateGreyTagRouteRequest() {}

long UpdateGreyTagRouteRequest::getGreyTagRouteId() const {
  return greyTagRouteId_;
}

void UpdateGreyTagRouteRequest::setGreyTagRouteId(long greyTagRouteId) {
  greyTagRouteId_ = greyTagRouteId;
  setParameter(std::string("GreyTagRouteId"), std::to_string(greyTagRouteId));
}

std::string UpdateGreyTagRouteRequest::getDescription() const {
  return description_;
}

void UpdateGreyTagRouteRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGreyTagRouteRequest::getDubboRules() const {
  return dubboRules_;
}

void UpdateGreyTagRouteRequest::setDubboRules(const std::string &dubboRules) {
  dubboRules_ = dubboRules;
  setParameter(std::string("DubboRules"), dubboRules);
}

std::string UpdateGreyTagRouteRequest::getAlbRules() const {
  return albRules_;
}

void UpdateGreyTagRouteRequest::setAlbRules(const std::string &albRules) {
  albRules_ = albRules;
  setParameter(std::string("AlbRules"), albRules);
}

std::string UpdateGreyTagRouteRequest::getScRules() const {
  return scRules_;
}

void UpdateGreyTagRouteRequest::setScRules(const std::string &scRules) {
  scRules_ = scRules;
  setParameter(std::string("ScRules"), scRules);
}

