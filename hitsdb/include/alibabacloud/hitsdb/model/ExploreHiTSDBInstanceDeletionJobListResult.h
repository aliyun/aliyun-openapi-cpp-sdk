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

#ifndef ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDELETIONJOBLISTRESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDELETIONJOBLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT ExploreHiTSDBInstanceDeletionJobListResult : public ServiceResult
			{
			public:
				struct JobItem
				{
					std::string status;
					long endTime;
					std::string instanceId;
					std::string ip;
					int port;
					long startTime;
					long jobEndTime;
					std::string metric;
					long jobCreationTime;
					long jobStartTime;
					long id;
					std::string tags;
					std::string jobTyp;
				};


				ExploreHiTSDBInstanceDeletionJobListResult();
				explicit ExploreHiTSDBInstanceDeletionJobListResult(const std::string &payload);
				~ExploreHiTSDBInstanceDeletionJobListResult();
				int getPageSize()const;
				int getPageNumber()const;
				long getTotal()const;
				std::vector<JobItem> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				long total_;
				std::vector<JobItem> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDELETIONJOBLISTRESULT_H_