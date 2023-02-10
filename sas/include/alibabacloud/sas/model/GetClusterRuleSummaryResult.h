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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCLUSTERRULESUMMARYRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETCLUSTERRULESUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetClusterRuleSummaryResult : public ServiceResult
			{
			public:
				struct ClusterRuleSummary
				{
					int ruleCount;
					long interceptionCount7Day;
					int interceptionSwitch;
					int closeRuleCount;
					int suggestRuleCount;
					int openRuleCount;
					int interceptionType;
				};


				GetClusterRuleSummaryResult();
				explicit GetClusterRuleSummaryResult(const std::string &payload);
				~GetClusterRuleSummaryResult();
				ClusterRuleSummary getClusterRuleSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				ClusterRuleSummary clusterRuleSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETCLUSTERRULESUMMARYRESULT_H_