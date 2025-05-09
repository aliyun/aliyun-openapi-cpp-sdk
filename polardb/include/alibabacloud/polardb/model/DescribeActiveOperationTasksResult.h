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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeActiveOperationTasksResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string createdTime;
					int taskId;
					std::vector<std::string> dBNodeIds;
					std::string dBClusterId;
					std::string dBType;
					std::string impactEn;
					std::string changeLevelZh;
					std::string taskTypeZh;
					std::string dBVersion;
					std::string modifiedTime;
					std::string taskTypeEn;
					std::string impactZh;
					std::string taskType;
					std::string switchTime;
					int status;
					std::string impact;
					std::string currentAVZ;
					std::string deadline;
					std::string startTime;
					std::string changeLevel;
					std::string insComment;
					std::string changeLevelEn;
					long allowCancel;
					std::string taskParams;
					long allowChange;
					std::string prepareInterval;
					std::string region;
					std::string resultInfo;
				};


				DescribeActiveOperationTasksResult();
				explicit DescribeActiveOperationTasksResult(const std::string &payload);
				~DescribeActiveOperationTasksResult();
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
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSRESULT_H_