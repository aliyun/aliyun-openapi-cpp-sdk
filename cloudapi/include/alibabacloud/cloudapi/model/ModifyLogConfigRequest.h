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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYLOGCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT ModifyLogConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyLogConfigRequest();
				~ModifyLogConfigRequest();

				std::string getSlsLogStore()const;
				void setSlsLogStore(const std::string& slsLogStore);
				std::string getLogType()const;
				void setLogType(const std::string& logType);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSlsProject()const;
				void setSlsProject(const std::string& slsProject);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string slsLogStore_;
				std::string logType_;
				std::string securityToken_;
				std::string regionId_;
				std::string slsProject_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYLOGCONFIGREQUEST_H_