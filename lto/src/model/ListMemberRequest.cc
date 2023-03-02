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

#include <alibabacloud/lto/model/ListMemberRequest.h>

using AlibabaCloud::Lto::Model::ListMemberRequest;

ListMemberRequest::ListMemberRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListMember") {
  setMethod(HttpRequest::Method::Post);
}

ListMemberRequest::~ListMemberRequest() {}

int ListMemberRequest::getNum() const {
  return num_;
}

void ListMemberRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMemberRequest::getUid() const {
  return uid_;
}

void ListMemberRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

int ListMemberRequest::getSize() const {
  return size_;
}

void ListMemberRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListMemberRequest::getRegionId() const {
  return regionId_;
}

void ListMemberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListMemberRequest::getName() const {
  return name_;
}

void ListMemberRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListMemberRequest::getContactor() const {
  return contactor_;
}

void ListMemberRequest::setContactor(const std::string &contactor) {
  contactor_ = contactor;
  setParameter(std::string("Contactor"), contactor);
}

