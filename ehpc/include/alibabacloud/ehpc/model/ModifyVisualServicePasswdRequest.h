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

#ifndef ALIBABACLOUD_EHPC_MODEL_MODIFYVISUALSERVICEPASSWDREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_MODIFYVISUALSERVICEPASSWDREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT ModifyVisualServicePasswdRequest : public RpcServiceRequest
			{

			public:
				ModifyVisualServicePasswdRequest();
				~ModifyVisualServicePasswdRequest();

				std::string getRunasUserPassword()const;
				void setRunasUserPassword(const std::string& runasUserPassword);
				std::string getRunasUser()const;
				void setRunasUser(const std::string& runasUser);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPasswd()const;
				void setPasswd(const std::string& passwd);

            private:
				std::string runasUserPassword_;
				std::string runasUser_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string passwd_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_MODIFYVISUALSERVICEPASSWDREQUEST_H_