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

#include <alibabacloud/cloudauth/model/Mobile3MetaSimpleVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::Mobile3MetaSimpleVerifyRequest;

Mobile3MetaSimpleVerifyRequest::Mobile3MetaSimpleVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "Mobile3MetaSimpleVerify") {
  setMethod(HttpRequest::Method::Post);
}

Mobile3MetaSimpleVerifyRequest::~Mobile3MetaSimpleVerifyRequest() {}

std::string Mobile3MetaSimpleVerifyRequest::getParamType() const {
  return paramType_;
}

void Mobile3MetaSimpleVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string Mobile3MetaSimpleVerifyRequest::getMobile() const {
  return mobile_;
}

void Mobile3MetaSimpleVerifyRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setBodyParameter(std::string("Mobile"), mobile);
}

std::string Mobile3MetaSimpleVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void Mobile3MetaSimpleVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setBodyParameter(std::string("IdentifyNum"), identifyNum);
}

std::string Mobile3MetaSimpleVerifyRequest::getUserName() const {
  return userName_;
}

void Mobile3MetaSimpleVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

