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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEALERTCONTACTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEALERTCONTACTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateAlertContactRequest : public RpcServiceRequest
			{

			public:
				CreateAlertContactRequest();
				~CreateAlertContactRequest();

				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getPhoneNum()const;
				void setPhoneNum(const std::string& phoneNum);
				std::string getDingRobotWebhookUrl()const;
				void setDingRobotWebhookUrl(const std::string& dingRobotWebhookUrl);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				bool getSystemNoc()const;
				void setSystemNoc(bool systemNoc);

            private:
				std::string contactName_;
				std::string phoneNum_;
				std::string dingRobotWebhookUrl_;
				std::string email_;
				bool systemNoc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEALERTCONTACTREQUEST_H_