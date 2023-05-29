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

#include <alibabacloud/market/model/DescribeProductRequest.h>

using AlibabaCloud::Market::Model::DescribeProductRequest;

DescribeProductRequest::DescribeProductRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeProduct") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProductRequest::~DescribeProductRequest() {}

std::string DescribeProductRequest::getCode() const {
  return code_;
}

void DescribeProductRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

bool DescribeProductRequest::getQueryDraft() const {
  return queryDraft_;
}

void DescribeProductRequest::setQueryDraft(bool queryDraft) {
  queryDraft_ = queryDraft;
  setParameter(std::string("QueryDraft"), queryDraft ? "true" : "false");
}

std::string DescribeProductRequest::getAliUid() const {
  return aliUid_;
}

void DescribeProductRequest::setAliUid(const std::string &aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), aliUid);
}

