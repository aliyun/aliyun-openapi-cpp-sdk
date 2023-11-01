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

#include <alibabacloud/cloud-siem/model/DescribeDisposeAndPlaybookRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeDisposeAndPlaybookRequest;

DescribeDisposeAndPlaybookRequest::DescribeDisposeAndPlaybookRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeDisposeAndPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDisposeAndPlaybookRequest::~DescribeDisposeAndPlaybookRequest() {}

std::string DescribeDisposeAndPlaybookRequest::getRegionId() const {
  return regionId_;
}

void DescribeDisposeAndPlaybookRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeDisposeAndPlaybookRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDisposeAndPlaybookRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeDisposeAndPlaybookRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDisposeAndPlaybookRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeDisposeAndPlaybookRequest::getEntityType() const {
  return entityType_;
}

void DescribeDisposeAndPlaybookRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setBodyParameter(std::string("EntityType"), entityType);
}

std::string DescribeDisposeAndPlaybookRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeDisposeAndPlaybookRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

