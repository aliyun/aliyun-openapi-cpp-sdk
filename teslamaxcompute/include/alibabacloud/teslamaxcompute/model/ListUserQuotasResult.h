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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_LISTUSERQUOTASRESULT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_LISTUSERQUOTASRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT ListUserQuotasResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Error
					{
						std::string message;
						std::string code;
						std::string timestamp;
					};
					struct Quotas
					{
						long parentid;
						long quotaid;
						std::string nick;
						std::string cluster;
						std::string region;
						std::string name;
					};
					Error error;
					std::vector<Quotas> detail;
				};


				ListUserQuotasResult();
				explicit ListUserQuotasResult(const std::string &payload);
				~ListUserQuotasResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_LISTUSERQUOTASRESULT_H_