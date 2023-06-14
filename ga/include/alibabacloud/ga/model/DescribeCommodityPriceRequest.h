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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICEREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICEREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT DescribeCommodityPriceRequest : public RpcServiceRequest {
public:
	struct Orders {
		std::string commodityCode;
		std::string orderType;
		std::string chargeType;
		std::string pricingCycle;
		long duration;
		long quantity;
		struct ComponentsItem {
			std::string componentCode;
			struct PropertiesItem {
				std::string code;
				std::string value;
			};
			PropertiesItem propertiesItem;
			std::vector<PropertiesItem> properties;
		};
		ComponentsItem componentsItem;
		std::vector<ComponentsItem> components;
	};
	DescribeCommodityPriceRequest();
	~DescribeCommodityPriceRequest();
	std::string getPromotionOptionNo() const;
	void setPromotionOptionNo(const std::string &promotionOptionNo);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Orders> getOrders() const;
	void setOrders(const std::vector<Orders> &orders);

private:
	std::string promotionOptionNo_;
	std::string regionId_;
	std::vector<Orders> orders_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICEREQUEST_H_
