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

#include <alibabacloud/dcdn/model/BatchPutDcdnKvRequest.h>

using AlibabaCloud::Dcdn::Model::BatchPutDcdnKvRequest;

BatchPutDcdnKvRequest::BatchPutDcdnKvRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchPutDcdnKv") {
  setMethod(HttpRequest::Method::Post);
}

BatchPutDcdnKvRequest::~BatchPutDcdnKvRequest() {}

std::vector<BatchPutDcdnKvRequest::KvList> BatchPutDcdnKvRequest::getKvList() const {
  return kvList_;
}

void BatchPutDcdnKvRequest::setKvList(const std::vector<BatchPutDcdnKvRequest::KvList> &kvList) {
  kvList_ = kvList;
  for(int dep1 = 0; dep1 != kvList.size(); dep1++) {
    setBodyParameter(std::string("KvList") + "." + std::to_string(dep1 + 1) + ".Key", kvList[dep1].key);
    setBodyParameter(std::string("KvList") + "." + std::to_string(dep1 + 1) + ".Value", kvList[dep1].value);
    setBodyParameter(std::string("KvList") + "." + std::to_string(dep1 + 1) + ".Expiration", std::to_string(kvList[dep1].expiration));
    setBodyParameter(std::string("KvList") + "." + std::to_string(dep1 + 1) + ".ExpirationTtl", std::to_string(kvList[dep1].expirationTtl));
  }
}

std::string BatchPutDcdnKvRequest::get_Namespace() const {
  return _namespace_;
}

void BatchPutDcdnKvRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

