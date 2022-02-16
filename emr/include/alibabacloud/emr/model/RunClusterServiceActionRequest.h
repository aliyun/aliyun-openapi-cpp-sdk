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

#ifndef ALIBABACLOUD_EMR_MODEL_RUNCLUSTERSERVICEACTIONREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_RUNCLUSTERSERVICEACTIONREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT RunClusterServiceActionRequest : public RpcServiceRequest
			{

			public:
				RunClusterServiceActionRequest();
				~RunClusterServiceActionRequest();

				std::vector<std::string> getHostGroupIdList()const;
				void setHostGroupIdList(const std::vector<std::string>& hostGroupIdList);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getServiceActionName()const;
				void setServiceActionName(const std::string& serviceActionName);
				bool getIsRolling()const;
				void setIsRolling(bool isRolling);
				int getTotlerateFailCount()const;
				void setTotlerateFailCount(int totlerateFailCount);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getExecuteStrategy()const;
				void setExecuteStrategy(const std::string& executeStrategy);
				bool getOnlyRestartStaleConfigNodes()const;
				void setOnlyRestartStaleConfigNodes(bool onlyRestartStaleConfigNodes);
				int getNodeCountPerBatch()const;
				void setNodeCountPerBatch(int nodeCountPerBatch);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getCustomCommand()const;
				void setCustomCommand(const std::string& customCommand);
				std::string getComponentNameList()const;
				void setComponentNameList(const std::string& componentNameList);
				std::string getComment()const;
				void setComment(const std::string& comment);
				std::string getCustomParams()const;
				void setCustomParams(const std::string& customParams);
				long getInterval()const;
				void setInterval(long interval);
				std::string getHostIdList()const;
				void setHostIdList(const std::string& hostIdList);
				bool getTurnOnMaintenanceMode()const;
				void setTurnOnMaintenanceMode(bool turnOnMaintenanceMode);

            private:
				std::vector<std::string> hostGroupIdList_;
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string serviceActionName_;
				bool isRolling_;
				int totlerateFailCount_;
				std::string serviceName_;
				std::string executeStrategy_;
				bool onlyRestartStaleConfigNodes_;
				int nodeCountPerBatch_;
				std::string clusterId_;
				std::string customCommand_;
				std::string componentNameList_;
				std::string comment_;
				std::string customParams_;
				long interval_;
				std::string hostIdList_;
				bool turnOnMaintenanceMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RUNCLUSTERSERVICEACTIONREQUEST_H_