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

#include <alibabacloud/ims/model/GetOIDCProviderRequest.h>

using AlibabaCloud::Ims::Model::GetOIDCProviderRequest;

GetOIDCProviderRequest::GetOIDCProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetOIDCProvider") {
  setMethod(HttpRequest::Method::Post);
}

GetOIDCProviderRequest::~GetOIDCProviderRequest() {}

std::string GetOIDCProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetOIDCProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetOIDCProviderRequest::getOIDCProviderName() const {
  return oIDCProviderName_;
}

void GetOIDCProviderRequest::setOIDCProviderName(const std::string &oIDCProviderName) {
  oIDCProviderName_ = oIDCProviderName;
  setParameter(std::string("OIDCProviderName"), oIDCProviderName);
}

