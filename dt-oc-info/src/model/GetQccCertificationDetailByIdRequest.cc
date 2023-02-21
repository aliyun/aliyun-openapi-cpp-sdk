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

#include <alibabacloud/dt-oc-info/model/GetQccCertificationDetailByIdRequest.h>

using AlibabaCloud::Dt_oc_info::Model::GetQccCertificationDetailByIdRequest;

GetQccCertificationDetailByIdRequest::GetQccCertificationDetailByIdRequest()
    : RpcServiceRequest("dt-oc-info", "2022-08-29", "GetQccCertificationDetailById") {
  setMethod(HttpRequest::Method::Post);
}

GetQccCertificationDetailByIdRequest::~GetQccCertificationDetailByIdRequest() {}

std::string GetQccCertificationDetailByIdRequest::getCertId() const {
  return certId_;
}

void GetQccCertificationDetailByIdRequest::setCertId(const std::string &certId) {
  certId_ = certId;
  setBodyParameter(std::string("CertId"), certId);
}

