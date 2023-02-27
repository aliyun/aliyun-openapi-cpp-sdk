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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT ListLiveSnapshotJobsResult : public ServiceResult
			{
			public:
				struct JobInfo
				{
					struct SnapshotOutput
					{
						std::string storageType;
						std::string endpoint;
						std::string bucket;
					};
					std::string status;
					int timeInterval;
					std::string createTime;
					std::string jobName;
					std::string templateName;
					SnapshotOutput snapshotOutput;
					std::string jobId;
					std::string templateId;
				};


				ListLiveSnapshotJobsResult();
				explicit ListLiveSnapshotJobsResult(const std::string &payload);
				~ListLiveSnapshotJobsResult();
				long getTotalCount()const;
				int getPageSize()const;
				std::string getSortBy()const;
				int getPageNo()const;
				std::vector<JobInfo> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				std::string sortBy_;
				int pageNo_;
				std::vector<JobInfo> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSRESULT_H_