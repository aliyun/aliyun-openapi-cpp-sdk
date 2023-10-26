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

#include <alibabacloud/cloudapi/model/DescribeSummaryDataRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeSummaryDataRequest;

DescribeSummaryDataRequest::DescribeSummaryDataRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeSummaryData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSummaryDataRequest::~DescribeSummaryDataRequest() {}

std::string DescribeSummaryDataRequest::getLanguage() const {
  return language_;
}

void DescribeSummaryDataRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DescribeSummaryDataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSummaryDataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSummaryDataRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeSummaryDataRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

