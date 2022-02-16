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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowResult : public ServiceResult
			{
			public:
				struct ParentFlow
				{
					std::string projectName;
					std::string projectId;
					std::string parentFlowName;
					std::string parentFlowId;
				};


				DescribeFlowResult();
				explicit DescribeFlowResult(const std::string &payload);
				~DescribeFlowResult();
				std::string getCategoryId()const;
				std::string getDescription()const;
				long getGmtModified()const;
				bool getPeriodic()const;
				std::string getCronExpr()const;
				std::string getName()const;
				std::string getAlertDingDingGroupBizId()const;
				std::string getAlertUserGroupBizId()const;
				std::string getLogArchiveLocation()const;
				long getEndSchedule()const;
				std::string getHostName()const;
				std::string getStatus()const;
				long getStartSchedule()const;
				std::string getClusterId()const;
				std::string getLifecycle()const;
				std::string get_Namespace()const;
				std::string getEditLockDetail()const;
				long getGmtCreate()const;
				std::string getType()const;
				std::string getGraph()const;
				std::string getId()const;
				std::string getApplication()const;
				std::vector<ParentFlow> getParentFlowList()const;
				bool getCreateCluster()const;
				std::string getAlertConf()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string categoryId_;
				std::string description_;
				long gmtModified_;
				bool periodic_;
				std::string cronExpr_;
				std::string name_;
				std::string alertDingDingGroupBizId_;
				std::string alertUserGroupBizId_;
				std::string logArchiveLocation_;
				long endSchedule_;
				std::string hostName_;
				std::string status_;
				long startSchedule_;
				std::string clusterId_;
				std::string lifecycle_;
				std::string _namespace_;
				std::string editLockDetail_;
				long gmtCreate_;
				std::string type_;
				std::string graph_;
				std::string id_;
				std::string application_;
				std::vector<ParentFlow> parentFlowList_;
				bool createCluster_;
				std::string alertConf_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWRESULT_H_