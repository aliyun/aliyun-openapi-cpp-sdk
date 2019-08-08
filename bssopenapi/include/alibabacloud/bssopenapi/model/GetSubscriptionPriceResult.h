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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICERESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICERESULT_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT GetSubscriptionPriceResult
    : public ServiceResult {
public:
  struct Data {
    struct ModuleDetail {
      float unitPrice;
      std::string moduleCode;
      float costAfterDiscount;
      float originalCost;
      float invoiceDiscount;
    };
    struct PromotionDetail {
      std::string promotionName;
      std::string promotionDesc;
      long promotionId;
    };
    float originalPrice;
    float discountPrice;
    std::string currency;
    int quantity;
    std::vector<ModuleDetail> moduleDetails;
    std::vector<PromotionDetail> promotionDetails;
    float tradePrice;
  };

  GetSubscriptionPriceResult();
  explicit GetSubscriptionPriceResult(const std::string &payload);
  ~GetSubscriptionPriceResult();
  std::string getMessage() const;
  Data getData() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  Data data_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICERESULT_H_