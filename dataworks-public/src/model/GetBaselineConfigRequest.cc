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

#include <alibabacloud/dataworks-public/model/GetBaselineConfigRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetBaselineConfigRequest;

GetBaselineConfigRequest::GetBaselineConfigRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetBaselineConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetBaselineConfigRequest::~GetBaselineConfigRequest() {}

long GetBaselineConfigRequest::getBaselineId() const {
  return baselineId_;
}

void GetBaselineConfigRequest::setBaselineId(long baselineId) {
  baselineId_ = baselineId;
  setBodyParameter(std::string("BaselineId"), std::to_string(baselineId));
}

