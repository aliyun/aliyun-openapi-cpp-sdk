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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBELIBRARYINSTALLTASKDETAILRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBELIBRARYINSTALLTASKDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeLibraryInstallTaskDetailResult : public ServiceResult
			{
			public:


				DescribeLibraryInstallTaskDetailResult();
				explicit DescribeLibraryInstallTaskDetailResult(const std::string &payload);
				~DescribeLibraryInstallTaskDetailResult();
				std::string getTaskId()const;
				std::string getLibraryBizId()const;
				long getEndTime()const;
				std::string getTaskGroupId()const;
				long getExecuteTime()const;
				int getTaskProcess()const;
				std::string getClusterBizId()const;
				std::string getTaskType()const;
				long getStartTime()const;
				std::string getHostname()const;
				std::string getTaskStatus()const;
				std::string getDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string taskId_;
				std::string libraryBizId_;
				long endTime_;
				std::string taskGroupId_;
				long executeTime_;
				int taskProcess_;
				std::string clusterBizId_;
				std::string taskType_;
				long startTime_;
				std::string hostname_;
				std::string taskStatus_;
				std::string detail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBELIBRARYINSTALLTASKDETAILRESULT_H_