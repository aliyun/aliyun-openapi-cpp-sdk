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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeActiveOperationTaskResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					int status;
					std::string createdTime;
					std::string deadline;
					std::string startTime;
					std::string insName;
					std::string dbType;
					std::string taskParams;
					std::string modifiedTime;
					std::string taskType;
					std::string prepareInterval;
					std::string region;
					int id;
					std::string resultInfo;
					std::string switchTime;
				};


				DescribeActiveOperationTaskResult();
				explicit DescribeActiveOperationTaskResult(const std::string &payload);
				~DescribeActiveOperationTaskResult();
				int getTotalRecordCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKRESULT_H_