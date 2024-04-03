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

#include <alibabacloud/cloudauth/model/DescribeVerifyResultRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifyResultRequest;

DescribeVerifyResultRequest::DescribeVerifyResultRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifyResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVerifyResultRequest::~DescribeVerifyResultRequest() {}

std::string DescribeVerifyResultRequest::getBizType() const {
  return bizType_;
}

void DescribeVerifyResultRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string DescribeVerifyResultRequest::getBizId() const {
  return bizId_;
}

void DescribeVerifyResultRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

