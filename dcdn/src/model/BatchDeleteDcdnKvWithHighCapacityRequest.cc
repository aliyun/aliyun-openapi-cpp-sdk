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

#include <alibabacloud/dcdn/model/BatchDeleteDcdnKvWithHighCapacityRequest.h>

using AlibabaCloud::Dcdn::Model::BatchDeleteDcdnKvWithHighCapacityRequest;

BatchDeleteDcdnKvWithHighCapacityRequest::BatchDeleteDcdnKvWithHighCapacityRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchDeleteDcdnKvWithHighCapacity") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteDcdnKvWithHighCapacityRequest::~BatchDeleteDcdnKvWithHighCapacityRequest() {}

std::string BatchDeleteDcdnKvWithHighCapacityRequest::get_Namespace() const {
  return _namespace_;
}

void BatchDeleteDcdnKvWithHighCapacityRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string BatchDeleteDcdnKvWithHighCapacityRequest::getUrl() const {
  return url_;
}

void BatchDeleteDcdnKvWithHighCapacityRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

