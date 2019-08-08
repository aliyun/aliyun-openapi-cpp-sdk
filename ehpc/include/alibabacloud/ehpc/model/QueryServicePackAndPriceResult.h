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

#ifndef ALIBABACLOUD_EHPC_MODEL_QUERYSERVICEPACKANDPRICERESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_QUERYSERVICEPACKANDPRICERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT QueryServicePackAndPriceResult
    : public ServiceResult {
public:
  struct ServicePackInfo {
    std::string instanceName;
    int endTime;
    int capacity;
    int startTime;
  };

  QueryServicePackAndPriceResult();
  explicit QueryServicePackAndPriceResult(const std::string &payload);
  ~QueryServicePackAndPriceResult();
  float getOriginalPrice() const;
  float getDiscountPrice() const;
  std::string getCurrency() const;
  std::vector<ServicePackInfo> getServicePack() const;
  std::string getRegionId() const;
  float getTradePrice() const;
  int getOriginalAmount() const;
  int getChargeAmount() const;

protected:
  void parse(const std::string &payload);

private:
  float originalPrice_;
  float discountPrice_;
  std::string currency_;
  std::vector<ServicePackInfo> servicePack_;
  std::string regionId_;
  float tradePrice_;
  int originalAmount_;
  int chargeAmount_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_QUERYSERVICEPACKANDPRICERESULT_H_