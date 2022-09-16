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

#include <alibabacloud/ecd/model/CancelCoordinationForMonitoringRequest.h>

using AlibabaCloud::Ecd::Model::CancelCoordinationForMonitoringRequest;

CancelCoordinationForMonitoringRequest::CancelCoordinationForMonitoringRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CancelCoordinationForMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

CancelCoordinationForMonitoringRequest::~CancelCoordinationForMonitoringRequest() {}

std::string CancelCoordinationForMonitoringRequest::getUserType() const {
  return userType_;
}

void CancelCoordinationForMonitoringRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

std::vector<std::string> CancelCoordinationForMonitoringRequest::getCoIds() const {
  return coIds_;
}

void CancelCoordinationForMonitoringRequest::setCoIds(const std::vector<std::string> &coIds) {
  coIds_ = coIds;
}

std::string CancelCoordinationForMonitoringRequest::getRegionId() const {
  return regionId_;
}

void CancelCoordinationForMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CancelCoordinationForMonitoringRequest::getEndUserId() const {
  return endUserId_;
}

void CancelCoordinationForMonitoringRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

