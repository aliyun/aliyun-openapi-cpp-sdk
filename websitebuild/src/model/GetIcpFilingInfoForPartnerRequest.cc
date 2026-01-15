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

#include <alibabacloud/websitebuild/model/GetIcpFilingInfoForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::GetIcpFilingInfoForPartnerRequest;

GetIcpFilingInfoForPartnerRequest::GetIcpFilingInfoForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "GetIcpFilingInfoForPartner") {
  setMethod(HttpRequest::Method::Post);
}

GetIcpFilingInfoForPartnerRequest::~GetIcpFilingInfoForPartnerRequest() {}

std::string GetIcpFilingInfoForPartnerRequest::getDomain() const {
  return domain_;
}

void GetIcpFilingInfoForPartnerRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string GetIcpFilingInfoForPartnerRequest::getBizId() const {
  return bizId_;
}

void GetIcpFilingInfoForPartnerRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

