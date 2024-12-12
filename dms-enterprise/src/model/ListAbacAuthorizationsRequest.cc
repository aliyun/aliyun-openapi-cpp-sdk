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

#include <alibabacloud/dms-enterprise/model/ListAbacAuthorizationsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAbacAuthorizationsRequest;

ListAbacAuthorizationsRequest::ListAbacAuthorizationsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAbacAuthorizations") {
  setMethod(HttpRequest::Method::Post);
}

ListAbacAuthorizationsRequest::~ListAbacAuthorizationsRequest() {}

long ListAbacAuthorizationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAbacAuthorizationsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAbacAuthorizationsRequest::getTid() const {
  return tid_;
}

void ListAbacAuthorizationsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListAbacAuthorizationsRequest::getPolicyId() const {
  return policyId_;
}

void ListAbacAuthorizationsRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

long ListAbacAuthorizationsRequest::getPageSize() const {
  return pageSize_;
}

void ListAbacAuthorizationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAbacAuthorizationsRequest::getPolicySource() const {
  return policySource_;
}

void ListAbacAuthorizationsRequest::setPolicySource(const std::string &policySource) {
  policySource_ = policySource;
  setParameter(std::string("PolicySource"), policySource);
}

