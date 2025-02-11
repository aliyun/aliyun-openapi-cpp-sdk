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

#include <alibabacloud/cloudauth/model/Mobile3MetaSimpleStandardVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::Mobile3MetaSimpleStandardVerifyRequest;

Mobile3MetaSimpleStandardVerifyRequest::Mobile3MetaSimpleStandardVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "Mobile3MetaSimpleStandardVerify") {
  setMethod(HttpRequest::Method::Post);
}

Mobile3MetaSimpleStandardVerifyRequest::~Mobile3MetaSimpleStandardVerifyRequest() {}

std::string Mobile3MetaSimpleStandardVerifyRequest::getParamType() const {
  return paramType_;
}

void Mobile3MetaSimpleStandardVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string Mobile3MetaSimpleStandardVerifyRequest::getMobile() const {
  return mobile_;
}

void Mobile3MetaSimpleStandardVerifyRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setBodyParameter(std::string("Mobile"), mobile);
}

std::string Mobile3MetaSimpleStandardVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void Mobile3MetaSimpleStandardVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setBodyParameter(std::string("IdentifyNum"), identifyNum);
}

std::string Mobile3MetaSimpleStandardVerifyRequest::getUserName() const {
  return userName_;
}

void Mobile3MetaSimpleStandardVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

