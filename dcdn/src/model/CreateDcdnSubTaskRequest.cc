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

#include <alibabacloud/dcdn/model/CreateDcdnSubTaskRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnSubTaskRequest;

CreateDcdnSubTaskRequest::CreateDcdnSubTaskRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnSubTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateDcdnSubTaskRequest::~CreateDcdnSubTaskRequest() {}

std::string CreateDcdnSubTaskRequest::getReportIds() const {
  return reportIds_;
}

void CreateDcdnSubTaskRequest::setReportIds(const std::string &reportIds) {
  reportIds_ = reportIds;
  setBodyParameter(std::string("ReportIds"), reportIds);
}

std::string CreateDcdnSubTaskRequest::getDomainName() const {
  return domainName_;
}

void CreateDcdnSubTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

