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

#include <alibabacloud/nis/model/DeleteNetworkReachableAnalysisRequest.h>

using AlibabaCloud::Nis::Model::DeleteNetworkReachableAnalysisRequest;

DeleteNetworkReachableAnalysisRequest::DeleteNetworkReachableAnalysisRequest()
    : RpcServiceRequest("nis", "2021-12-16", "DeleteNetworkReachableAnalysis") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkReachableAnalysisRequest::~DeleteNetworkReachableAnalysisRequest() {}

bool DeleteNetworkReachableAnalysisRequest::getDryRun() const {
  return dryRun_;
}

void DeleteNetworkReachableAnalysisRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteNetworkReachableAnalysisRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNetworkReachableAnalysisRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNetworkReachableAnalysisRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkReachableAnalysisRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DeleteNetworkReachableAnalysisRequest::std::string> DeleteNetworkReachableAnalysisRequest::getNetworkReachableAnalysisIds() const {
  return networkReachableAnalysisIds_;
}

void DeleteNetworkReachableAnalysisRequest::setNetworkReachableAnalysisIds(const std::vector<DeleteNetworkReachableAnalysisRequest::std::string> &networkReachableAnalysisIds) {
  networkReachableAnalysisIds_ = networkReachableAnalysisIds;
  for(int dep1 = 0; dep1 != networkReachableAnalysisIds.size(); dep1++) {
    setParameter(std::string("NetworkReachableAnalysisIds") + "." + std::to_string(dep1 + 1), networkReachableAnalysisIds[dep1]);
  }
}

