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

#include <alibabacloud/kms/model/GetKmsInstanceRequest.h>

using AlibabaCloud::Kms::Model::GetKmsInstanceRequest;

GetKmsInstanceRequest::GetKmsInstanceRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GetKmsInstance") {
  setMethod(HttpRequest::Method::Post);
}

GetKmsInstanceRequest::~GetKmsInstanceRequest() {}

std::string GetKmsInstanceRequest::getKmsInstanceId() const {
  return kmsInstanceId_;
}

void GetKmsInstanceRequest::setKmsInstanceId(const std::string &kmsInstanceId) {
  kmsInstanceId_ = kmsInstanceId;
  setParameter(std::string("KmsInstanceId"), kmsInstanceId);
}

