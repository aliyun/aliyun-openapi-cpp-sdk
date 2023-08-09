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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONSRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT ListRemediationsResult : public ServiceResult
			{
			public:
				struct Remediation
				{
					std::string lastSuccessfulInvocationType;
					std::string configRuleId;
					std::string remediationTemplateId;
					long accountId;
					std::string remediationSourceType;
					long lastSuccessfulInvocationTime;
					std::string invokeType;
					std::string remediationOriginParams;
					std::string remediationId;
					std::string lastSuccessfulInvocationId;
					std::string remediationDynamicParams;
					std::string remediationType;
				};


				ListRemediationsResult();
				explicit ListRemediationsResult(const std::string &payload);
				~ListRemediationsResult();
				std::string getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Remediation> getRemediations()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<Remediation> remediations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONSRESULT_H_