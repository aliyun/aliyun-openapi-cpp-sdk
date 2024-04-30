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

#include <alibabacloud/dcdn/model/PutDcdnKvRequest.h>

using AlibabaCloud::Dcdn::Model::PutDcdnKvRequest;

PutDcdnKvRequest::PutDcdnKvRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "PutDcdnKv") {
  setMethod(HttpRequest::Method::Post);
}

PutDcdnKvRequest::~PutDcdnKvRequest() {}

long PutDcdnKvRequest::getExpirationTtl() const {
  return expirationTtl_;
}

void PutDcdnKvRequest::setExpirationTtl(long expirationTtl) {
  expirationTtl_ = expirationTtl;
  setParameter(std::string("ExpirationTtl"), std::to_string(expirationTtl));
}

std::string PutDcdnKvRequest::get_Namespace() const {
  return _namespace_;
}

void PutDcdnKvRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

long PutDcdnKvRequest::getExpiration() const {
  return expiration_;
}

void PutDcdnKvRequest::setExpiration(long expiration) {
  expiration_ = expiration;
  setParameter(std::string("Expiration"), std::to_string(expiration));
}

std::string PutDcdnKvRequest::getValue() const {
  return value_;
}

void PutDcdnKvRequest::setValue(const std::string &value) {
  value_ = value;
  setBodyParameter(std::string("Value"), value);
}

std::string PutDcdnKvRequest::getKey() const {
  return key_;
}

void PutDcdnKvRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

