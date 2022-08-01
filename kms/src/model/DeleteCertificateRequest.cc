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

#include <alibabacloud/kms/model/DeleteCertificateRequest.h>

using AlibabaCloud::Kms::Model::DeleteCertificateRequest;

DeleteCertificateRequest::DeleteCertificateRequest()
    : RpcServiceRequest("kms", "2016-01-20", "DeleteCertificate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCertificateRequest::~DeleteCertificateRequest() {}

std::string DeleteCertificateRequest::getCertificateId() const {
  return certificateId_;
}

void DeleteCertificateRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

