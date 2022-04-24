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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryOrdersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Order
					{
						std::string afterTaxAmount;
						std::string productCode;
						std::string createTime;
						std::string productType;
						std::string relatedOrderId;
						std::string paymentCurrency;
						std::string paymentTime;
						std::string tax;
						std::string orderId;
						std::string subscriptionType;
						std::string pretaxGrossAmount;
						std::string orderType;
						std::string pretaxAmount;
						std::string currency;
						std::string commodityCode;
						std::string paymentStatus;
						std::string pretaxAmountLocal;
					};
					int totalCount;
					int pageNum;
					int pageSize;
					std::vector<Order> orderList;
					std::string hostName;
				};


				QueryOrdersResult();
				explicit QueryOrdersResult(const std::string &payload);
				~QueryOrdersResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSRESULT_H_