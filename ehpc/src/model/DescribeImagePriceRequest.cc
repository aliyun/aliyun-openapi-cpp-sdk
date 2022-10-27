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

#include <alibabacloud/ehpc/model/DescribeImagePriceRequest.h>

using AlibabaCloud::EHPC::Model::DescribeImagePriceRequest;

DescribeImagePriceRequest::DescribeImagePriceRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribeImagePrice") {
  setMethod(HttpRequest::Method::Get);
}

DescribeImagePriceRequest::~DescribeImagePriceRequest() {}

int DescribeImagePriceRequest::getPeriod() const {
  return period_;
}

void DescribeImagePriceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int DescribeImagePriceRequest::getAmount() const {
  return amount_;
}

void DescribeImagePriceRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string DescribeImagePriceRequest::getImageId() const {
  return imageId_;
}

void DescribeImagePriceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeImagePriceRequest::getSkuCode() const {
  return skuCode_;
}

void DescribeImagePriceRequest::setSkuCode(const std::string &skuCode) {
  skuCode_ = skuCode;
  setParameter(std::string("SkuCode"), skuCode);
}

std::string DescribeImagePriceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeImagePriceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeImagePriceRequest::getPriceUnit() const {
  return priceUnit_;
}

void DescribeImagePriceRequest::setPriceUnit(const std::string &priceUnit) {
  priceUnit_ = priceUnit;
  setParameter(std::string("PriceUnit"), priceUnit);
}

std::string DescribeImagePriceRequest::getOrderType() const {
  return orderType_;
}

void DescribeImagePriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

