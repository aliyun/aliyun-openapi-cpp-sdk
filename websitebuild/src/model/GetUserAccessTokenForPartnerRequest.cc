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

#include <alibabacloud/websitebuild/model/GetUserAccessTokenForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::GetUserAccessTokenForPartnerRequest;

GetUserAccessTokenForPartnerRequest::GetUserAccessTokenForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "GetUserAccessTokenForPartner") {
  setMethod(HttpRequest::Method::Post);
}

GetUserAccessTokenForPartnerRequest::~GetUserAccessTokenForPartnerRequest() {}

std::string GetUserAccessTokenForPartnerRequest::getTicket() const {
  return ticket_;
}

void GetUserAccessTokenForPartnerRequest::setTicket(const std::string &ticket) {
  ticket_ = ticket;
  setParameter(std::string("Ticket"), ticket);
}

std::string GetUserAccessTokenForPartnerRequest::getSiteHost() const {
  return siteHost_;
}

void GetUserAccessTokenForPartnerRequest::setSiteHost(const std::string &siteHost) {
  siteHost_ = siteHost;
  setParameter(std::string("SiteHost"), siteHost);
}

