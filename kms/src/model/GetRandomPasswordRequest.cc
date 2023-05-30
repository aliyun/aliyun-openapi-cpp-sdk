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

#include <alibabacloud/kms/model/GetRandomPasswordRequest.h>

using AlibabaCloud::Kms::Model::GetRandomPasswordRequest;

GetRandomPasswordRequest::GetRandomPasswordRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GetRandomPassword") {
  setMethod(HttpRequest::Method::Post);
}

GetRandomPasswordRequest::~GetRandomPasswordRequest() {}

std::string GetRandomPasswordRequest::getExcludeCharacters() const {
  return excludeCharacters_;
}

void GetRandomPasswordRequest::setExcludeCharacters(const std::string &excludeCharacters) {
  excludeCharacters_ = excludeCharacters;
  setParameter(std::string("ExcludeCharacters"), excludeCharacters);
}

std::string GetRandomPasswordRequest::getPasswordLength() const {
  return passwordLength_;
}

void GetRandomPasswordRequest::setPasswordLength(const std::string &passwordLength) {
  passwordLength_ = passwordLength;
  setParameter(std::string("PasswordLength"), passwordLength);
}

std::string GetRandomPasswordRequest::getExcludePunctuation() const {
  return excludePunctuation_;
}

void GetRandomPasswordRequest::setExcludePunctuation(const std::string &excludePunctuation) {
  excludePunctuation_ = excludePunctuation;
  setParameter(std::string("ExcludePunctuation"), excludePunctuation);
}

std::string GetRandomPasswordRequest::getRequireEachIncludedType() const {
  return requireEachIncludedType_;
}

void GetRandomPasswordRequest::setRequireEachIncludedType(const std::string &requireEachIncludedType) {
  requireEachIncludedType_ = requireEachIncludedType;
  setParameter(std::string("RequireEachIncludedType"), requireEachIncludedType);
}

std::string GetRandomPasswordRequest::getExcludeNumbers() const {
  return excludeNumbers_;
}

void GetRandomPasswordRequest::setExcludeNumbers(const std::string &excludeNumbers) {
  excludeNumbers_ = excludeNumbers;
  setParameter(std::string("ExcludeNumbers"), excludeNumbers);
}

std::string GetRandomPasswordRequest::getExcludeLowercase() const {
  return excludeLowercase_;
}

void GetRandomPasswordRequest::setExcludeLowercase(const std::string &excludeLowercase) {
  excludeLowercase_ = excludeLowercase;
  setParameter(std::string("ExcludeLowercase"), excludeLowercase);
}

std::string GetRandomPasswordRequest::getExcludeUppercase() const {
  return excludeUppercase_;
}

void GetRandomPasswordRequest::setExcludeUppercase(const std::string &excludeUppercase) {
  excludeUppercase_ = excludeUppercase;
  setParameter(std::string("ExcludeUppercase"), excludeUppercase);
}

