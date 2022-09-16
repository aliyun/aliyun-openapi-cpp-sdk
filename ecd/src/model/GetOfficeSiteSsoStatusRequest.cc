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

#include <alibabacloud/ecd/model/GetOfficeSiteSsoStatusRequest.h>

using AlibabaCloud::Ecd::Model::GetOfficeSiteSsoStatusRequest;

GetOfficeSiteSsoStatusRequest::GetOfficeSiteSsoStatusRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "GetOfficeSiteSsoStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetOfficeSiteSsoStatusRequest::~GetOfficeSiteSsoStatusRequest() {}

std::string GetOfficeSiteSsoStatusRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void GetOfficeSiteSsoStatusRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string GetOfficeSiteSsoStatusRequest::getRegionId() const {
  return regionId_;
}

void GetOfficeSiteSsoStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

