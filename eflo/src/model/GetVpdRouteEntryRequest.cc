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

#include <alibabacloud/eflo/model/GetVpdRouteEntryRequest.h>

using AlibabaCloud::Eflo::Model::GetVpdRouteEntryRequest;

GetVpdRouteEntryRequest::GetVpdRouteEntryRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetVpdRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

GetVpdRouteEntryRequest::~GetVpdRouteEntryRequest() {}

std::string GetVpdRouteEntryRequest::getVpdRouteEntryId() const {
  return vpdRouteEntryId_;
}

void GetVpdRouteEntryRequest::setVpdRouteEntryId(const std::string &vpdRouteEntryId) {
  vpdRouteEntryId_ = vpdRouteEntryId;
  setBodyParameter(std::string("VpdRouteEntryId"), vpdRouteEntryId);
}

std::string GetVpdRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void GetVpdRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetVpdRouteEntryRequest::getVpdId() const {
  return vpdId_;
}

void GetVpdRouteEntryRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

