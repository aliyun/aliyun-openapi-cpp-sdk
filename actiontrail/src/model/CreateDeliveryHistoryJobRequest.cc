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

#include <alibabacloud/actiontrail/model/CreateDeliveryHistoryJobRequest.h>

using AlibabaCloud::Actiontrail::Model::CreateDeliveryHistoryJobRequest;

CreateDeliveryHistoryJobRequest::CreateDeliveryHistoryJobRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "CreateDeliveryHistoryJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateDeliveryHistoryJobRequest::~CreateDeliveryHistoryJobRequest() {}

std::string CreateDeliveryHistoryJobRequest::getClientToken() const {
  return clientToken_;
}

void CreateDeliveryHistoryJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDeliveryHistoryJobRequest::getTrailName() const {
  return trailName_;
}

void CreateDeliveryHistoryJobRequest::setTrailName(const std::string &trailName) {
  trailName_ = trailName;
  setParameter(std::string("TrailName"), trailName);
}

