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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASRESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT ListProductQuotasResult : public ServiceResult
			{
			public:
				struct QuotasItem
				{
					struct Period
					{
						int periodValue;
						std::string periodUnit;
					};
					struct UsageMetric
					{
						std::string metricName;
						std::string metricDimensions;
						std::string metricNamespace;
					};
					struct QuotaItemsItem
					{
						std::string type;
						std::string usage;
						std::string quota;
						std::string quotaUnit;
					};
					std::string quotaDescription;
					std::string unadjustableDetail;
					bool consumable;
					UsageMetric usageMetric;
					float totalUsage;
					std::string productCode;
					std::string effectiveTime;
					std::string quotaType;
					Period period;
					std::string quotaUnit;
					std::string dimensions;
					bool globalQuota;
					bool adjustable;
					std::string quotaActionCode;
					std::vector<QuotasItem::QuotaItemsItem> quotaItems;
					std::string quotaName;
					std::string quotaArn;
					float totalQuota;
					std::string applyReasonTips;
					std::string quotaCategory;
					std::vector<std::string> supportedRange;
					std::string expireTime;
					std::string applicableType;
					std::vector<std::string> applicableRange;
				};


				ListProductQuotasResult();
				explicit ListProductQuotasResult(const std::string &payload);
				~ListProductQuotasResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<QuotasItem> getQuotas()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<QuotasItem> quotas_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASRESULT_H_