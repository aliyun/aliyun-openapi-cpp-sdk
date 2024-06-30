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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSRESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT ListQuotaApplicationsResult : public ServiceResult
			{
			public:
				struct QuotaApplicationsItem
				{
					struct Period
					{
						long periodValue;
						std::string periodUnit;
					};
					std::string status;
					std::string comment;
					std::string applyTime;
					std::string quotaDescription;
					std::string effectiveTime;
					std::string productCode;
					Period period;
					std::string quotaUnit;
					std::string auditReason;
					std::string dimension;
					float approveValue;
					std::string reason;
					std::string quotaActionCode;
					std::string quotaName;
					std::string quotaArn;
					int noticeType;
					std::string expireTime;
					float desireValue;
					std::string applicationId;
				};


				ListQuotaApplicationsResult();
				explicit ListQuotaApplicationsResult(const std::string &payload);
				~ListQuotaApplicationsResult();
				std::vector<QuotaApplicationsItem> getQuotaApplications()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<QuotaApplicationsItem> quotaApplications_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSRESULT_H_