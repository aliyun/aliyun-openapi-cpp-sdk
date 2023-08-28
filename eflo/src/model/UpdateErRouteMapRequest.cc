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

#include <alibabacloud/eflo/model/UpdateErRouteMapRequest.h>

using AlibabaCloud::Eflo::Model::UpdateErRouteMapRequest;

UpdateErRouteMapRequest::UpdateErRouteMapRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateErRouteMap") {
  setMethod(HttpRequest::Method::Post);
}

UpdateErRouteMapRequest::~UpdateErRouteMapRequest() {}

std::string UpdateErRouteMapRequest::getErId() const {
  return erId_;
}

void UpdateErRouteMapRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string UpdateErRouteMapRequest::getDescription() const {
  return description_;
}

void UpdateErRouteMapRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateErRouteMapRequest::getErRouteMapId() const {
  return erRouteMapId_;
}

void UpdateErRouteMapRequest::setErRouteMapId(const std::string &erRouteMapId) {
  erRouteMapId_ = erRouteMapId;
  setBodyParameter(std::string("ErRouteMapId"), erRouteMapId);
}

std::string UpdateErRouteMapRequest::getRegionId() const {
  return regionId_;
}

void UpdateErRouteMapRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

