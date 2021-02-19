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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SENDTASKMETACALLBACKREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SENDTASKMETACALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT SendTaskMetaCallbackRequest : public RpcServiceRequest
			{

			public:
				SendTaskMetaCallbackRequest();
				~SendTaskMetaCallbackRequest();

				std::string getCode()const;
				void setCode(const std::string& code);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::vector<std::string> getResources()const;
				void setResources(const std::vector<std::string>& resources);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getConnectionInfo()const;
				void setConnectionInfo(const std::string& connectionInfo);
				std::string getTaskEnvParam()const;
				void setTaskEnvParam(const std::string& taskEnvParam);
				std::string getSubType()const;
				void setSubType(const std::string& subType);
				long getTenantId()const;
				void setTenantId(long tenantId);
				std::string getUser()const;
				void setUser(const std::string& user);

            private:
				std::string code_;
				long endTime_;
				std::vector<std::string> resources_;
				long startTime_;
				std::string type_;
				std::string connectionInfo_;
				std::string taskEnvParam_;
				std::string subType_;
				long tenantId_;
				std::string user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SENDTASKMETACALLBACKREQUEST_H_