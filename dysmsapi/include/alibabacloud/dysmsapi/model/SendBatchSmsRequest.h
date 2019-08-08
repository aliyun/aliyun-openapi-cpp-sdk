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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_SENDBATCHSMSREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_SENDBATCHSMSREQUEST_H_

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
			class ALIBABACLOUD_DYSMSAPI_EXPORT SendBatchSmsRequest : public RpcServiceRequest
			{

			public:
				SendBatchSmsRequest();
				~SendBatchSmsRequest();

				std::string getTemplateParamJson()const;
				void setTemplateParamJson(const std::string& templateParamJson);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSmsUpExtendCodeJson()const;
				void setSmsUpExtendCodeJson(const std::string& smsUpExtendCodeJson);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSignNameJson()const;
				void setSignNameJson(const std::string& signNameJson);
				std::string getTemplateCode()const;
				void setTemplateCode(const std::string& templateCode);
				std::string getPhoneNumberJson()const;
				void setPhoneNumberJson(const std::string& phoneNumberJson);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string templateParamJson_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string smsUpExtendCodeJson_;
				long ownerId_;
				std::string signNameJson_;
				std::string templateCode_;
				std::string phoneNumberJson_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_SENDBATCHSMSREQUEST_H_