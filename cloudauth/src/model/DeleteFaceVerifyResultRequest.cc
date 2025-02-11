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

#include <alibabacloud/cloudauth/model/DeleteFaceVerifyResultRequest.h>

using AlibabaCloud::Cloudauth::Model::DeleteFaceVerifyResultRequest;

DeleteFaceVerifyResultRequest::DeleteFaceVerifyResultRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DeleteFaceVerifyResult") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFaceVerifyResultRequest::~DeleteFaceVerifyResultRequest() {}

std::string DeleteFaceVerifyResultRequest::getDeleteAfterQuery() const {
  return deleteAfterQuery_;
}

void DeleteFaceVerifyResultRequest::setDeleteAfterQuery(const std::string &deleteAfterQuery) {
  deleteAfterQuery_ = deleteAfterQuery;
  setParameter(std::string("DeleteAfterQuery"), deleteAfterQuery);
}

std::string DeleteFaceVerifyResultRequest::getCertifyId() const {
  return certifyId_;
}

void DeleteFaceVerifyResultRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setParameter(std::string("CertifyId"), certifyId);
}

