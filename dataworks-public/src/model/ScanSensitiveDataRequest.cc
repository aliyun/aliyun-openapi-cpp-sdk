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

#include <alibabacloud/dataworks-public/model/ScanSensitiveDataRequest.h>

using AlibabaCloud::Dataworks_public::Model::ScanSensitiveDataRequest;

ScanSensitiveDataRequest::ScanSensitiveDataRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ScanSensitiveData") {
  setMethod(HttpRequest::Method::Get);
}

ScanSensitiveDataRequest::~ScanSensitiveDataRequest() {}

std::string ScanSensitiveDataRequest::getData() const {
  return data_;
}

void ScanSensitiveDataRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

