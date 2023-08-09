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

#include <alibabacloud/config/model/ListRemediationTemplatesRequest.h>

using AlibabaCloud::Config::Model::ListRemediationTemplatesRequest;

ListRemediationTemplatesRequest::ListRemediationTemplatesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListRemediationTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListRemediationTemplatesRequest::~ListRemediationTemplatesRequest() {}

std::string ListRemediationTemplatesRequest::getManagedRuleIdentifier() const {
  return managedRuleIdentifier_;
}

void ListRemediationTemplatesRequest::setManagedRuleIdentifier(const std::string &managedRuleIdentifier) {
  managedRuleIdentifier_ = managedRuleIdentifier;
  setParameter(std::string("ManagedRuleIdentifier"), managedRuleIdentifier);
}

std::string ListRemediationTemplatesRequest::getRemediationType() const {
  return remediationType_;
}

void ListRemediationTemplatesRequest::setRemediationType(const std::string &remediationType) {
  remediationType_ = remediationType;
  setParameter(std::string("RemediationType"), remediationType);
}

long ListRemediationTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRemediationTemplatesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListRemediationTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListRemediationTemplatesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

