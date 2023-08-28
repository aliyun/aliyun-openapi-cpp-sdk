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

#include <alibabacloud/eflo/model/GetVccRouteEntryRequest.h>

using AlibabaCloud::Eflo::Model::GetVccRouteEntryRequest;

GetVccRouteEntryRequest::GetVccRouteEntryRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetVccRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

GetVccRouteEntryRequest::~GetVccRouteEntryRequest() {}

std::string GetVccRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void GetVccRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetVccRouteEntryRequest::getVccId() const {
  return vccId_;
}

void GetVccRouteEntryRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

std::string GetVccRouteEntryRequest::getVccRouteEntryId() const {
  return vccRouteEntryId_;
}

void GetVccRouteEntryRequest::setVccRouteEntryId(const std::string &vccRouteEntryId) {
  vccRouteEntryId_ = vccRouteEntryId;
  setBodyParameter(std::string("VccRouteEntryId"), vccRouteEntryId);
}

