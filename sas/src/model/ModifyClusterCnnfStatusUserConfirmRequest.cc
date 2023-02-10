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

#include <alibabacloud/sas/model/ModifyClusterCnnfStatusUserConfirmRequest.h>

using AlibabaCloud::Sas::Model::ModifyClusterCnnfStatusUserConfirmRequest;

ModifyClusterCnnfStatusUserConfirmRequest::ModifyClusterCnnfStatusUserConfirmRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyClusterCnnfStatusUserConfirm") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClusterCnnfStatusUserConfirmRequest::~ModifyClusterCnnfStatusUserConfirmRequest() {}

std::vector<std::string> ModifyClusterCnnfStatusUserConfirmRequest::getClusterIds() const {
  return clusterIds_;
}

void ModifyClusterCnnfStatusUserConfirmRequest::setClusterIds(const std::vector<std::string> &clusterIds) {
  clusterIds_ = clusterIds;
}

bool ModifyClusterCnnfStatusUserConfirmRequest::getUserConfirm() const {
  return userConfirm_;
}

void ModifyClusterCnnfStatusUserConfirmRequest::setUserConfirm(bool userConfirm) {
  userConfirm_ = userConfirm;
  setParameter(std::string("UserConfirm"), userConfirm ? "true" : "false");
}

