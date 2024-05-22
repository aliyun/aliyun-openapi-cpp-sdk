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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeActiveOperationTasksResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string createdTime;
					std::string impactEn;
					std::string changeLevelZh;
					std::string taskTypeZh;
					std::string dbVersion;
					std::string modifiedTime;
					std::string impactZh;
					std::string taskTypeEn;
					std::string taskType;
					std::string switchTime;
					std::string impact;
					long status;
					std::string currentAVZ;
					std::string deadline;
					std::string startTime;
					std::string insName;
					std::string changeLevel;
					std::string dbType;
					std::string insComment;
					std::string allowCancel;
					std::string changeLevelEn;
					std::string allowChange;
					std::vector<std::string> subInsNames;
					std::string prepareInterval;
					std::string region;
					long id;
					std::string resultInfo;
				};


				DescribeActiveOperationTasksResult();
				explicit DescribeActiveOperationTasksResult(const std::string &payload);
				~DescribeActiveOperationTasksResult();
				long getTotalRecordCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_