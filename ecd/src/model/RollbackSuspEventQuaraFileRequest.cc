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

#include <alibabacloud/ecd/model/RollbackSuspEventQuaraFileRequest.h>

using AlibabaCloud::Ecd::Model::RollbackSuspEventQuaraFileRequest;

RollbackSuspEventQuaraFileRequest::RollbackSuspEventQuaraFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RollbackSuspEventQuaraFile") {
  setMethod(HttpRequest::Method::Post);
}

RollbackSuspEventQuaraFileRequest::~RollbackSuspEventQuaraFileRequest() {}

int RollbackSuspEventQuaraFileRequest::getQuaraFieldId() const {
  return quaraFieldId_;
}

void RollbackSuspEventQuaraFileRequest::setQuaraFieldId(int quaraFieldId) {
  quaraFieldId_ = quaraFieldId;
  setParameter(std::string("QuaraFieldId"), std::to_string(quaraFieldId));
}

std::string RollbackSuspEventQuaraFileRequest::getRegionId() const {
  return regionId_;
}

void RollbackSuspEventQuaraFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RollbackSuspEventQuaraFileRequest::getDesktopId() const {
  return desktopId_;
}

void RollbackSuspEventQuaraFileRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

