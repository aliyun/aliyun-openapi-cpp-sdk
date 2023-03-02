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

#include <alibabacloud/ltl/model/ListProofChainRequest.h>

using AlibabaCloud::Ltl::Model::ListProofChainRequest;

ListProofChainRequest::ListProofChainRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListProofChain") {
  setMethod(HttpRequest::Method::Post);
}

ListProofChainRequest::~ListProofChainRequest() {}

int ListProofChainRequest::getSize() const {
  return size_;
}

void ListProofChainRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int ListProofChainRequest::getNum() const {
  return num_;
}

void ListProofChainRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListProofChainRequest::getName() const {
  return name_;
}

void ListProofChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListProofChainRequest::getApiVersion() const {
  return apiVersion_;
}

void ListProofChainRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

