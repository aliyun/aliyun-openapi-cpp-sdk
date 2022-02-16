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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWINSTANCERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowInstanceResult : public ServiceResult
			{
			public:
				struct ParentFlow
				{
					std::string flowId;
					std::string dependencyFlowId;
					bool meet;
					std::string dependencyInstanceId;
					std::string projectId;
					std::string flowInstanceId;
					long bizDate;
					std::string scheduleKey;
				};
				struct NodeInstanceItem
				{
					std::string status;
					std::string failAct;
					long endTime;
					std::string nodeName;
					std::string clusterId;
					std::string externalId;
					long gmtModified;
					std::string jobName;
					std::string projectId;
					long startTime;
					long duration;
					std::string maxRetry;
					std::string externalStatus;
					long gmtCreate;
					std::string type;
					std::string jobType;
					std::string externalInfo;
					int retries;
					std::string id;
					std::string retryInterval;
					std::string jobId;
					std::string hostName;
					bool pending;
				};


				DescribeFlowInstanceResult();
				explicit DescribeFlowInstanceResult(const std::string &payload);
				~DescribeFlowInstanceResult();
				std::string getStatus()const;
				bool getHasNodeFailed()const;
				long getEndTime()const;
				std::string getClusterId()const;
				std::string getLifecycle()const;
				long getGmtModified()const;
				std::string getProjectId()const;
				long getStartTime()const;
				std::string get_Namespace()const;
				long getDuration()const;
				std::string getFlowId()const;
				long getGmtCreate()const;
				std::string getGraph()const;
				long getScheduleTime()const;
				std::string getFlowName()const;
				std::string getId()const;
				std::string getLogArchiveLocation()const;
				std::string getCronExpression()const;
				std::vector<ParentFlow> getDependencyFlowList()const;
				std::vector<NodeInstanceItem> getNodeInstance()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				bool hasNodeFailed_;
				long endTime_;
				std::string clusterId_;
				std::string lifecycle_;
				long gmtModified_;
				std::string projectId_;
				long startTime_;
				std::string _namespace_;
				long duration_;
				std::string flowId_;
				long gmtCreate_;
				std::string graph_;
				long scheduleTime_;
				std::string flowName_;
				std::string id_;
				std::string logArchiveLocation_;
				std::string cronExpression_;
				std::vector<ParentFlow> dependencyFlowList_;
				std::vector<NodeInstanceItem> nodeInstance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWINSTANCERESULT_H_