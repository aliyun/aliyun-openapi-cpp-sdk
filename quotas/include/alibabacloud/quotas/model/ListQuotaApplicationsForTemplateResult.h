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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATERESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATERESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT ListQuotaApplicationsForTemplateResult : public ServiceResult
			{
			public:
				struct QuotaBatchApplicationsItem
				{
					struct AuditStatusVo
					{
						std::string status;
						int count;
					};
					std::string quotaActionCode;
					std::string applyTime;
					std::vector<QuotaBatchApplicationsItem::AuditStatusVo> auditStatusVos;
					std::string productCode;
					std::string batchQuotaApplicationId;
					std::string effectiveTime;
					std::string quotaCategory;
					std::vector<std::string> aliyunUids;
					std::string dimensions;
					std::string expireTime;
					double desireValue;
					std::string reason;
				};


				ListQuotaApplicationsForTemplateResult();
				explicit ListQuotaApplicationsForTemplateResult(const std::string &payload);
				~ListQuotaApplicationsForTemplateResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<QuotaBatchApplicationsItem> getQuotaBatchApplications()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<QuotaBatchApplicationsItem> quotaBatchApplications_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATERESULT_H_