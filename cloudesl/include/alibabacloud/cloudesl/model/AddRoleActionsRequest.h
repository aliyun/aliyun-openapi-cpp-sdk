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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_ADDROLEACTIONSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_ADDROLEACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT AddRoleActionsRequest : public RpcServiceRequest
			{

			public:
				AddRoleActionsRequest();
				~AddRoleActionsRequest();

				std::string getRoleCode()const;
				void setRoleCode(const std::string& roleCode);
				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAccessControlLists()const;
				void setAccessControlLists(const std::string& accessControlLists);

            private:
				std::string roleCode_;
				std::string extraParams_;
				std::string clientToken_;
				std::string accessControlLists_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_ADDROLEACTIONSREQUEST_H_