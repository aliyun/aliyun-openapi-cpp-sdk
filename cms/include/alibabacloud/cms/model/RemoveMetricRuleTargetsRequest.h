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

#ifndef ALIBABACLOUD_CMS_MODEL_REMOVEMETRICRULETARGETSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_REMOVEMETRICRULETARGETSREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT RemoveMetricRuleTargetsRequest : public RpcServiceRequest
			{

			public:
				RemoveMetricRuleTargetsRequest();
				~RemoveMetricRuleTargetsRequest();

				std::vector<std::string> getTargetIds()const;
				void setTargetIds(const std::vector<std::string>& targetIds);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::vector<std::string> getContactGroupTargetIds()const;
				void setContactGroupTargetIds(const std::vector<std::string>& contactGroupTargetIds);
				std::vector<std::string> getWebhookTargetIds()const;
				void setWebhookTargetIds(const std::vector<std::string>& webhookTargetIds);

            private:
				std::vector<std::string> targetIds_;
				std::string ruleName_;
				std::vector<std::string> contactGroupTargetIds_;
				std::vector<std::string> webhookTargetIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_REMOVEMETRICRULETARGETSREQUEST_H_