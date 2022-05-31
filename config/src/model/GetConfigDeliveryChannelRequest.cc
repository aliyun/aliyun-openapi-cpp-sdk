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

#include <alibabacloud/config/model/GetConfigDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::GetConfigDeliveryChannelRequest;

GetConfigDeliveryChannelRequest::GetConfigDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetConfigDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

GetConfigDeliveryChannelRequest::~GetConfigDeliveryChannelRequest() {}

std::string GetConfigDeliveryChannelRequest::getDeliveryChannelId() const {
  return deliveryChannelId_;
}

void GetConfigDeliveryChannelRequest::setDeliveryChannelId(const std::string &deliveryChannelId) {
  deliveryChannelId_ = deliveryChannelId;
  setParameter(std::string("DeliveryChannelId"), deliveryChannelId);
}

