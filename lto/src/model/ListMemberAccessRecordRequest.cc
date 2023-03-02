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

#include <alibabacloud/lto/model/ListMemberAccessRecordRequest.h>

using AlibabaCloud::Lto::Model::ListMemberAccessRecordRequest;

ListMemberAccessRecordRequest::ListMemberAccessRecordRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListMemberAccessRecord") {
  setMethod(HttpRequest::Method::Post);
}

ListMemberAccessRecordRequest::~ListMemberAccessRecordRequest() {}

long ListMemberAccessRecordRequest::getNum() const {
  return num_;
}

void ListMemberAccessRecordRequest::setNum(long num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMemberAccessRecordRequest::getUid() const {
  return uid_;
}

void ListMemberAccessRecordRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

long ListMemberAccessRecordRequest::getSize() const {
  return size_;
}

void ListMemberAccessRecordRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListMemberAccessRecordRequest::getRegionId() const {
  return regionId_;
}

void ListMemberAccessRecordRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListMemberAccessRecordRequest::getName() const {
  return name_;
}

void ListMemberAccessRecordRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListMemberAccessRecordRequest::getContactor() const {
  return contactor_;
}

void ListMemberAccessRecordRequest::setContactor(const std::string &contactor) {
  contactor_ = contactor;
  setParameter(std::string("Contactor"), contactor);
}

std::string ListMemberAccessRecordRequest::getAccessStatus() const {
  return accessStatus_;
}

void ListMemberAccessRecordRequest::setAccessStatus(const std::string &accessStatus) {
  accessStatus_ = accessStatus;
  setParameter(std::string("AccessStatus"), accessStatus);
}

