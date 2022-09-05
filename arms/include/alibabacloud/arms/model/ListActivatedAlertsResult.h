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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTACTIVATEDALERTSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTACTIVATEDALERTSRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT ListActivatedAlertsResult : public ServiceResult
			{
			public:
				struct Page
				{
					struct Alert
					{
						struct DispatchRule
						{
							int ruleId;
							std::string ruleName;
						};
						std::string status;
						std::string alertName;
						std::string message;
						std::string involvedObjectKind;
						std::vector<Alert::DispatchRule> dispatchRules;
						long createTime;
						std::string severity;
						int count;
						std::string expandFields;
						std::string involvedObjectName;
						long endsAt;
						std::string alertType;
						std::string integrationName;
						std::string alertId;
						long startsAt;
						std::string integrationType;
					};
					int pageSize;
					int total;
					int page;
					std::vector<Alert> alerts;
				};


				ListActivatedAlertsResult();
				explicit ListActivatedAlertsResult(const std::string &payload);
				~ListActivatedAlertsResult();
				Page getPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				Page page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTACTIVATEDALERTSRESULT_H_