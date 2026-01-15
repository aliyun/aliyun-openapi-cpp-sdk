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

#include <alibabacloud/websitebuild/model/DispatchConsoleAPIForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::DispatchConsoleAPIForPartnerRequest;

DispatchConsoleAPIForPartnerRequest::DispatchConsoleAPIForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "DispatchConsoleAPIForPartner") {
  setMethod(HttpRequest::Method::Post);
}

DispatchConsoleAPIForPartnerRequest::~DispatchConsoleAPIForPartnerRequest() {}

std::string DispatchConsoleAPIForPartnerRequest::getProduct() const {
  return product_;
}

void DispatchConsoleAPIForPartnerRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DispatchConsoleAPIForPartnerRequest::getLiveToken() const {
  return liveToken_;
}

void DispatchConsoleAPIForPartnerRequest::setLiveToken(const std::string &liveToken) {
  liveToken_ = liveToken;
  setParameter(std::string("LiveToken"), liveToken);
}

std::string DispatchConsoleAPIForPartnerRequest::getSiteHost() const {
  return siteHost_;
}

void DispatchConsoleAPIForPartnerRequest::setSiteHost(const std::string &siteHost) {
  siteHost_ = siteHost;
  setParameter(std::string("SiteHost"), siteHost);
}

std::string DispatchConsoleAPIForPartnerRequest::getParams() const {
  return params_;
}

void DispatchConsoleAPIForPartnerRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string DispatchConsoleAPIForPartnerRequest::getOperation() const {
  return operation_;
}

void DispatchConsoleAPIForPartnerRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

