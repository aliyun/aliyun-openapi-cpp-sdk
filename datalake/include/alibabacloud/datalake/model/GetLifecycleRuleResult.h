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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_GETLIFECYCLERULERESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_GETLIFECYCLERULERESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT GetLifecycleRuleResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Workflow
					{
						std::string latestInstanceStatus;
						std::string latestInstanceId;
						std::string latestEndTime;
						std::string latestStartTime;
					};
					struct WorkflowInstance
					{
						struct RuntimeLogsItem
						{
							std::string logSummary;
							std::string gmtCreate;
							std::string instanceId;
							std::string bizTime;
							std::string logContent;
							std::string logType;
							std::string logId;
						};
						std::string status;
						std::vector<RuntimeLogsItem> runtimeLogs;
						long endTime;
						std::string externalInstanceId;
						long startTime;
						int batchProgress;
						std::string dlfWorkflowId;
					};
					std::string description;
					int bindCount;
					std::string config;
					int iaDays;
					int coldArchiveDays;
					std::string gmtModified;
					Workflow workflow;
					int archiveDays;
					std::string resourceType;
					std::string ruleType;
					WorkflowInstance workflowInstance;
					std::string workflowId;
					std::string catalogId;
					std::string name;
					std::string gmtCreate;
					std::string bizId;
					std::string scheduleStatus;
				};


				GetLifecycleRuleResult();
				explicit GetLifecycleRuleResult(const std::string &payload);
				~GetLifecycleRuleResult();
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
#endif // !ALIBABACLOUD_DATALAKE_MODEL_GETLIFECYCLERULERESULT_H_