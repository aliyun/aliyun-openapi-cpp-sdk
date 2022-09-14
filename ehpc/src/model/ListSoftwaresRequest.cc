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

#include <alibabacloud/ehpc/model/ListSoftwaresRequest.h>

using AlibabaCloud::EHPC::Model::ListSoftwaresRequest;

ListSoftwaresRequest::ListSoftwaresRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "ListSoftwares") {
  setMethod(HttpRequest::Method::Get);
}

ListSoftwaresRequest::~ListSoftwaresRequest() {}

std::string ListSoftwaresRequest::getEhpcVersion() const {
  return ehpcVersion_;
}

void ListSoftwaresRequest::setEhpcVersion(const std::string &ehpcVersion) {
  ehpcVersion_ = ehpcVersion;
  setParameter(std::string("EhpcVersion"), ehpcVersion);
}

std::string ListSoftwaresRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListSoftwaresRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

