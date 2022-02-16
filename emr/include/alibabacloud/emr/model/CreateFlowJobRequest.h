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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEFLOWJOBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEFLOWJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateFlowJobRequest : public RpcServiceRequest
			{
			public:
				struct ResourceList
				{
					std::string path;
					std::string alias;
				};

			public:
				CreateFlowJobRequest();
				~CreateFlowJobRequest();

				std::string getRetryPolicy()const;
				void setRetryPolicy(const std::string& retryPolicy);
				std::string getRunConf()const;
				void setRunConf(const std::string& runConf);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getParamConf()const;
				void setParamConf(const std::string& paramConf);
				std::vector<ResourceList> getResourceList()const;
				void setResourceList(const std::vector<ResourceList>& resourceList);
				std::string getFailAct()const;
				void setFailAct(const std::string& failAct);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getMonitorConf()const;
				void setMonitorConf(const std::string& monitorConf);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getMaxRetry()const;
				void setMaxRetry(int maxRetry);
				std::string getAlertConf()const;
				void setAlertConf(const std::string& alertConf);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getEnvConf()const;
				void setEnvConf(const std::string& envConf);
				long getMaxRunningTimeSec()const;
				void setMaxRunningTimeSec(long maxRunningTimeSec);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getCustomVariables()const;
				void setCustomVariables(const std::string& customVariables);
				long getRetryInterval()const;
				void setRetryInterval(long retryInterval);
				std::string getName()const;
				void setName(const std::string& name);
				bool getAdhoc()const;
				void setAdhoc(bool adhoc);
				std::string getParentCategory()const;
				void setParentCategory(const std::string& parentCategory);

            private:
				std::string retryPolicy_;
				std::string runConf_;
				std::string description_;
				std::string type_;
				std::string paramConf_;
				std::vector<ResourceList> resourceList_;
				std::string failAct_;
				std::string mode_;
				std::string monitorConf_;
				std::string regionId_;
				int maxRetry_;
				std::string alertConf_;
				std::string projectId_;
				std::string envConf_;
				long maxRunningTimeSec_;
				std::string clusterId_;
				std::string params_;
				std::string customVariables_;
				long retryInterval_;
				std::string name_;
				bool adhoc_;
				std::string parentCategory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEFLOWJOBREQUEST_H_