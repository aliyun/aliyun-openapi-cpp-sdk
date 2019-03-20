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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEVENTTARGETSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEVENTTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT PutEventTargetsRequest : public RpcServiceRequest
			{
				struct WebhookParameters
				{
					std::string protocol;
					std::string method;
					std::string id;
					std::string url;
				};
				struct ContactParameters
				{
					std::string level;
					std::string id;
					std::string contactGroupName;
				};
				struct SlsParameters
				{
					std::string project;
					std::string id;
					std::string region;
					std::string logStore;
				};
				struct FcParameters
				{
					std::string functionName;
					std::string serviceName;
					std::string id;
					std::string region;
				};
				struct MnsParameters
				{
					std::string id;
					std::string region;
					std::string queue;
				};

			public:
				PutEventTargetsRequest();
				~PutEventTargetsRequest();

				std::vector<WebhookParameters> getWebhookParameters()const;
				void setWebhookParameters(const std::vector<WebhookParameters>& webhookParameters);
				std::vector<ContactParameters> getContactParameters()const;
				void setContactParameters(const std::vector<ContactParameters>& contactParameters);
				std::vector<SlsParameters> getSlsParameters()const;
				void setSlsParameters(const std::vector<SlsParameters>& slsParameters);
				std::vector<FcParameters> getFcParameters()const;
				void setFcParameters(const std::vector<FcParameters>& fcParameters);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::vector<MnsParameters> getMnsParameters()const;
				void setMnsParameters(const std::vector<MnsParameters>& mnsParameters);

            private:
				std::vector<WebhookParameters> webhookParameters_;
				std::vector<ContactParameters> contactParameters_;
				std::vector<SlsParameters> slsParameters_;
				std::vector<FcParameters> fcParameters_;
				std::string ruleName_;
				std::vector<MnsParameters> mnsParameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEVENTTARGETSREQUEST_H_