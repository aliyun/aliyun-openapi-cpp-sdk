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

#include <alibabacloud/dcdn/model/GetDcdnKvStatusRequest.h>

using AlibabaCloud::Dcdn::Model::GetDcdnKvStatusRequest;

GetDcdnKvStatusRequest::GetDcdnKvStatusRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "GetDcdnKvStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetDcdnKvStatusRequest::~GetDcdnKvStatusRequest() {}

std::string GetDcdnKvStatusRequest::get_Namespace() const {
  return _namespace_;
}

void GetDcdnKvStatusRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetDcdnKvStatusRequest::getKey() const {
  return key_;
}

void GetDcdnKvStatusRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

