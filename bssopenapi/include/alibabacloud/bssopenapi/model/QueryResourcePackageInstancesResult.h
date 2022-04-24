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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryResourcePackageInstancesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Instance
					{
						std::string status;
						std::string instanceId;
						std::string effectiveTime;
						std::string expiryTime;
						std::string totalAmount;
						std::string remark;
						std::string remainingAmountUnit;
						std::string packageType;
						std::string deductType;
						std::string totalAmountUnit;
						std::string region;
						std::vector<std::string> applicableProducts;
						std::string remainingAmount;
					};
					std::vector<Instance> instances;
					std::string totalCount;
					std::string pageNum;
					std::string pageSize;
					std::string hostId;
				};


				QueryResourcePackageInstancesResult();
				explicit QueryResourcePackageInstancesResult(const std::string &payload);
				~QueryResourcePackageInstancesResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getTotal()const;
				Data getData()const;
				int getPage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int total_;
				Data data_;
				int page_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESRESULT_H_