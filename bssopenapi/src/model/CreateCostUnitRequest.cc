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

#include <alibabacloud/bssopenapi/model/CreateCostUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateCostUnitRequest;

CreateCostUnitRequest::CreateCostUnitRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CreateCostUnit") {
  setMethod(HttpRequest::Method::Post);
}

CreateCostUnitRequest::~CreateCostUnitRequest() {}

std::vector<CreateCostUnitRequest::UnitEntityList> CreateCostUnitRequest::getUnitEntityList() const {
  return unitEntityList_;
}

void CreateCostUnitRequest::setUnitEntityList(const std::vector<CreateCostUnitRequest::UnitEntityList> &unitEntityList) {
  unitEntityList_ = unitEntityList;
  for(int dep1 = 0; dep1 != unitEntityList.size(); dep1++) {
  auto unitEntityListObj = unitEntityList.at(dep1);
  std::string unitEntityListObjStr = std::string("UnitEntityList") + "." + std::to_string(dep1 + 1);
    setParameter(unitEntityListObjStr + ".UnitName", unitEntityListObj.unitName);
    setParameter(unitEntityListObjStr + ".ParentUnitId", std::to_string(unitEntityListObj.parentUnitId));
    setParameter(unitEntityListObjStr + ".OwnerUid", std::to_string(unitEntityListObj.ownerUid));
  }
}

