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

#include <alibabacloud/alidns/model/DescribeDnsGtmInstanceAddressPoolsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsGtmInstanceAddressPoolsRequest;

DescribeDnsGtmInstanceAddressPoolsRequest::DescribeDnsGtmInstanceAddressPoolsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsGtmInstanceAddressPools") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnsGtmInstanceAddressPoolsRequest::~DescribeDnsGtmInstanceAddressPoolsRequest() {}

int DescribeDnsGtmInstanceAddressPoolsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnsGtmInstanceAddressPoolsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDnsGtmInstanceAddressPoolsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDnsGtmInstanceAddressPoolsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDnsGtmInstanceAddressPoolsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDnsGtmInstanceAddressPoolsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeDnsGtmInstanceAddressPoolsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnsGtmInstanceAddressPoolsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnsGtmInstanceAddressPoolsRequest::getLang() const {
  return lang_;
}

void DescribeDnsGtmInstanceAddressPoolsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

