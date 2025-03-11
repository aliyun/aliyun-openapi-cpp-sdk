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

#include <alibabacloud/drds/model/DescribeRdsCommodityRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsCommodityRequest;

DescribeRdsCommodityRequest::DescribeRdsCommodityRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRdsCommodity") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRdsCommodityRequest::~DescribeRdsCommodityRequest() {}

std::string DescribeRdsCommodityRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeRdsCommodityRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeRdsCommodityRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRdsCommodityRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRdsCommodityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRdsCommodityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRdsCommodityRequest::getOrderType() const {
  return orderType_;
}

void DescribeRdsCommodityRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

