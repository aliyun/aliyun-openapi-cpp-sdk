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

#include <alibabacloud/alidns/model/ResumePdnsServiceRequest.h>

using AlibabaCloud::Alidns::Model::ResumePdnsServiceRequest;

ResumePdnsServiceRequest::ResumePdnsServiceRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "ResumePdnsService") {
  setMethod(HttpRequest::Method::Post);
}

ResumePdnsServiceRequest::~ResumePdnsServiceRequest() {}

std::string ResumePdnsServiceRequest::getServiceType() const {
  return serviceType_;
}

void ResumePdnsServiceRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string ResumePdnsServiceRequest::getLang() const {
  return lang_;
}

void ResumePdnsServiceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

