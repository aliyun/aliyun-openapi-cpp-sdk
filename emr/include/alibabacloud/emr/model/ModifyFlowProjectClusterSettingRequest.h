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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYFLOWPROJECTCLUSTERSETTINGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYFLOWPROJECTCLUSTERSETTINGREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyFlowProjectClusterSettingRequest : public RpcServiceRequest
			{

			public:
				ModifyFlowProjectClusterSettingRequest();
				~ModifyFlowProjectClusterSettingRequest();

				std::vector<std::string> getUserList()const;
				void setUserList(const std::vector<std::string>& userList);
				std::vector<std::string> getHostList()const;
				void setHostList(const std::vector<std::string>& hostList);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getDefaultQueue()const;
				void setDefaultQueue(const std::string& defaultQueue);
				std::string getDefaultUser()const;
				void setDefaultUser(const std::string& defaultUser);
				std::vector<std::string> getQueueList()const;
				void setQueueList(const std::vector<std::string>& queueList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::vector<std::string> userList_;
				std::vector<std::string> hostList_;
				std::string clusterId_;
				std::string defaultQueue_;
				std::string defaultUser_;
				std::vector<std::string> queueList_;
				std::string regionId_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYFLOWPROJECTCLUSTERSETTINGREQUEST_H_