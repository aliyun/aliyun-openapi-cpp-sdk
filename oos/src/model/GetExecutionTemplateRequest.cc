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

#include <alibabacloud/oos/model/GetExecutionTemplateRequest.h>

using AlibabaCloud::Oos::Model::GetExecutionTemplateRequest;

GetExecutionTemplateRequest::GetExecutionTemplateRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetExecutionTemplate") {
  setMethod(HttpRequest::Method::Post);
}

GetExecutionTemplateRequest::~GetExecutionTemplateRequest() {}

std::string GetExecutionTemplateRequest::getExecutionId() const {
  return executionId_;
}

void GetExecutionTemplateRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string GetExecutionTemplateRequest::getRegionId() const {
  return regionId_;
}

void GetExecutionTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

