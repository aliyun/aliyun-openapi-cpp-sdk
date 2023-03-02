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

#include <alibabacloud/ltl/model/ListDeviceGroupRequest.h>

using AlibabaCloud::Ltl::Model::ListDeviceGroupRequest;

ListDeviceGroupRequest::ListDeviceGroupRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListDeviceGroupRequest::~ListDeviceGroupRequest() {}

int ListDeviceGroupRequest::getSize() const {
  return size_;
}

void ListDeviceGroupRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int ListDeviceGroupRequest::getNum() const {
  return num_;
}

void ListDeviceGroupRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListDeviceGroupRequest::getApiVersion() const {
  return apiVersion_;
}

void ListDeviceGroupRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListDeviceGroupRequest::getProductKey() const {
  return productKey_;
}

void ListDeviceGroupRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string ListDeviceGroupRequest::getBizChainId() const {
  return bizChainId_;
}

void ListDeviceGroupRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

