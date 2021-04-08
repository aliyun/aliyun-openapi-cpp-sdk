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

#ifndef ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBPASSWORDREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT ModifyDtsJobPasswordRequest : public RpcServiceRequest
			{

			public:
				ModifyDtsJobPasswordRequest();
				~ModifyDtsJobPasswordRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getEndpoint()const;
				void setEndpoint(const std::string& endpoint);
				std::string getDtsJobId()const;
				void setDtsJobId(const std::string& dtsJobId);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string password_;
				std::string endpoint_;
				std::string dtsJobId_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBPASSWORDREQUEST_H_