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

#include <alibabacloud/beian/model/QueryAccessorDomainsStatusRequest.h>

using AlibabaCloud::Beian::Model::QueryAccessorDomainsStatusRequest;

QueryAccessorDomainsStatusRequest::QueryAccessorDomainsStatusRequest()
    : RpcServiceRequest("beian", "2016-08-10", "QueryAccessorDomainsStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryAccessorDomainsStatusRequest::~QueryAccessorDomainsStatusRequest() {}

std::vector<std::string> QueryAccessorDomainsStatusRequest::getDomains() const {
  return domains_;
}

void QueryAccessorDomainsStatusRequest::setDomains(const std::vector<std::string> &domains) {
  domains_ = domains;
}

std::string QueryAccessorDomainsStatusRequest::getCaller() const {
  return caller_;
}

void QueryAccessorDomainsStatusRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

