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

#include <alibabacloud/oos/model/GetOpsItemRequest.h>

using AlibabaCloud::Oos::Model::GetOpsItemRequest;

GetOpsItemRequest::GetOpsItemRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetOpsItem") {
  setMethod(HttpRequest::Method::Post);
}

GetOpsItemRequest::~GetOpsItemRequest() {}

std::string GetOpsItemRequest::getRegionId() const {
  return regionId_;
}

void GetOpsItemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetOpsItemRequest::getOpsItemId() const {
  return opsItemId_;
}

void GetOpsItemRequest::setOpsItemId(const std::string &opsItemId) {
  opsItemId_ = opsItemId;
  setParameter(std::string("OpsItemId"), opsItemId);
}

