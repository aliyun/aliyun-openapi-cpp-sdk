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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryAvailableInstancesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Instance
					{
						std::string status;
						std::string expectedReleaseTime;
						int renewalDuration;
						std::string endTime;
						std::string instanceID;
						std::string productCode;
						std::string createTime;
						std::string productType;
						std::string renewStatus;
						std::string subscriptionType;
						long ownerId;
						std::string releaseTime;
						long sellerId;
						std::string renewalDurationUnit;
						std::string region;
						std::string seller;
						std::string subStatus;
						std::string stopTime;
					};
					int totalCount;
					int pageNum;
					int pageSize;
					std::vector<Instance> instanceList;
				};


				QueryAvailableInstancesResult();
				explicit QueryAvailableInstancesResult(const std::string &payload);
				~QueryAvailableInstancesResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESRESULT_H_