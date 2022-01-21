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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULETARGETLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULETARGETLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeEventRuleTargetListResult : public ServiceResult
			{
			public:
				struct ContactParameter
				{
					std::string contactGroupName;
					std::string level;
					std::string id;
				};
				struct FCParameter
				{
					std::string functionName;
					std::string serviceName;
					std::string region;
					std::string id;
					std::string arn;
				};
				struct MnsParameter
				{
					std::string region;
					std::string id;
					std::string arn;
					std::string queue;
				};
				struct WebhookParameter
				{
					std::string method;
					std::string id;
					std::string protocol;
					std::string url;
				};
				struct SlsParameter
				{
					std::string project;
					std::string logStore;
					std::string region;
					std::string id;
					std::string arn;
				};
				struct OpenApiParametersItem
				{
					std::string role;
					std::string action;
					std::string version;
					std::string product;
					std::string region;
					std::string id;
					std::string arn;
				};


				DescribeEventRuleTargetListResult();
				explicit DescribeEventRuleTargetListResult(const std::string &payload);
				~DescribeEventRuleTargetListResult();
				std::vector<ContactParameter> getContactParameters()const;
				std::vector<OpenApiParametersItem> getOpenApiParameters()const;
				std::string getMessage()const;
				std::vector<SlsParameter> getSlsParameters()const;
				std::vector<WebhookParameter> getWebhookParameters()const;
				std::vector<FCParameter> getFcParameters()const;
				std::string getCode()const;
				std::vector<MnsParameter> getMnsParameters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ContactParameter> contactParameters_;
				std::vector<OpenApiParametersItem> openApiParameters_;
				std::string message_;
				std::vector<SlsParameter> slsParameters_;
				std::vector<WebhookParameter> webhookParameters_;
				std::vector<FCParameter> fcParameters_;
				std::string code_;
				std::vector<MnsParameter> mnsParameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULETARGETLISTRESULT_H_