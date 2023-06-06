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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKLEAFRECORDPAGERESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKLEAFRECORDPAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeOnceTaskLeafRecordPageResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct OnceTasksItem
				{
					struct TaskImageInfo
					{
						std::string repoRegionId;
						std::string repoNamespace;
						std::string pod;
						std::string digest;
						std::string nodeName;
						std::string clusterId;
						std::string repoName;
						std::string nodeInstanceId;
						std::string image;
						std::string nodeIp;
						std::string appName;
						std::string clusterName;
						std::string tag;
						std::string regionId;
						std::string repoId;
					};
					std::string status;
					long progress;
					std::string taskId;
					long endTime;
					std::string statusText;
					long startTime;
					std::string finishCount;
					std::string totalCount;
					std::string target;
					TaskImageInfo taskImageInfo;
					std::string taskName;
					std::string taskType;
					std::string targetType;
					long realRunTime;
					std::string resultInfo;
					int finish;
				};


				DescribeOnceTaskLeafRecordPageResult();
				explicit DescribeOnceTaskLeafRecordPageResult(const std::string &payload);
				~DescribeOnceTaskLeafRecordPageResult();
				PageInfo getPageInfo()const;
				std::vector<OnceTasksItem> getOnceTasks()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<OnceTasksItem> onceTasks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKLEAFRECORDPAGERESULT_H_