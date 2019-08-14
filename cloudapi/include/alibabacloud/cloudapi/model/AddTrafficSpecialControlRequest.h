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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_ADDTRAFFICSPECIALCONTROLREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_ADDTRAFFICSPECIALCONTROLREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAPI_EXPORT AddTrafficSpecialControlRequest : public RpcServiceRequest
			{

			public:
				AddTrafficSpecialControlRequest();
				~AddTrafficSpecialControlRequest();

				std::string getTrafficControlId()const;
				void setTrafficControlId(const std::string& trafficControlId);
				std::string getSpecialKey()const;
				void setSpecialKey(const std::string& specialKey);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getTrafficValue()const;
				void setTrafficValue(int trafficValue);
				std::string getSpecialType()const;
				void setSpecialType(const std::string& specialType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string trafficControlId_;
				std::string specialKey_;
				std::string securityToken_;
				int trafficValue_;
				std::string specialType_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_ADDTRAFFICSPECIALCONTROLREQUEST_H_