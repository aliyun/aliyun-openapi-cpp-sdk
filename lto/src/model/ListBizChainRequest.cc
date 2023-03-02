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

#include <alibabacloud/lto/model/ListBizChainRequest.h>

using AlibabaCloud::Lto::Model::ListBizChainRequest;

ListBizChainRequest::ListBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListBizChain") {
  setMethod(HttpRequest::Method::Post);
}

ListBizChainRequest::~ListBizChainRequest() {}

int ListBizChainRequest::getNum() const {
  return num_;
}

void ListBizChainRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListBizChainRequest::getBizChainId() const {
  return bizChainId_;
}

void ListBizChainRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

int ListBizChainRequest::getSize() const {
  return size_;
}

void ListBizChainRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListBizChainRequest::getRegionId() const {
  return regionId_;
}

void ListBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBizChainRequest::getName() const {
  return name_;
}

void ListBizChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

