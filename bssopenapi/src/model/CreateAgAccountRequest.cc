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

#include <alibabacloud/bssopenapi/model/CreateAgAccountRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateAgAccountRequest;

CreateAgAccountRequest::CreateAgAccountRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CreateAgAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateAgAccountRequest::~CreateAgAccountRequest() {}

std::string CreateAgAccountRequest::getFirstName() const {
  return firstName_;
}

void CreateAgAccountRequest::setFirstName(const std::string &firstName) {
  firstName_ = firstName;
  setParameter(std::string("FirstName"), firstName);
}

std::string CreateAgAccountRequest::getCityName() const {
  return cityName_;
}

void CreateAgAccountRequest::setCityName(const std::string &cityName) {
  cityName_ = cityName;
  setParameter(std::string("CityName"), cityName);
}

std::string CreateAgAccountRequest::getPostcode() const {
  return postcode_;
}

void CreateAgAccountRequest::setPostcode(const std::string &postcode) {
  postcode_ = postcode;
  setParameter(std::string("Postcode"), postcode);
}

std::string CreateAgAccountRequest::getEnterpriseName() const {
  return enterpriseName_;
}

void CreateAgAccountRequest::setEnterpriseName(const std::string &enterpriseName) {
  enterpriseName_ = enterpriseName;
  setParameter(std::string("EnterpriseName"), enterpriseName);
}

std::string CreateAgAccountRequest::getNationCode() const {
  return nationCode_;
}

void CreateAgAccountRequest::setNationCode(const std::string &nationCode) {
  nationCode_ = nationCode;
  setParameter(std::string("NationCode"), nationCode);
}

std::string CreateAgAccountRequest::getLastName() const {
  return lastName_;
}

void CreateAgAccountRequest::setLastName(const std::string &lastName) {
  lastName_ = lastName;
  setParameter(std::string("LastName"), lastName);
}

std::string CreateAgAccountRequest::getLoginEmail() const {
  return loginEmail_;
}

void CreateAgAccountRequest::setLoginEmail(const std::string &loginEmail) {
  loginEmail_ = loginEmail;
  setParameter(std::string("LoginEmail"), loginEmail);
}

std::string CreateAgAccountRequest::getProvinceName() const {
  return provinceName_;
}

void CreateAgAccountRequest::setProvinceName(const std::string &provinceName) {
  provinceName_ = provinceName;
  setParameter(std::string("ProvinceName"), provinceName);
}

std::string CreateAgAccountRequest::getAccountAttr() const {
  return accountAttr_;
}

void CreateAgAccountRequest::setAccountAttr(const std::string &accountAttr) {
  accountAttr_ = accountAttr;
  setParameter(std::string("AccountAttr"), accountAttr);
}

