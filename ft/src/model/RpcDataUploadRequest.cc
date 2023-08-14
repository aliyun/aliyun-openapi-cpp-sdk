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

#include <alibabacloud/ft/model/RpcDataUploadRequest.h>

using AlibabaCloud::Ft::Model::RpcDataUploadRequest;

RpcDataUploadRequest::RpcDataUploadRequest()
    : RpcServiceRequest("ft", "2021-01-01", "RpcDataUpload") {
  setMethod(HttpRequest::Method::Post);
}

RpcDataUploadRequest::~RpcDataUploadRequest() {}

std::string RpcDataUploadRequest::getQuery1() const {
  return query1_;
}

void RpcDataUploadRequest::setQuery1(const std::string &query1) {
  query1_ = query1;
  setParameter(std::string("query1"), query1);
}

long RpcDataUploadRequest::getQuery2() const {
  return query2_;
}

void RpcDataUploadRequest::setQuery2(long query2) {
  query2_ = query2;
  setParameter(std::string("query2"), std::to_string(query2));
}

std::string RpcDataUploadRequest::getLargeParam() const {
  return largeParam_;
}

void RpcDataUploadRequest::setLargeParam(const std::string &largeParam) {
  largeParam_ = largeParam;
  setBodyParameter(std::string("largeParam"), largeParam);
}

