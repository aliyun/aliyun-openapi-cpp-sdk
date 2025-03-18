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

#include <alibabacloud/ens/model/ModifyEnsRouteEntryRequest.h>

using AlibabaCloud::Ens::Model::ModifyEnsRouteEntryRequest;

ModifyEnsRouteEntryRequest::ModifyEnsRouteEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyEnsRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEnsRouteEntryRequest::~ModifyEnsRouteEntryRequest() {}

std::string ModifyEnsRouteEntryRequest::getRouteEntryName() const {
  return routeEntryName_;
}

void ModifyEnsRouteEntryRequest::setRouteEntryName(const std::string &routeEntryName) {
  routeEntryName_ = routeEntryName;
  setParameter(std::string("RouteEntryName"), routeEntryName);
}

std::string ModifyEnsRouteEntryRequest::getDescription() const {
  return description_;
}

void ModifyEnsRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyEnsRouteEntryRequest::getRouteEntryId() const {
  return routeEntryId_;
}

void ModifyEnsRouteEntryRequest::setRouteEntryId(const std::string &routeEntryId) {
  routeEntryId_ = routeEntryId;
  setParameter(std::string("RouteEntryId"), routeEntryId);
}

