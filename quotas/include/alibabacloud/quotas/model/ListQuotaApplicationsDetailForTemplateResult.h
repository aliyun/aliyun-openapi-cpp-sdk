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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSDETAILFORTEMPLATERESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSDETAILFORTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quotas/QuotasExport.h>

namespace AlibabaCloud
{
	namespace Quotas
	{
		namespace Model
		{
			class ALIBABACLOUD_QUOTAS_EXPORT ListQuotaApplicationsDetailForTemplateResult : public ServiceResult
			{
			public:
				struct QuotaBatchApplicationDetailVos
				{
					struct Period
					{
						int periodValue;
						std::string periodUnit;
					};
					std::string status;
					std::string applyTime;
					std::string quotaDescription;
					std::string batchQuotaApplicationId;
					std::string productCode;
					std::string effectiveTime;
					Period period;
					std::string quotaUnit;
					std::string auditReason;
					double approveValue;
					std::string reason;
					std::string envLanguage;
					std::string quotaActionCode;
					std::string quotaName;
					std::string quotaArn;
					std::string aliyunUid;
					std::string quotaCategory;
					int noticeType;
					std::string quotaDimension;
					std::string applicationId;
					double desireValue;
					std::string expireTime;
				};


				ListQuotaApplicationsDetailForTemplateResult();
				explicit ListQuotaApplicationsDetailForTemplateResult(const std::string &payload);
				~ListQuotaApplicationsDetailForTemplateResult();
				std::vector<QuotaBatchApplicationDetailVos> getQuotaApplications()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<QuotaBatchApplicationDetailVos> quotaApplications_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSDETAILFORTEMPLATERESULT_H_