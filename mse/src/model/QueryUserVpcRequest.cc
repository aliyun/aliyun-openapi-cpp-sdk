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

#include <alibabacloud/mse/model/QueryUserVpcRequest.h>

using AlibabaCloud::Mse::Model::QueryUserVpcRequest;

QueryUserVpcRequest::QueryUserVpcRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryUserVpc") {
  setMethod(HttpRequest::Method::Get);
}

QueryUserVpcRequest::~QueryUserVpcRequest() {}

std::string QueryUserVpcRequest::getUserId() const {
  return userId_;
}

void QueryUserVpcRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string QueryUserVpcRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryUserVpcRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string QueryUserVpcRequest::getRegion() const {
  return region_;
}

void QueryUserVpcRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

