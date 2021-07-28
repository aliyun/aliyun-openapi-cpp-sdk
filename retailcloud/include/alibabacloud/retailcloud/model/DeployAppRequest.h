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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DEPLOYAPPREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DEPLOYAPPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DeployAppRequest : public RpcServiceRequest
			{

			public:
				DeployAppRequest();
				~DeployAppRequest();

				std::string getDeployPacketUrl()const;
				void setDeployPacketUrl(const std::string& deployPacketUrl);
				int getTotalPartitions()const;
				void setTotalPartitions(int totalPartitions);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getEnvId()const;
				void setEnvId(long envId);
				std::string getUpdateStrategyType()const;
				void setUpdateStrategyType(const std::string& updateStrategyType);
				std::string getPauseType()const;
				void setPauseType(const std::string& pauseType);
				long getDeployPacketId()const;
				void setDeployPacketId(long deployPacketId);
				std::vector<std::string> getContainerImageList()const;
				void setContainerImageList(const std::vector<std::string>& containerImageList);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<std::string> getInitContainerImageList()const;
				void setInitContainerImageList(const std::vector<std::string>& initContainerImageList);
				std::string getDefaultPacketOfAppGroup()const;
				void setDefaultPacketOfAppGroup(const std::string& defaultPacketOfAppGroup);
				bool getArmsFlag()const;
				void setArmsFlag(bool armsFlag);

            private:
				std::string deployPacketUrl_;
				int totalPartitions_;
				std::string description_;
				long envId_;
				std::string updateStrategyType_;
				std::string pauseType_;
				long deployPacketId_;
				std::vector<std::string> containerImageList_;
				std::string name_;
				std::vector<std::string> initContainerImageList_;
				std::string defaultPacketOfAppGroup_;
				bool armsFlag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DEPLOYAPPREQUEST_H_