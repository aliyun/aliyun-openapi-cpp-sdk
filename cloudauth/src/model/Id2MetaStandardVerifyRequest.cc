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

#include <alibabacloud/cloudauth/model/Id2MetaStandardVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::Id2MetaStandardVerifyRequest;

Id2MetaStandardVerifyRequest::Id2MetaStandardVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "Id2MetaStandardVerify") {
  setMethod(HttpRequest::Method::Post);
}

Id2MetaStandardVerifyRequest::~Id2MetaStandardVerifyRequest() {}

std::string Id2MetaStandardVerifyRequest::getParamType() const {
  return paramType_;
}

void Id2MetaStandardVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string Id2MetaStandardVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void Id2MetaStandardVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setBodyParameter(std::string("IdentifyNum"), identifyNum);
}

std::string Id2MetaStandardVerifyRequest::getUserName() const {
  return userName_;
}

void Id2MetaStandardVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

