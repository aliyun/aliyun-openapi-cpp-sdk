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

#include <alibabacloud/cms/model/DescribeSiteMonitorAttributeRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorAttributeRequest;

DescribeSiteMonitorAttributeRequest::DescribeSiteMonitorAttributeRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorAttributeRequest::~DescribeSiteMonitorAttributeRequest() {}

bool DescribeSiteMonitorAttributeRequest::getIncludeAlert() const {
  return includeAlert_;
}

void DescribeSiteMonitorAttributeRequest::setIncludeAlert(bool includeAlert) {
  includeAlert_ = includeAlert;
  setParameter(std::string("IncludeAlert"), includeAlert ? "true" : "false");
}

std::string DescribeSiteMonitorAttributeRequest::getTaskId() const {
  return taskId_;
}

void DescribeSiteMonitorAttributeRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

