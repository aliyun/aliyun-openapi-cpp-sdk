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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEINSTANCERESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEINSTANCERESULT_H_

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
			class ALIBABACLOUD_MARKET_EXPORT DescribeInstanceResult : public ServiceResult
			{
			public:
				struct RelationalData
				{
					std::string serviceStatus;
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


				DescribeInstanceResult();
				explicit DescribeInstanceResult(const std::string &payload);
				~DescribeInstanceResult();
				std::string getStatus()const;
				std::string getLicenseCode()const;
				std::string getProductName()const;
				std::string getActiveAddress()const;
				long getInstanceId()const;
				long getEndOn()const;
				std::string getProductCode()const;
				std::vector<Module> getModules()const;
				RelationalData getRelationalData()const;
				std::string getAppJson()const;
				std::string getProductType()const;
				long getOrderId()const;
				std::string getConstraints()const;
				std::string getExtendJson()const;
				std::string getAutoRenewal()const;
				bool getIsTrial()const;
				std::string getComponentJson()const;
				std::string getSupplierName()const;
				std::string getProductSkuCode()const;
				std::string getHostJson()const;
				long getCreatedOn()const;
				long getBeganOn()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string licenseCode_;
				std::string productName_;
				std::string activeAddress_;
				long instanceId_;
				long endOn_;
				std::string productCode_;
				std::vector<Module> modules_;
				RelationalData relationalData_;
				std::string appJson_;
				std::string productType_;
				long orderId_;
				std::string constraints_;
				std::string extendJson_;
				std::string autoRenewal_;
				bool isTrial_;
				std::string componentJson_;
				std::string supplierName_;
				std::string productSkuCode_;
				std::string hostJson_;
				long createdOn_;
				long beganOn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEINSTANCERESULT_H_