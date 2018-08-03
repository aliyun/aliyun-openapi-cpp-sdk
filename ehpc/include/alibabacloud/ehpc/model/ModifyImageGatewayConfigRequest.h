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

#ifndef ALIBABACLOUD_EHPC_MODEL_MODIFYIMAGEGATEWAYCONFIGREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_MODIFYIMAGEGATEWAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ModifyImageGatewayConfigRequest : public RpcServiceRequest
			{
				struct Repo
				{
					std::string location;
					std::string auth;
					std::string uRL;
				};

			public:
				ModifyImageGatewayConfigRequest();
				~ModifyImageGatewayConfigRequest();

				std::string getDefaultRepoLocation()const;
				void setDefaultRepoLocation(const std::string& defaultRepoLocation);
				std::string getDBPassword()const;
				void setDBPassword(const std::string& dBPassword);
				std::vector<Repo> getRepo()const;
				void setRepo(const std::vector<Repo>& repo);
				std::string getDBType()const;
				void setDBType(const std::string& dBType);
				std::string getDBUsername()const;
				void setDBUsername(const std::string& dBUsername);
				std::string getDBServerInfo()const;
				void setDBServerInfo(const std::string& dBServerInfo);
				int getPullUpdateTimeout()const;
				void setPullUpdateTimeout(int pullUpdateTimeout);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getImageExpirationTimeout()const;
				void setImageExpirationTimeout(const std::string& imageExpirationTimeout);

            private:
				std::string defaultRepoLocation_;
				std::string dBPassword_;
				std::vector<Repo> repo_;
				std::string dBType_;
				std::string dBUsername_;
				std::string dBServerInfo_;
				int pullUpdateTimeout_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string imageExpirationTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_MODIFYIMAGEGATEWAYCONFIGREQUEST_H_