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

#include <alibabacloud/lto/model/ListEdgeDeviceRequest.h>

using AlibabaCloud::Lto::Model::ListEdgeDeviceRequest;

ListEdgeDeviceRequest::ListEdgeDeviceRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListEdgeDevice") {
  setMethod(HttpRequest::Method::Post);
}

ListEdgeDeviceRequest::~ListEdgeDeviceRequest() {}

int ListEdgeDeviceRequest::getNum() const {
  return num_;
}

void ListEdgeDeviceRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListEdgeDeviceRequest::getProductKey() const {
  return productKey_;
}

void ListEdgeDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

int ListEdgeDeviceRequest::getSize() const {
  return size_;
}

void ListEdgeDeviceRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListEdgeDeviceRequest::getRegionId() const {
  return regionId_;
}

void ListEdgeDeviceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEdgeDeviceRequest::getName() const {
  return name_;
}

void ListEdgeDeviceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

