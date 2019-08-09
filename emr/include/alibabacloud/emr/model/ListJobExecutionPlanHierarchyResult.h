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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANHIERARCHYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANHIERARCHYRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListJobExecutionPlanHierarchyResult : public ServiceResult
			{
			public:
				struct HierarchyInfo
				{
					struct ExecutionPlan
					{
						int status;
						bool isCreateCluster;
						std::string cronExpr;
						int lastExeStatus;
						bool isInterruptWhenError;
						std::string name;
						long utcCreateTimestamp;
						std::string clusterTemplateId;
						bool isCycle;
						std::string version;
						std::string scheduleCycle;
						std::string regionId;
						std::string bizId;
						long utcModifiedTimestamp;
					};
					struct Job
					{
						int jobType;
						int jobFailAct;
						int maxRetry;
						int retryInterval;
						std::string bizId;
						std::string name;
						std::string envParam;
					};
					std::string parentId;
					ExecutionPlan executionPlan;
					std::string nodeBizType;
					std::string nodeType;
					std::string relateId;
					long id;
					Job job;
					std::string resourceOwnerId;
					int nodeStatus;
					std::string name;
					long utcCreateTimestamp;
					long utcModifiedTimestamp;
				};


				ListJobExecutionPlanHierarchyResult();
				explicit ListJobExecutionPlanHierarchyResult(const std::string &payload);
				~ListJobExecutionPlanHierarchyResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::string getErrMsg()const;
				int getPageNumber()const;
				std::vector<HierarchyInfo> getHierarchyInfos()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::string errMsg_;
				int pageNumber_;
				std::vector<HierarchyInfo> hierarchyInfos_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANHIERARCHYRESULT_H_