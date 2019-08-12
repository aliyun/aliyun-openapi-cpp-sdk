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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTMETRICRULETARGETSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTMETRICRULETARGETSREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT PutMetricRuleTargetsRequest : public RpcServiceRequest
			{
				struct Targets
				{
					std::string level;
					std::string id;
					std::string arn;
				};

			public:
				PutMetricRuleTargetsRequest();
				~PutMetricRuleTargetsRequest();

				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getActions()const;
				void setActions(const std::string& actions);
				std::vector<Targets> getTargets()const;
				void setTargets(const std::vector<Targets>& targets);

            private:
				std::string ruleName_;
				std::string actions_;
				std::vector<Targets> targets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTMETRICRULETARGETSREQUEST_H_