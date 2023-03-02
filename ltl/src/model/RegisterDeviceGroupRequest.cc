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

#include <alibabacloud/ltl/model/RegisterDeviceGroupRequest.h>

using AlibabaCloud::Ltl::Model::RegisterDeviceGroupRequest;

RegisterDeviceGroupRequest::RegisterDeviceGroupRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "RegisterDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

RegisterDeviceGroupRequest::~RegisterDeviceGroupRequest() {}

std::string RegisterDeviceGroupRequest::getAuthorizeType() const {
  return authorizeType_;
}

void RegisterDeviceGroupRequest::setAuthorizeType(const std::string &authorizeType) {
  authorizeType_ = authorizeType;
  setParameter(std::string("AuthorizeType"), authorizeType);
}

std::string RegisterDeviceGroupRequest::getApiVersion() const {
  return apiVersion_;
}

void RegisterDeviceGroupRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string RegisterDeviceGroupRequest::getRemark() const {
  return remark_;
}

void RegisterDeviceGroupRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string RegisterDeviceGroupRequest::getProductKey() const {
  return productKey_;
}

void RegisterDeviceGroupRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string RegisterDeviceGroupRequest::getDeviceGroupName() const {
  return deviceGroupName_;
}

void RegisterDeviceGroupRequest::setDeviceGroupName(const std::string &deviceGroupName) {
  deviceGroupName_ = deviceGroupName;
  setParameter(std::string("DeviceGroupName"), deviceGroupName);
}

std::string RegisterDeviceGroupRequest::getBizChainId() const {
  return bizChainId_;
}

void RegisterDeviceGroupRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

