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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYTASKSRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeHistoryTasksResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string status;
					float progress;
					std::string taskId;
					std::string endTime;
					std::string instanceId;
					std::string startTime;
					std::string product;
					std::string actionInfo;
					std::string reasonCode;
					std::string dbType;
					std::string taskDetail;
					std::string callerUid;
					std::string instanceName;
					std::string uid;
					std::string callerSource;
					std::string currentStepName;
					std::string taskType;
					std::string regionId;
					int remainTime;
					std::string instanceType;
				};


				DescribeHistoryTasksResult();
				explicit DescribeHistoryTasksResult(const std::string &payload);
				~DescribeHistoryTasksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYTASKSRESULT_H_