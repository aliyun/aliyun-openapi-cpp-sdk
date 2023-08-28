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

#include <alibabacloud/eflo/model/DeleteErRouteMapRequest.h>

using AlibabaCloud::Eflo::Model::DeleteErRouteMapRequest;

DeleteErRouteMapRequest::DeleteErRouteMapRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "DeleteErRouteMap") {
  setMethod(HttpRequest::Method::Post);
}

DeleteErRouteMapRequest::~DeleteErRouteMapRequest() {}

std::string DeleteErRouteMapRequest::getErId() const {
  return erId_;
}

void DeleteErRouteMapRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::vector<std::string> DeleteErRouteMapRequest::getErRouteMapIds() const {
  return erRouteMapIds_;
}

void DeleteErRouteMapRequest::setErRouteMapIds(const std::vector<std::string> &erRouteMapIds) {
  erRouteMapIds_ = erRouteMapIds;
}

std::string DeleteErRouteMapRequest::getRegionId() const {
  return regionId_;
}

void DeleteErRouteMapRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

