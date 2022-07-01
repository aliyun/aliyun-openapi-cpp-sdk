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

#include <alibabacloud/ddoscoo/model/DescribeAutoCcWhitelistRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeAutoCcWhitelistRequest;

DescribeAutoCcWhitelistRequest::DescribeAutoCcWhitelistRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeAutoCcWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoCcWhitelistRequest::~DescribeAutoCcWhitelistRequest() {}

int DescribeAutoCcWhitelistRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoCcWhitelistRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAutoCcWhitelistRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAutoCcWhitelistRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAutoCcWhitelistRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAutoCcWhitelistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeAutoCcWhitelistRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoCcWhitelistRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAutoCcWhitelistRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeAutoCcWhitelistRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

