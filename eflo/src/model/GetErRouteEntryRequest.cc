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

#include <alibabacloud/eflo/model/GetErRouteEntryRequest.h>

using AlibabaCloud::Eflo::Model::GetErRouteEntryRequest;

GetErRouteEntryRequest::GetErRouteEntryRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetErRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

GetErRouteEntryRequest::~GetErRouteEntryRequest() {}

std::string GetErRouteEntryRequest::getErId() const {
  return erId_;
}

void GetErRouteEntryRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string GetErRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void GetErRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetErRouteEntryRequest::getErRouteEntryId() const {
  return erRouteEntryId_;
}

void GetErRouteEntryRequest::setErRouteEntryId(const std::string &erRouteEntryId) {
  erRouteEntryId_ = erRouteEntryId;
  setBodyParameter(std::string("ErRouteEntryId"), erRouteEntryId);
}

