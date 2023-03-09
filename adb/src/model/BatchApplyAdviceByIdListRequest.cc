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

#include <alibabacloud/adb/model/BatchApplyAdviceByIdListRequest.h>

using AlibabaCloud::Adb::Model::BatchApplyAdviceByIdListRequest;

BatchApplyAdviceByIdListRequest::BatchApplyAdviceByIdListRequest()
    : RpcServiceRequest("adb", "2019-03-15", "BatchApplyAdviceByIdList") {
  setMethod(HttpRequest::Method::Post);
}

BatchApplyAdviceByIdListRequest::~BatchApplyAdviceByIdListRequest() {}

std::string BatchApplyAdviceByIdListRequest::getDBClusterId() const {
  return dBClusterId_;
}

void BatchApplyAdviceByIdListRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string BatchApplyAdviceByIdListRequest::getAdviceIdList() const {
  return adviceIdList_;
}

void BatchApplyAdviceByIdListRequest::setAdviceIdList(const std::string &adviceIdList) {
  adviceIdList_ = adviceIdList;
  setParameter(std::string("AdviceIdList"), adviceIdList);
}

long BatchApplyAdviceByIdListRequest::getAdviceDate() const {
  return adviceDate_;
}

void BatchApplyAdviceByIdListRequest::setAdviceDate(long adviceDate) {
  adviceDate_ = adviceDate;
  setParameter(std::string("AdviceDate"), std::to_string(adviceDate));
}

std::string BatchApplyAdviceByIdListRequest::getRegionId() const {
  return regionId_;
}

void BatchApplyAdviceByIdListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

