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

#include <alibabacloud/polardb/model/ModifyApplicationServerlessConfRequest.h>

using AlibabaCloud::Polardb::Model::ModifyApplicationServerlessConfRequest;

ModifyApplicationServerlessConfRequest::ModifyApplicationServerlessConfRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyApplicationServerlessConf") {
  setMethod(HttpRequest::Method::Post);
}

ModifyApplicationServerlessConfRequest::~ModifyApplicationServerlessConfRequest() {}

std::vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> ModifyApplicationServerlessConfRequest::getServerlessConfList() const {
  return serverlessConfList_;
}

void ModifyApplicationServerlessConfRequest::setServerlessConfList(const std::vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> &serverlessConfList) {
  serverlessConfList_ = serverlessConfList;
  for(int dep1 = 0; dep1 != serverlessConfList.size(); dep1++) {
  auto serverlessConfListObj = serverlessConfList.at(dep1);
  std::string serverlessConfListObjStr = std::string("ServerlessConfList") + "." + std::to_string(dep1 + 1);
    setParameter(serverlessConfListObjStr + ".ComponentType", serverlessConfListObj.componentType);
    setParameter(serverlessConfListObjStr + ".ScaleMax", serverlessConfListObj.scaleMax);
    setParameter(serverlessConfListObjStr + ".ScaleMin", serverlessConfListObj.scaleMin);
  }
}

std::string ModifyApplicationServerlessConfRequest::getApplicationId() const {
  return applicationId_;
}

void ModifyApplicationServerlessConfRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

