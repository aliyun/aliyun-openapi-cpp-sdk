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

#include <alibabacloud/dcdn/model/BatchDeleteDcdnKvRequest.h>

using AlibabaCloud::Dcdn::Model::BatchDeleteDcdnKvRequest;

BatchDeleteDcdnKvRequest::BatchDeleteDcdnKvRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchDeleteDcdnKv") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteDcdnKvRequest::~BatchDeleteDcdnKvRequest() {}

std::vector<BatchDeleteDcdnKvRequest::std::string> BatchDeleteDcdnKvRequest::getKeys() const {
  return keys_;
}

void BatchDeleteDcdnKvRequest::setKeys(const std::vector<BatchDeleteDcdnKvRequest::std::string> &keys) {
  keys_ = keys;
  for(int dep1 = 0; dep1 != keys.size(); dep1++) {
    setBodyParameter(std::string("Keys") + "." + std::to_string(dep1 + 1), keys[dep1]);
  }
}

std::string BatchDeleteDcdnKvRequest::get_Namespace() const {
  return _namespace_;
}

void BatchDeleteDcdnKvRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

