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

#include <alibabacloud/cloudauth/model/Id2MetaVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::Id2MetaVerifyRequest;

Id2MetaVerifyRequest::Id2MetaVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "Id2MetaVerify") {
  setMethod(HttpRequest::Method::Post);
}

Id2MetaVerifyRequest::~Id2MetaVerifyRequest() {}

std::string Id2MetaVerifyRequest::getParamType() const {
  return paramType_;
}

void Id2MetaVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setParameter(std::string("ParamType"), paramType);
}

std::string Id2MetaVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void Id2MetaVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setParameter(std::string("IdentifyNum"), identifyNum);
}

std::string Id2MetaVerifyRequest::getUserName() const {
  return userName_;
}

void Id2MetaVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

