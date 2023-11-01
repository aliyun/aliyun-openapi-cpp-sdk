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

#include <alibabacloud/cloud-siem/model/DoQuickFieldRequest.h>

using AlibabaCloud::Cloud_siem::Model::DoQuickFieldRequest;

DoQuickFieldRequest::DoQuickFieldRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DoQuickField") {
  setMethod(HttpRequest::Method::Post);
}

DoQuickFieldRequest::~DoQuickFieldRequest() {}

std::string DoQuickFieldRequest::getRegionId() const {
  return regionId_;
}

void DoQuickFieldRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DoQuickFieldRequest::getFrom() const {
  return from_;
}

void DoQuickFieldRequest::setFrom(int from) {
  from_ = from;
  setBodyParameter(std::string("From"), std::to_string(from));
}

std::string DoQuickFieldRequest::getIndex() const {
  return index_;
}

void DoQuickFieldRequest::setIndex(const std::string &index) {
  index_ = index;
  setBodyParameter(std::string("Index"), index);
}

bool DoQuickFieldRequest::getReverse() const {
  return reverse_;
}

void DoQuickFieldRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setBodyParameter(std::string("Reverse"), reverse ? "true" : "false");
}

int DoQuickFieldRequest::getSize() const {
  return size_;
}

void DoQuickFieldRequest::setSize(int size) {
  size_ = size;
  setBodyParameter(std::string("Size"), std::to_string(size));
}

int DoQuickFieldRequest::getTo() const {
  return to_;
}

void DoQuickFieldRequest::setTo(int to) {
  to_ = to;
  setBodyParameter(std::string("To"), std::to_string(to));
}

int DoQuickFieldRequest::getPage() const {
  return page_;
}

void DoQuickFieldRequest::setPage(int page) {
  page_ = page;
  setBodyParameter(std::string("Page"), std::to_string(page));
}

