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

#include <alibabacloud/eflo/model/DeleteVpdRequest.h>

using AlibabaCloud::Eflo::Model::DeleteVpdRequest;

DeleteVpdRequest::DeleteVpdRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "DeleteVpd") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpdRequest::~DeleteVpdRequest() {}

std::string DeleteVpdRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteVpdRequest::getVpdId() const {
  return vpdId_;
}

void DeleteVpdRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

