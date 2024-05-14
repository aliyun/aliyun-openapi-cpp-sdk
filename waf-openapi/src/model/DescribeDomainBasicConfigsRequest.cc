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

#include <alibabacloud/waf-openapi/model/DescribeDomainBasicConfigsRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeDomainBasicConfigsRequest;

DescribeDomainBasicConfigsRequest::DescribeDomainBasicConfigsRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeDomainBasicConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainBasicConfigsRequest::~DescribeDomainBasicConfigsRequest() {}

int DescribeDomainBasicConfigsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainBasicConfigsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainBasicConfigsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainBasicConfigsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainBasicConfigsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainBasicConfigsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainBasicConfigsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDomainBasicConfigsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDomainBasicConfigsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainBasicConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainBasicConfigsRequest::getLang() const {
  return lang_;
}

void DescribeDomainBasicConfigsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainBasicConfigsRequest::getAccessType() const {
  return accessType_;
}

void DescribeDomainBasicConfigsRequest::setAccessType(const std::string &accessType) {
  accessType_ = accessType;
  setParameter(std::string("AccessType"), accessType);
}

int DescribeDomainBasicConfigsRequest::getCloudNativeProductId() const {
  return cloudNativeProductId_;
}

void DescribeDomainBasicConfigsRequest::setCloudNativeProductId(int cloudNativeProductId) {
  cloudNativeProductId_ = cloudNativeProductId;
  setParameter(std::string("CloudNativeProductId"), std::to_string(cloudNativeProductId));
}

std::string DescribeDomainBasicConfigsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDomainBasicConfigsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDomainBasicConfigsRequest::getDomainKey() const {
  return domainKey_;
}

void DescribeDomainBasicConfigsRequest::setDomainKey(const std::string &domainKey) {
  domainKey_ = domainKey;
  setParameter(std::string("DomainKey"), domainKey);
}

