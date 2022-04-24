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

#include <alibabacloud/bssopenapi/model/ModifyCostUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::ModifyCostUnitRequest;

ModifyCostUnitRequest::ModifyCostUnitRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ModifyCostUnit") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCostUnitRequest::~ModifyCostUnitRequest() {}

std::vector<ModifyCostUnitRequest::UnitEntityList> ModifyCostUnitRequest::getUnitEntityList() const {
  return unitEntityList_;
}

void ModifyCostUnitRequest::setUnitEntityList(const std::vector<ModifyCostUnitRequest::UnitEntityList> &unitEntityList) {
  unitEntityList_ = unitEntityList;
  for(int dep1 = 0; dep1 != unitEntityList.size(); dep1++) {
  auto unitEntityListObj = unitEntityList.at(dep1);
  std::string unitEntityListObjStr = std::string("UnitEntityList") + "." + std::to_string(dep1 + 1);
    setParameter(unitEntityListObjStr + ".NewUnitName", unitEntityListObj.newUnitName);
    setParameter(unitEntityListObjStr + ".UnitId", std::to_string(unitEntityListObj.unitId));
    setParameter(unitEntityListObjStr + ".OwnerUid", std::to_string(unitEntityListObj.ownerUid));
  }
}

