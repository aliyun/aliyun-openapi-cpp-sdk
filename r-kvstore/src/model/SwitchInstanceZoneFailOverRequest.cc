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

#include <alibabacloud/r-kvstore/model/SwitchInstanceZoneFailOverRequest.h>

using AlibabaCloud::R_kvstore::Model::SwitchInstanceZoneFailOverRequest;

SwitchInstanceZoneFailOverRequest::SwitchInstanceZoneFailOverRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "SwitchInstanceZoneFailOver") {
  setMethod(HttpRequest::Method::Post);
}

SwitchInstanceZoneFailOverRequest::~SwitchInstanceZoneFailOverRequest() {}

std::string SwitchInstanceZoneFailOverRequest::getSiteFaultTime() const {
  return siteFaultTime_;
}

void SwitchInstanceZoneFailOverRequest::setSiteFaultTime(const std::string &siteFaultTime) {
  siteFaultTime_ = siteFaultTime;
  setParameter(std::string("SiteFaultTime"), siteFaultTime);
}

std::string SwitchInstanceZoneFailOverRequest::getTargetZoneId() const {
  return targetZoneId_;
}

void SwitchInstanceZoneFailOverRequest::setTargetZoneId(const std::string &targetZoneId) {
  targetZoneId_ = targetZoneId;
  setParameter(std::string("TargetZoneId"), targetZoneId);
}

std::string SwitchInstanceZoneFailOverRequest::getInstanceId() const {
  return instanceId_;
}

void SwitchInstanceZoneFailOverRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

