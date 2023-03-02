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

#include <alibabacloud/ltl/model/ListMPCoSPhaseRequest.h>

using AlibabaCloud::Ltl::Model::ListMPCoSPhaseRequest;

ListMPCoSPhaseRequest::ListMPCoSPhaseRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListMPCoSPhase") {
  setMethod(HttpRequest::Method::Post);
}

ListMPCoSPhaseRequest::~ListMPCoSPhaseRequest() {}

int ListMPCoSPhaseRequest::getSize() const {
  return size_;
}

void ListMPCoSPhaseRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int ListMPCoSPhaseRequest::getNum() const {
  return num_;
}

void ListMPCoSPhaseRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMPCoSPhaseRequest::getName() const {
  return name_;
}

void ListMPCoSPhaseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListMPCoSPhaseRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void ListMPCoSPhaseRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string ListMPCoSPhaseRequest::getApiVersion() const {
  return apiVersion_;
}

void ListMPCoSPhaseRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListMPCoSPhaseRequest::getBizChainId() const {
  return bizChainId_;
}

void ListMPCoSPhaseRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

