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

#include <alibabacloud/dts/model/ModifyDtsJobDuLimitRequest.h>

using AlibabaCloud::Dts::Model::ModifyDtsJobDuLimitRequest;

ModifyDtsJobDuLimitRequest::ModifyDtsJobDuLimitRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifyDtsJobDuLimit") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDtsJobDuLimitRequest::~ModifyDtsJobDuLimitRequest() {}

std::string ModifyDtsJobDuLimitRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDtsJobDuLimitRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

long ModifyDtsJobDuLimitRequest::getDuLimit() const {
  return duLimit_;
}

void ModifyDtsJobDuLimitRequest::setDuLimit(long duLimit) {
  duLimit_ = duLimit;
  setParameter(std::string("DuLimit"), std::to_string(duLimit));
}

std::string ModifyDtsJobDuLimitRequest::getRegionId() const {
  return regionId_;
}

void ModifyDtsJobDuLimitRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDtsJobDuLimitRequest::getDtsJobId() const {
  return dtsJobId_;
}

void ModifyDtsJobDuLimitRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

