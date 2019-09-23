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

#ifndef ALIBABACLOUD_ECS_MODEL_RUNCOMMANDREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_RUNCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT RunCommandRequest : public RpcServiceRequest
			{

			public:
				RunCommandRequest();
				~RunCommandRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getWorkingDir()const;
				void setWorkingDir(const std::string& workingDir);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getCommandContent()const;
				void setCommandContent(const std::string& commandContent);
				long getTimeout()const;
				void setTimeout(long timeout);
				std::string getFrequency()const;
				void setFrequency(const std::string& frequency);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getContentEncoding()const;
				void setContentEncoding(const std::string& contentEncoding);
				bool getKeepCommand()const;
				void setKeepCommand(bool keepCommand);
				bool getTimed()const;
				void setTimed(bool timed);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getInstanceId()const;
				void setInstanceId(const std::vector<std::string>& instanceId);
				std::string getName()const;
				void setName(const std::string& name);
				std::map<std::string, std::string> getParameters()const;
				void setParameters(const std::map<std::string, std::string>& parameters);
				bool getEnableParameter()const;
				void setEnableParameter(bool enableParameter);

            private:
				long resourceOwnerId_;
				std::string workingDir_;
				std::string description_;
				std::string type_;
				std::string commandContent_;
				long timeout_;
				std::string frequency_;
				std::string regionId_;
				std::string contentEncoding_;
				bool keepCommand_;
				bool timed_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::vector<std::string> instanceId_;
				std::string name_;
				std::map<std::string, std::string> parameters_;
				bool enableParameter_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_RUNCOMMANDREQUEST_H_