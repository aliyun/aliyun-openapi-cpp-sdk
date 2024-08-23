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

#include <alibabacloud/ens/model/CreateStorageGatewayRequest.h>

using AlibabaCloud::Ens::Model::CreateStorageGatewayRequest;

CreateStorageGatewayRequest::CreateStorageGatewayRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateStorageGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateStorageGatewayRequest::~CreateStorageGatewayRequest() {}

std::vector<CreateStorageGatewayRequest::OrderDetails> CreateStorageGatewayRequest::getOrderDetails() const {
  return orderDetails_;
}

void CreateStorageGatewayRequest::setOrderDetails(const std::vector<CreateStorageGatewayRequest::OrderDetails> &orderDetails) {
  orderDetails_ = orderDetails;
  for(int dep1 = 0; dep1 != orderDetails.size(); dep1++) {
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".GatewayType", orderDetails[dep1].gatewayType);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".VpcId", orderDetails[dep1].vpcId);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".GatewayName", orderDetails[dep1].gatewayName);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".EnsRegionId", orderDetails[dep1].ensRegionId);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".Description", orderDetails[dep1].description);
  }
}

