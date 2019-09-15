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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEPRICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribePriceRequest : public RpcServiceRequest
			{
				struct Commodities
				{
					int amount;
					int period;
					std::string nodeType;
					std::string systemDiskCategory;
					int systemDiskSize;
					std::string instanceType;
					std::string networkType;
				};

			public:
				DescribePriceRequest();
				~DescribePriceRequest();

				std::vector<Commodities> getCommodities()const;
				void setCommodities(const std::vector<Commodities>& commodities);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPriceUnit()const;
				void setPriceUnit(const std::string& priceUnit);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::vector<Commodities> commodities_;
				std::string accessKeyId_;
				std::string priceUnit_;
				std::string chargeType_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEPRICEREQUEST_H_