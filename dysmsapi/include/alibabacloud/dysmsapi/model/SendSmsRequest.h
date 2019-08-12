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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_SENDSMSREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_SENDSMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT SendSmsRequest : public RpcServiceRequest
			{

			public:
				SendSmsRequest();
				~SendSmsRequest();

				std::string getSmsUpExtendCode()const;
				void setSmsUpExtendCode(const std::string& smsUpExtendCode);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSignName()const;
				void setSignName(const std::string& signName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getPhoneNumbers()const;
				void setPhoneNumbers(const std::string& phoneNumbers);
				std::string getOutId()const;
				void setOutId(const std::string& outId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateCode()const;
				void setTemplateCode(const std::string& templateCode);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTemplateParam()const;
				void setTemplateParam(const std::string& templateParam);

            private:
				std::string smsUpExtendCode_;
				long resourceOwnerId_;
				std::string signName_;
				std::string resourceOwnerAccount_;
				std::string phoneNumbers_;
				std::string outId_;
				long ownerId_;
				std::string templateCode_;
				std::string accessKeyId_;
				std::string templateParam_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_SENDSMSREQUEST_H_