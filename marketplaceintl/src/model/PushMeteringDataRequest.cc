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

#include <alibabacloud/marketplaceintl/model/PushMeteringDataRequest.h>

using AlibabaCloud::MarketplaceIntl::Model::PushMeteringDataRequest;

PushMeteringDataRequest::PushMeteringDataRequest()
    : RpcServiceRequest("marketplaceintl", "2022-12-30", "PushMeteringData") {
  setMethod(HttpRequest::Method::Post);
}

PushMeteringDataRequest::~PushMeteringDataRequest() {}

std::vector<PushMeteringDataRequest::MeteringData> PushMeteringDataRequest::getMeteringData() const {
  return meteringData_;
}

void PushMeteringDataRequest::setMeteringData(const std::vector<PushMeteringDataRequest::MeteringData> &meteringData) {
  meteringData_ = meteringData;
  for(int dep1 = 0; dep1 != meteringData.size(); dep1++) {
  auto meteringDataObj = meteringData.at(dep1);
  std::string meteringDataObjStr = std::string("MeteringData") + "." + std::to_string(dep1 + 1);
    setBodyParameter(meteringDataObjStr + ".MeteringAssist", meteringDataObj.meteringAssist);
    setBodyParameter(meteringDataObjStr + ".PushOrderBizId", meteringDataObj.pushOrderBizId);
    setBodyParameter(meteringDataObjStr + ".InstanceId", meteringDataObj.instanceId);
    setBodyParameter(meteringDataObjStr + ".EndTime", std::to_string(meteringDataObj.endTime));
    setBodyParameter(meteringDataObjStr + ".StartTime", std::to_string(meteringDataObj.startTime));
    setBodyParameter(meteringDataObjStr + ".MeteringEntity", meteringDataObj.meteringEntity);
  }
}

std::string PushMeteringDataRequest::getGmtCreate() const {
  return gmtCreate_;
}

void PushMeteringDataRequest::setGmtCreate(const std::string &gmtCreate) {
  gmtCreate_ = gmtCreate;
  setBodyParameter(std::string("GmtCreate"), gmtCreate);
}

