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

#include <alibabacloud/ga/model/DeleteIpSetsRequest.h>

using AlibabaCloud::Ga::Model::DeleteIpSetsRequest;

DeleteIpSetsRequest::DeleteIpSetsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteIpSets") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpSetsRequest::~DeleteIpSetsRequest() {}

std::vector<std::string> DeleteIpSetsRequest::getIpSetIds() const {
  return ipSetIds_;
}

void DeleteIpSetsRequest::setIpSetIds(const std::vector<std::string> &ipSetIds) {
  ipSetIds_ = ipSetIds;
}

std::string DeleteIpSetsRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

