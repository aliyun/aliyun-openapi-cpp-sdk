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

#include <alibabacloud/sasti/model/GetGraphQueryTemplatesRequest.h>

using AlibabaCloud::Sasti::Model::GetGraphQueryTemplatesRequest;

GetGraphQueryTemplatesRequest::GetGraphQueryTemplatesRequest()
    : RpcServiceRequest("sasti", "2020-05-12", "GetGraphQueryTemplates") {
  setMethod(HttpRequest::Method::Post);
}

GetGraphQueryTemplatesRequest::~GetGraphQueryTemplatesRequest() {}

std::string GetGraphQueryTemplatesRequest::getServiceUnit() const {
  return serviceUnit_;
}

void GetGraphQueryTemplatesRequest::setServiceUnit(const std::string &serviceUnit) {
  serviceUnit_ = serviceUnit;
  setBodyParameter(std::string("ServiceUnit"), serviceUnit);
}

std::string GetGraphQueryTemplatesRequest::getEnv() const {
  return env_;
}

void GetGraphQueryTemplatesRequest::setEnv(const std::string &env) {
  env_ = env;
  setBodyParameter(std::string("Env"), env);
}

