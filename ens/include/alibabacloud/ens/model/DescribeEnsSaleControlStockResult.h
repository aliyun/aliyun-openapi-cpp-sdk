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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEENSSALECONTROLSTOCKRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEENSSALECONTROLSTOCKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeEnsSaleControlStockResult : public ServiceResult
			{
			public:
				struct SaleControlItem
				{
					struct SaleControlItemsItem
					{
						struct SaleControlItem1
						{
							struct BasicSaleControl
							{
								struct ModuleValue2
								{
									std::string moduleMaxValue;
									std::string moduleMinValue;
								};
								ModuleValue2 moduleValue2;
								std::string stockValue;
							};
							struct ConditionSaleControlItem
							{
								struct ConditionControl
								{
									std::string conditionControlModuleCode;
									std::string conditionControlModuleValue;
								};
								struct ModuleValue
								{
									std::string moduleMaxValue;
									std::string moduleMinValue;
								};
								std::string stockValue;
								ConditionControl conditionControl;
								ModuleValue moduleValue;
							};
							BasicSaleControl basicSaleControl;
							std::vector<ConditionSaleControlItem> conditionSaleControl;
						};
						SaleControlItem1 saleControlItem1;
						std::string moduleCode;
					};
					std::vector<SaleControlItem::SaleControlItemsItem> saleControlItems;
					std::string orderType;
					std::string commodityCode;
				};


				DescribeEnsSaleControlStockResult();
				explicit DescribeEnsSaleControlStockResult(const std::string &payload);
				~DescribeEnsSaleControlStockResult();
				std::vector<SaleControlItem> getSaleControl()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SaleControlItem> saleControl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEENSSALECONTROLSTOCKRESULT_H_