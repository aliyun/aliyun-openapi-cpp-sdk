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

#ifndef ALIBABACLOUD_EHPC_MODEL_BINDACCOUNTTOCLUSTERUSERREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_BINDACCOUNTTOCLUSTERUSERREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT BindAccountToClusterUserRequest : public RpcServiceRequest
			{

			public:
				BindAccountToClusterUserRequest();
				~BindAccountToClusterUserRequest();

				std::string getUserPwd()const;
				void setUserPwd(const std::string& userPwd);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getAccountUid()const;
				void setAccountUid(const std::string& accountUid);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string userPwd_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string accountName_;
				std::string accountUid_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_BINDACCOUNTTOCLUSTERUSERREQUEST_H_