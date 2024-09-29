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

#include <alibabacloud/dataworks-public/model/DsgStopSensIdentifyRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgStopSensIdentifyRequest;

DsgStopSensIdentifyRequest::DsgStopSensIdentifyRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgStopSensIdentify") {
  setMethod(HttpRequest::Method::Post);
}

DsgStopSensIdentifyRequest::~DsgStopSensIdentifyRequest() {}

long DsgStopSensIdentifyRequest::getJobId() const {
  return jobId_;
}

void DsgStopSensIdentifyRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string DsgStopSensIdentifyRequest::getTenantId() const {
  return tenantId_;
}

void DsgStopSensIdentifyRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

