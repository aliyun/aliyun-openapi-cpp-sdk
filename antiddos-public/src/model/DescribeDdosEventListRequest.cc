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

#include <alibabacloud/antiddos-public/model/DescribeDdosEventListRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeDdosEventListRequest;

DescribeDdosEventListRequest::DescribeDdosEventListRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeDdosEventList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDdosEventListRequest::~DescribeDdosEventListRequest() {}

std::string DescribeDdosEventListRequest::getInternetIp() const {
  return internetIp_;
}

void DescribeDdosEventListRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string DescribeDdosEventListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDdosEventListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDdosEventListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDdosEventListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDdosEventListRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeDdosEventListRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeDdosEventListRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeDdosEventListRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeDdosEventListRequest::getLang() const {
  return lang_;
}

void DescribeDdosEventListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeDdosEventListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDdosEventListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeDdosEventListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDdosEventListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

