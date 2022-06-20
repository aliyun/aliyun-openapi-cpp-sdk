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

#include <alibabacloud/sas/model/ListVulAutoRepairConfigRequest.h>

using AlibabaCloud::Sas::Model::ListVulAutoRepairConfigRequest;

ListVulAutoRepairConfigRequest::ListVulAutoRepairConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListVulAutoRepairConfig") {
  setMethod(HttpRequest::Method::Post);
}

ListVulAutoRepairConfigRequest::~ListVulAutoRepairConfigRequest() {}

std::string ListVulAutoRepairConfigRequest::getType() const {
  return type_;
}

void ListVulAutoRepairConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListVulAutoRepairConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ListVulAutoRepairConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListVulAutoRepairConfigRequest::getPageSize() const {
  return pageSize_;
}

void ListVulAutoRepairConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListVulAutoRepairConfigRequest::getCurrentPage() const {
  return currentPage_;
}

void ListVulAutoRepairConfigRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListVulAutoRepairConfigRequest::getAliasName() const {
  return aliasName_;
}

void ListVulAutoRepairConfigRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

