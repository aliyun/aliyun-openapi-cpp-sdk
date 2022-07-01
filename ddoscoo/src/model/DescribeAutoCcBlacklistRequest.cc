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

#include <alibabacloud/ddoscoo/model/DescribeAutoCcBlacklistRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeAutoCcBlacklistRequest;

DescribeAutoCcBlacklistRequest::DescribeAutoCcBlacklistRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeAutoCcBlacklist") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoCcBlacklistRequest::~DescribeAutoCcBlacklistRequest() {}

int DescribeAutoCcBlacklistRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoCcBlacklistRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAutoCcBlacklistRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAutoCcBlacklistRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAutoCcBlacklistRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAutoCcBlacklistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeAutoCcBlacklistRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoCcBlacklistRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAutoCcBlacklistRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeAutoCcBlacklistRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

