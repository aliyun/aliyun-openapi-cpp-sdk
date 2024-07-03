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

#include <alibabacloud/csas/model/UpdateNacUserCertStatusRequest.h>

using AlibabaCloud::Csas::Model::UpdateNacUserCertStatusRequest;

UpdateNacUserCertStatusRequest::UpdateNacUserCertStatusRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateNacUserCertStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNacUserCertStatusRequest::~UpdateNacUserCertStatusRequest() {}

std::vector<UpdateNacUserCertStatusRequest::IdList> UpdateNacUserCertStatusRequest::getIdList() const {
  return idList_;
}

void UpdateNacUserCertStatusRequest::setIdList(const std::vector<UpdateNacUserCertStatusRequest::IdList> &idList) {
  idList_ = idList;
  for(int dep1 = 0; dep1 != idList.size(); dep1++) {
    setBodyParameter(std::string("IdList") + "." + std::to_string(dep1 + 1) + ".UserId", idList[dep1].userId);
    setBodyParameter(std::string("IdList") + "." + std::to_string(dep1 + 1) + ".DevTag", idList[dep1].devTag);
  }
}

std::string UpdateNacUserCertStatusRequest::getStatus() const {
  return status_;
}

void UpdateNacUserCertStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

