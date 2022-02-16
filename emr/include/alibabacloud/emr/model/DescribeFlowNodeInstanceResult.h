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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowNodeInstanceResult : public ServiceResult
			{
			public:


				DescribeFlowNodeInstanceResult();
				explicit DescribeFlowNodeInstanceResult(const std::string &payload);
				~DescribeFlowNodeInstanceResult();
				std::string getFailAct()const;
				long getEndTime()const;
				std::string getNodeName()const;
				long getGmtModified()const;
				std::string getJobName()const;
				std::string getFlowId()const;
				std::string getExternalStatus()const;
				std::string getParamConf()const;
				std::string getExternalInfo()const;
				int getRetries()const;
				std::string getClusterName()const;
				bool getAdhoc()const;
				std::string getJobId()const;
				std::string getJobParams()const;
				std::string getHostName()const;
				std::string getStatus()const;
				std::string getClusterId()const;
				std::string getExternalId()const;
				std::string getMode()const;
				std::string getProjectId()const;
				long getStartTime()const;
				std::string getFlowInstanceId()const;
				long getDuration()const;
				std::string getMaxRetry()const;
				std::string getExternalSubId()const;
				long getGmtCreate()const;
				std::string getType()const;
				std::string getJobType()const;
				std::string getEnvConf()const;
				std::string getExternalChildIds()const;
				std::string getMonitorConf()const;
				std::string getId()const;
				std::string getRetryInterval()const;
				std::string getRunConf()const;
				std::string getRetryPolicy()const;
				bool getPending()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string failAct_;
				long endTime_;
				std::string nodeName_;
				long gmtModified_;
				std::string jobName_;
				std::string flowId_;
				std::string externalStatus_;
				std::string paramConf_;
				std::string externalInfo_;
				int retries_;
				std::string clusterName_;
				bool adhoc_;
				std::string jobId_;
				std::string jobParams_;
				std::string hostName_;
				std::string status_;
				std::string clusterId_;
				std::string externalId_;
				std::string mode_;
				std::string projectId_;
				long startTime_;
				std::string flowInstanceId_;
				long duration_;
				std::string maxRetry_;
				std::string externalSubId_;
				long gmtCreate_;
				std::string type_;
				std::string jobType_;
				std::string envConf_;
				std::string externalChildIds_;
				std::string monitorConf_;
				std::string id_;
				std::string retryInterval_;
				std::string runConf_;
				std::string retryPolicy_;
				bool pending_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCERESULT_H_