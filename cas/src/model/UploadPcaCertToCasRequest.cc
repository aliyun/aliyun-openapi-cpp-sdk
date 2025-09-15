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

#include <alibabacloud/cas/model/UploadPcaCertToCasRequest.h>

using AlibabaCloud::Cas::Model::UploadPcaCertToCasRequest;

UploadPcaCertToCasRequest::UploadPcaCertToCasRequest()
    : RpcServiceRequest("cas", "2020-06-30", "UploadPcaCertToCas") {
  setMethod(HttpRequest::Method::Post);
}

UploadPcaCertToCasRequest::~UploadPcaCertToCasRequest() {}

std::string UploadPcaCertToCasRequest::getIds() const {
  return ids_;
}

void UploadPcaCertToCasRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

