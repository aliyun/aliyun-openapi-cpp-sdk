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

#include <alibabacloud/ltl/model/ListMPCoSPhaseGroupRequest.h>

using AlibabaCloud::Ltl::Model::ListMPCoSPhaseGroupRequest;

ListMPCoSPhaseGroupRequest::ListMPCoSPhaseGroupRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListMPCoSPhaseGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListMPCoSPhaseGroupRequest::~ListMPCoSPhaseGroupRequest() {}

int ListMPCoSPhaseGroupRequest::getSize() const {
  return size_;
}

void ListMPCoSPhaseGroupRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int ListMPCoSPhaseGroupRequest::getNum() const {
  return num_;
}

void ListMPCoSPhaseGroupRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMPCoSPhaseGroupRequest::getName() const {
  return name_;
}

void ListMPCoSPhaseGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListMPCoSPhaseGroupRequest::getApiVersion() const {
  return apiVersion_;
}

void ListMPCoSPhaseGroupRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListMPCoSPhaseGroupRequest::getBizChainId() const {
  return bizChainId_;
}

void ListMPCoSPhaseGroupRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

