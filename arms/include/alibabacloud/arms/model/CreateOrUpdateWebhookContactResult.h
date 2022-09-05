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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEWEBHOOKCONTACTRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEWEBHOOKCONTACTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateWebhookContactResult : public ServiceResult
			{
			public:
				struct WebhookContact
				{
					struct Webhook
					{
						std::string bizParams;
						std::string bizHeaders;
						std::string recoverBody;
						std::string method;
						std::string body;
						std::string url;
					};
					float webhookId;
					std::string webhookName;
					Webhook webhook;
				};


				CreateOrUpdateWebhookContactResult();
				explicit CreateOrUpdateWebhookContactResult(const std::string &payload);
				~CreateOrUpdateWebhookContactResult();
				WebhookContact getWebhookContact()const;

			protected:
				void parse(const std::string &payload);
			private:
				WebhookContact webhookContact_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEWEBHOOKCONTACTRESULT_H_