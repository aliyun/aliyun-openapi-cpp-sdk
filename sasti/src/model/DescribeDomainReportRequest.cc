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

#include <alibabacloud/sasti/model/DescribeDomainReportRequest.h>

using AlibabaCloud::Sasti::Model::DescribeDomainReportRequest;

DescribeDomainReportRequest::DescribeDomainReportRequest()
    : RpcServiceRequest("sasti", "2020-05-12", "DescribeDomainReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainReportRequest::~DescribeDomainReportRequest() {}

std::string DescribeDomainReportRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainReportRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainReportRequest::getField() const {
  return field_;
}

void DescribeDomainReportRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeDomainReportRequest::getDomain() const {
  return domain_;
}

void DescribeDomainReportRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string DescribeDomainReportRequest::getServiceLang() const {
  return serviceLang_;
}

void DescribeDomainReportRequest::setServiceLang(const std::string &serviceLang) {
  serviceLang_ = serviceLang;
  setParameter(std::string("ServiceLang"), serviceLang);
}

