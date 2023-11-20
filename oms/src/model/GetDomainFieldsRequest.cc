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

#include <alibabacloud/oms/model/GetDomainFieldsRequest.h>

using AlibabaCloud::Oms::Model::GetDomainFieldsRequest;

GetDomainFieldsRequest::GetDomainFieldsRequest()
    : RpcServiceRequest("oms", "2019-05-27", "GetDomainFields") {
  setMethod(HttpRequest::Method::Get);
}

GetDomainFieldsRequest::~GetDomainFieldsRequest() {}

std::string GetDomainFieldsRequest::getDomainCode() const {
  return domainCode_;
}

void GetDomainFieldsRequest::setDomainCode(const std::string &domainCode) {
  domainCode_ = domainCode;
  setParameter(std::string("DomainCode"), domainCode);
}

bool GetDomainFieldsRequest::getUseCache() const {
  return useCache_;
}

void GetDomainFieldsRequest::setUseCache(bool useCache) {
  useCache_ = useCache;
  setParameter(std::string("UseCache"), useCache ? "true" : "false");
}

