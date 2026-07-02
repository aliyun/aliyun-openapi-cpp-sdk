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

#include <alibabacloud/quickbi-public/model/IpWhiteListConfigRequest.h>

using AlibabaCloud::Quickbi_public::Model::IpWhiteListConfigRequest;

IpWhiteListConfigRequest::IpWhiteListConfigRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "IpWhiteListConfig") {
  setMethod(HttpRequest::Method::Post);
}

IpWhiteListConfigRequest::~IpWhiteListConfigRequest() {}

std::string IpWhiteListConfigRequest::getAccessPoint() const {
  return accessPoint_;
}

void IpWhiteListConfigRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string IpWhiteListConfigRequest::getIpWhiteList() const {
  return ipWhiteList_;
}

void IpWhiteListConfigRequest::setIpWhiteList(const std::string &ipWhiteList) {
  ipWhiteList_ = ipWhiteList;
  setParameter(std::string("IpWhiteList"), ipWhiteList);
}

std::string IpWhiteListConfigRequest::getSignType() const {
  return signType_;
}

void IpWhiteListConfigRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string IpWhiteListConfigRequest::getOperation() const {
  return operation_;
}

void IpWhiteListConfigRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

