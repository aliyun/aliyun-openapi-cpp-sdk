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

#ifndef ALIBABACLOUD_IOT_MODEL_LISTDISTRIBUTEDPRODUCTRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_LISTDISTRIBUTEDPRODUCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT ListDistributedProductResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Items
					{
						std::string targetRegion;
						std::string targetAliyunId;
						std::string sourceInstanceName;
						long gmtCreate;
						std::string sourceUid;
						std::string targetInstanceName;
						std::string targetInstanceId;
						std::string targetUid;
						std::string sourceInstanceId;
						std::string sourceRegion;
						std::string productKey;
					};
					int total;
					std::vector<Items> info;
				};


				ListDistributedProductResult();
				explicit ListDistributedProductResult(const std::string &payload);
				~ListDistributedProductResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_LISTDISTRIBUTEDPRODUCTRESULT_H_