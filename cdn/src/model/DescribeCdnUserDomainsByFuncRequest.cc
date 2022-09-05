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

#include <alibabacloud/cdn/model/DescribeCdnUserDomainsByFuncRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnUserDomainsByFuncRequest;

DescribeCdnUserDomainsByFuncRequest::DescribeCdnUserDomainsByFuncRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnUserDomainsByFunc") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnUserDomainsByFuncRequest::~DescribeCdnUserDomainsByFuncRequest() {}

int DescribeCdnUserDomainsByFuncRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCdnUserDomainsByFuncRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCdnUserDomainsByFuncRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCdnUserDomainsByFuncRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeCdnUserDomainsByFuncRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCdnUserDomainsByFuncRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeCdnUserDomainsByFuncRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnUserDomainsByFuncRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeCdnUserDomainsByFuncRequest::getFuncId() const {
  return funcId_;
}

void DescribeCdnUserDomainsByFuncRequest::setFuncId(int funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), std::to_string(funcId));
}

