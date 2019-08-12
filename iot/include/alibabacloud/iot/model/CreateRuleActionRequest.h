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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATERULEACTIONREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATERULEACTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT CreateRuleActionRequest : public RpcServiceRequest
			{

			public:
				CreateRuleActionRequest();
				~CreateRuleActionRequest();

				std::string getConfiguration()const;
				void setConfiguration(const std::string& configuration);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				long getRuleId()const;
				void setRuleId(long ruleId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getErrorActionFlag()const;
				void setErrorActionFlag(bool errorActionFlag);

            private:
				std::string configuration_;
				std::string iotInstanceId_;
				long ruleId_;
				std::string type_;
				std::string accessKeyId_;
				bool errorActionFlag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATERULEACTIONREQUEST_H_