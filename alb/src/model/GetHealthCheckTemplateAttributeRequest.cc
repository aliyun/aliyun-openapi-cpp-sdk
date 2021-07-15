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

#include <alibabacloud/alb/model/GetHealthCheckTemplateAttributeRequest.h>

using AlibabaCloud::Alb::Model::GetHealthCheckTemplateAttributeRequest;

GetHealthCheckTemplateAttributeRequest::GetHealthCheckTemplateAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "GetHealthCheckTemplateAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetHealthCheckTemplateAttributeRequest::~GetHealthCheckTemplateAttributeRequest() {}

std::string GetHealthCheckTemplateAttributeRequest::getHealthCheckTemplateId() const {
  return healthCheckTemplateId_;
}

void GetHealthCheckTemplateAttributeRequest::setHealthCheckTemplateId(const std::string &healthCheckTemplateId) {
  healthCheckTemplateId_ = healthCheckTemplateId;
  setParameter(std::string("HealthCheckTemplateId"), healthCheckTemplateId);
}

