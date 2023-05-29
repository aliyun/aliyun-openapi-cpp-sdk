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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeProductResult : public ServiceResult
			{
			public:
				struct ShopInfo
				{
					struct WangWang
					{
						std::string userName;
						std::string remark;
					};
					std::vector<WangWang> wangWangs;
					std::vector<std::string> telephones;
					std::string emails;
					long id;
					std::string name;
				};
				struct ProductSku
				{
					struct OrderPeriod
					{
						std::string periodType;
						std::string name;
					};
					struct Module
					{
						struct Property
						{
							struct PropertyValue
							{
								std::string type;
								std::string min;
								std::string max;
								std::string displayName;
								std::string value;
								std::string step;
								std::string remark;
							};
							std::vector<Property::PropertyValue> propertyValues;
							std::string key;
							std::string displayUnit;
							std::string showType;
							std::string name;
						};
						std::string id;
						std::vector<Module::Property> properties;
						std::string code;
						std::string name;
					};
					std::string constraints;
					std::vector<ProductSku::Module> modules;
					std::string chargeType;
					std::vector<ProductSku::OrderPeriod> orderPeriods;
					bool hidden;
					std::string code;
					std::string name;
				};
				struct ProductExtra
				{
					int order;
					std::string type;
					std::string label;
					std::string values;
					std::string key;
				};


				DescribeProductResult();
				explicit DescribeProductResult(const std::string &payload);
				~DescribeProductResult();
				long getFrontCategoryId()const;
				std::string getStatus()const;
				std::string getDescription()const;
				ShopInfo getShopInfo()const;
				std::vector<ProductSku> getProductSkus()const;
				long getUseCount()const;
				long getGmtModified()const;
				long getGmtCreated()const;
				std::string getCode()const;
				std::string getShortDescription()const;
				std::string getName()const;
				long getSupplierPk()const;
				std::string getType()const;
				float getScore()const;
				std::string getAuditStatus()const;
				std::string getAuditFailMsg()const;
				std::vector<ProductExtra> getProductExtras()const;
				long getAuditTime()const;
				std::string getPicUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				long frontCategoryId_;
				std::string status_;
				std::string description_;
				ShopInfo shopInfo_;
				std::vector<ProductSku> productSkus_;
				long useCount_;
				long gmtModified_;
				long gmtCreated_;
				std::string code_;
				std::string shortDescription_;
				std::string name_;
				long supplierPk_;
				std::string type_;
				float score_;
				std::string auditStatus_;
				std::string auditFailMsg_;
				std::vector<ProductExtra> productExtras_;
				long auditTime_;
				std::string picUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTRESULT_H_