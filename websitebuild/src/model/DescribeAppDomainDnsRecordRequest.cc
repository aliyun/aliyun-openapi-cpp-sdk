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

#include <alibabacloud/websitebuild/model/DescribeAppDomainDnsRecordRequest.h>

using AlibabaCloud::WebsiteBuild::Model::DescribeAppDomainDnsRecordRequest;

DescribeAppDomainDnsRecordRequest::DescribeAppDomainDnsRecordRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "DescribeAppDomainDnsRecord") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAppDomainDnsRecordRequest::~DescribeAppDomainDnsRecordRequest() {}

std::string DescribeAppDomainDnsRecordRequest::getPurpose() const {
  return purpose_;
}

void DescribeAppDomainDnsRecordRequest::setPurpose(const std::string &purpose) {
  purpose_ = purpose;
  setParameter(std::string("Purpose"), purpose);
}

std::string DescribeAppDomainDnsRecordRequest::getDomainName() const {
  return domainName_;
}

void DescribeAppDomainDnsRecordRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeAppDomainDnsRecordRequest::getBizId() const {
  return bizId_;
}

void DescribeAppDomainDnsRecordRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

