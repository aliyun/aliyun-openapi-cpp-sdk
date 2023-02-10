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

#include <alibabacloud/sas/model/AddInstallCodeRequest.h>

using AlibabaCloud::Sas::Model::AddInstallCodeRequest;

AddInstallCodeRequest::AddInstallCodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddInstallCode") {
  setMethod(HttpRequest::Method::Post);
}

AddInstallCodeRequest::~AddInstallCodeRequest() {}

long AddInstallCodeRequest::getExpiredDate() const {
  return expiredDate_;
}

void AddInstallCodeRequest::setExpiredDate(long expiredDate) {
  expiredDate_ = expiredDate;
  setParameter(std::string("ExpiredDate"), std::to_string(expiredDate));
}

std::string AddInstallCodeRequest::getSourceIp() const {
  return sourceIp_;
}

void AddInstallCodeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AddInstallCodeRequest::getOs() const {
  return os_;
}

void AddInstallCodeRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

long AddInstallCodeRequest::getGroupId() const {
  return groupId_;
}

void AddInstallCodeRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string AddInstallCodeRequest::getProxyCluster() const {
  return proxyCluster_;
}

void AddInstallCodeRequest::setProxyCluster(const std::string &proxyCluster) {
  proxyCluster_ = proxyCluster;
  setParameter(std::string("ProxyCluster"), proxyCluster);
}

bool AddInstallCodeRequest::getOnlyImage() const {
  return onlyImage_;
}

void AddInstallCodeRequest::setOnlyImage(bool onlyImage) {
  onlyImage_ = onlyImage;
  setParameter(std::string("OnlyImage"), onlyImage ? "true" : "false");
}

std::string AddInstallCodeRequest::getVendorName() const {
  return vendorName_;
}

void AddInstallCodeRequest::setVendorName(const std::string &vendorName) {
  vendorName_ = vendorName;
  setParameter(std::string("VendorName"), vendorName);
}

