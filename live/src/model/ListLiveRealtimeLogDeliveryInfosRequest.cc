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

#include <alibabacloud/live/model/ListLiveRealtimeLogDeliveryInfosRequest.h>

using AlibabaCloud::Live::Model::ListLiveRealtimeLogDeliveryInfosRequest;

ListLiveRealtimeLogDeliveryInfosRequest::ListLiveRealtimeLogDeliveryInfosRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveRealtimeLogDeliveryInfos") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveRealtimeLogDeliveryInfosRequest::~ListLiveRealtimeLogDeliveryInfosRequest() {}

long ListLiveRealtimeLogDeliveryInfosRequest::getOwnerId() const {
  return ownerId_;
}

void ListLiveRealtimeLogDeliveryInfosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListLiveRealtimeLogDeliveryInfosRequest::getLiveOpenapiReserve() const {
  return liveOpenapiReserve_;
}

void ListLiveRealtimeLogDeliveryInfosRequest::setLiveOpenapiReserve(const std::string &liveOpenapiReserve) {
  liveOpenapiReserve_ = liveOpenapiReserve;
  setParameter(std::string("LiveOpenapiReserve"), liveOpenapiReserve);
}

