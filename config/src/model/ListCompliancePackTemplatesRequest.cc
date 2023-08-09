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

#include <alibabacloud/config/model/ListCompliancePackTemplatesRequest.h>

using AlibabaCloud::Config::Model::ListCompliancePackTemplatesRequest;

ListCompliancePackTemplatesRequest::ListCompliancePackTemplatesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListCompliancePackTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListCompliancePackTemplatesRequest::~ListCompliancePackTemplatesRequest() {}

std::string ListCompliancePackTemplatesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListCompliancePackTemplatesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

std::string ListCompliancePackTemplatesRequest::getCompliancePackTemplateId() const {
  return compliancePackTemplateId_;
}

void ListCompliancePackTemplatesRequest::setCompliancePackTemplateId(const std::string &compliancePackTemplateId) {
  compliancePackTemplateId_ = compliancePackTemplateId;
  setParameter(std::string("CompliancePackTemplateId"), compliancePackTemplateId);
}

int ListCompliancePackTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCompliancePackTemplatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListCompliancePackTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListCompliancePackTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

