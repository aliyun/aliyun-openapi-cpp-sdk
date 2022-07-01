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

#include <alibabacloud/ddoscoo/model/ConfigLayer4RemarkRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer4RemarkRequest;

ConfigLayer4RemarkRequest::ConfigLayer4RemarkRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigLayer4Remark") {
  setMethod(HttpRequest::Method::Post);
}

ConfigLayer4RemarkRequest::~ConfigLayer4RemarkRequest() {}

std::string ConfigLayer4RemarkRequest::getListeners() const {
  return listeners_;
}

void ConfigLayer4RemarkRequest::setListeners(const std::string &listeners) {
  listeners_ = listeners;
  setParameter(std::string("Listeners"), listeners);
}

std::string ConfigLayer4RemarkRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigLayer4RemarkRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

