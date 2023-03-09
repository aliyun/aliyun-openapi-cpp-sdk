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

#include <alibabacloud/adb/model/EnableAdviceServiceRequest.h>

using AlibabaCloud::Adb::Model::EnableAdviceServiceRequest;

EnableAdviceServiceRequest::EnableAdviceServiceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "EnableAdviceService") {
  setMethod(HttpRequest::Method::Post);
}

EnableAdviceServiceRequest::~EnableAdviceServiceRequest() {}

std::string EnableAdviceServiceRequest::getRegionId() const {
  return regionId_;
}

void EnableAdviceServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableAdviceServiceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void EnableAdviceServiceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

