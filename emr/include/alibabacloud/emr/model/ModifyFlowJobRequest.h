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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYFLOWJOBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYFLOWJOBREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyFlowJobRequest : public RpcServiceRequest
			{
				struct ResourceList
				{
					std::string path;
					std::string alias;
				};

			public:
				ModifyFlowJobRequest();
				~ModifyFlowJobRequest();

				std::string getRunConf()const;
				void setRunConf(const std::string& runConf);
				std::string getEnvConf()const;
				void setEnvConf(const std::string& envConf);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getParamConf()const;
				void setParamConf(const std::string& paramConf);
				std::vector<ResourceList> getResourceList()const;
				void setResourceList(const std::vector<ResourceList>& resourceList);
				std::string getFailAct()const;
				void setFailAct(const std::string& failAct);
				std::string getCustomVariables()const;
				void setCustomVariables(const std::string& customVariables);
				std::string getMode()const;
				void setMode(const std::string& mode);
				long getRetryInterval()const;
				void setRetryInterval(long retryInterval);
				std::string getMonitorConf()const;
				void setMonitorConf(const std::string& monitorConf);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getId()const;
				void setId(const std::string& id);
				int getMaxRetry()const;
				void setMaxRetry(int maxRetry);
				std::string getAlertConf()const;
				void setAlertConf(const std::string& alertConf);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string runConf_;
				std::string envConf_;
				std::string description_;
				std::string clusterId_;
				std::string params_;
				std::string paramConf_;
				std::vector<ResourceList> resourceList_;
				std::string failAct_;
				std::string customVariables_;
				std::string mode_;
				long retryInterval_;
				std::string monitorConf_;
				std::string regionId_;
				std::string name_;
				std::string id_;
				int maxRetry_;
				std::string alertConf_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYFLOWJOBREQUEST_H_