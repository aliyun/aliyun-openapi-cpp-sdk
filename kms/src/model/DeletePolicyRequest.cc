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

#include <alibabacloud/kms/model/DeletePolicyRequest.h>

using AlibabaCloud::Kms::Model::DeletePolicyRequest;

DeletePolicyRequest::DeletePolicyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "DeletePolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeletePolicyRequest::~DeletePolicyRequest() {}

std::string DeletePolicyRequest::getName() const {
  return name_;
}

void DeletePolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

