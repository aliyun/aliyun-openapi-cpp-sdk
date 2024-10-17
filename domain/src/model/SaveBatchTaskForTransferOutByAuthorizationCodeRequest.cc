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

#include <alibabacloud/domain/model/SaveBatchTaskForTransferOutByAuthorizationCodeRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForTransferOutByAuthorizationCodeRequest;

SaveBatchTaskForTransferOutByAuthorizationCodeRequest::SaveBatchTaskForTransferOutByAuthorizationCodeRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForTransferOutByAuthorizationCode") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForTransferOutByAuthorizationCodeRequest::~SaveBatchTaskForTransferOutByAuthorizationCodeRequest() {}

std::string SaveBatchTaskForTransferOutByAuthorizationCodeRequest::getLong() const {
  return long_;
}

void SaveBatchTaskForTransferOutByAuthorizationCodeRequest::setLong(const std::string &long) {
  long_ = long;
  setParameter(std::string("Long"), long);
}

std::vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> SaveBatchTaskForTransferOutByAuthorizationCodeRequest::getTransferOutParamList() const {
  return transferOutParamList_;
}

void SaveBatchTaskForTransferOutByAuthorizationCodeRequest::setTransferOutParamList(const std::vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> &transferOutParamList) {
  transferOutParamList_ = transferOutParamList;
  for(int dep1 = 0; dep1 != transferOutParamList.size(); dep1++) {
  auto transferOutParamListObj = transferOutParamList.at(dep1);
  std::string transferOutParamListObjStr = std::string("TransferOutParamList") + "." + std::to_string(dep1 + 1);
    setParameter(transferOutParamListObjStr + ".AuthorizationCode", transferOutParamListObj.authorizationCode);
    setParameter(transferOutParamListObjStr + ".DomainName", transferOutParamListObj.domainName);
  }
}

std::string SaveBatchTaskForTransferOutByAuthorizationCodeRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveBatchTaskForTransferOutByAuthorizationCodeRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

