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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_DEREGISTERLOCATIONRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_DEREGISTERLOCATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/datalake/DataLakeExport.h>

namespace AlibabaCloud
{
	namespace DataLake
	{
		namespace Model
		{
			class ALIBABACLOUD_DATALAKE_EXPORT DeregisterLocationResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct StorageCollectTaskOperationResultListItem
					{
						std::string taskId;
						bool dlfCreated;
						std::string taskType;
						std::string errMessage;
						bool success;
						std::string errCode;
					};
					std::string locationId;
					std::vector<StorageCollectTaskOperationResultListItem> storageCollectTaskOperationResultList;
				};


				DeregisterLocationResult();
				explicit DeregisterLocationResult(const std::string &payload);
				~DeregisterLocationResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_DEREGISTERLOCATIONRESULT_H_