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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWJOBRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWJOBRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowJobResult : public ServiceResult
			{
			public:
				struct Resource
				{
					std::string path;
					std::string alias;
				};


				DescribeFlowJobResult();
				explicit DescribeFlowJobResult(const std::string &payload);
				~DescribeFlowJobResult();
				std::string getFailAct()const;
				std::string getCategoryId()const;
				std::string getDescription()const;
				std::string getMode()const;
				std::string getLastInstanceId()const;
				long getGmtModified()const;
				std::string getParams()const;
				int getMaxRetry()const;
				std::string getEditLockDetail()const;
				long getMaxRunningTimeSec()const;
				std::string getName()const;
				std::string getParamConf()const;
				std::vector<Resource> getResourceList()const;
				long getGmtCreate()const;
				std::string getType()const;
				std::string getEnvConf()const;
				std::string getMonitorConf()const;
				std::string getAdhoc()const;
				std::string getId()const;
				long getRetryInterval()const;
				std::string getRunConf()const;
				std::string getRetryPolicy()const;
				std::string getCustomVariables()const;
				std::string getAlertConf()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string failAct_;
				std::string categoryId_;
				std::string description_;
				std::string mode_;
				std::string lastInstanceId_;
				long gmtModified_;
				std::string params_;
				int maxRetry_;
				std::string editLockDetail_;
				long maxRunningTimeSec_;
				std::string name_;
				std::string paramConf_;
				std::vector<Resource> resourceList_;
				long gmtCreate_;
				std::string type_;
				std::string envConf_;
				std::string monitorConf_;
				std::string adhoc_;
				std::string id_;
				long retryInterval_;
				std::string runConf_;
				std::string retryPolicy_;
				std::string customVariables_;
				std::string alertConf_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWJOBRESULT_H_