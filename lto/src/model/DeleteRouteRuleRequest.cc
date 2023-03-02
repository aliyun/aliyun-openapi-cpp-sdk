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

#include <alibabacloud/lto/model/DeleteRouteRuleRequest.h>

using AlibabaCloud::Lto::Model::DeleteRouteRuleRequest;

DeleteRouteRuleRequest::DeleteRouteRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "DeleteRouteRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteRuleRequest::~DeleteRouteRuleRequest() {}

std::string DeleteRouteRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteRouteRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRouteRuleRequest::getRouteRuleId() const {
  return routeRuleId_;
}

void DeleteRouteRuleRequest::setRouteRuleId(const std::string &routeRuleId) {
  routeRuleId_ = routeRuleId;
  setParameter(std::string("RouteRuleId"), routeRuleId);
}

