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

#include <alibabacloud/ims/model/GetCredentialReportRequest.h>

using AlibabaCloud::Ims::Model::GetCredentialReportRequest;

GetCredentialReportRequest::GetCredentialReportRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetCredentialReport") {
  setMethod(HttpRequest::Method::Post);
}

GetCredentialReportRequest::~GetCredentialReportRequest() {}

std::string GetCredentialReportRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetCredentialReportRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetCredentialReportRequest::getNextToken() const {
  return nextToken_;
}

void GetCredentialReportRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetCredentialReportRequest::getMaxItems() const {
  return maxItems_;
}

void GetCredentialReportRequest::setMaxItems(const std::string &maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), maxItems);
}

