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

#include <alibabacloud/ga/model/DescribeCommodityPriceRequest.h>

using AlibabaCloud::Ga::Model::DescribeCommodityPriceRequest;

DescribeCommodityPriceRequest::DescribeCommodityPriceRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeCommodityPrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCommodityPriceRequest::~DescribeCommodityPriceRequest() {}

std::string DescribeCommodityPriceRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void DescribeCommodityPriceRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

std::string DescribeCommodityPriceRequest::getRegionId() const {
  return regionId_;
}

void DescribeCommodityPriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeCommodityPriceRequest::Orders> DescribeCommodityPriceRequest::getOrders() const {
  return orders_;
}

void DescribeCommodityPriceRequest::setOrders(const std::vector<DescribeCommodityPriceRequest::Orders> &orders) {
  orders_ = orders;
  for(int dep1 = 0; dep1 != orders.size(); dep1++) {
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".CommodityCode", orders[dep1].commodityCode);
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".OrderType", orders[dep1].orderType);
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".ChargeType", orders[dep1].chargeType);
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".PricingCycle", orders[dep1].pricingCycle);
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".Duration", std::to_string(orders[dep1].duration));
    setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".Quantity", std::to_string(orders[dep1].quantity));
    for(int dep2 = 0; dep2 != orders[dep1].components.size(); dep2++) {
      setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".Components." + std::to_string(dep2 + 1) + ".ComponentCode", orders[dep1].components[dep2].componentCode);
      for(int dep3 = 0; dep3 != orders[dep1].components[dep2].properties.size(); dep3++) {
        setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".Components." + std::to_string(dep2 + 1) + ".Properties." + std::to_string(dep3 + 1) + ".Code", orders[dep1].components[dep2].properties[dep3].code);
        setParameter(std::string("Orders") + "." + std::to_string(dep1 + 1) + ".Components." + std::to_string(dep2 + 1) + ".Properties." + std::to_string(dep3 + 1) + ".Value", orders[dep1].components[dep2].properties[dep3].value);
      }
    }
  }
}

