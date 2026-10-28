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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAUTILIZATIONREPORTRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAUTILIZATIONREPORTRESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT ListQuotaUtilizationReportResult : public ServiceResult
			{
			public:
				struct QuotasItem
				{
					struct UsageMetric
					{
						std::string metricName;
						std::string metricDimensions;
						std::string metricNamespace;
					};
					struct FlowControlAlgo
					{
						struct Period
						{
							int periodValue;
							std::string periodUnit;
						};
						double totalQuota;
						Period period;
						std::string algoType;
						int tokensPerRefill;
						int refillInterval;
					};
					std::string quotaDescription;
					bool consumable;
					std::string unadjustableDetail;
					UsageMetric usageMetric;
					std::string productCode;
					double totalUsage;
					std::string dimensions;
					std::string utilizationStatus;
					bool adjustable;
					std::string quotaActionCode;
					std::string quotaName;
					double utilization;
					std::string quotaArn;
					double totalQuota;
					std::string quotaCategory;
					FlowControlAlgo flowControlAlgo;
				};


				ListQuotaUtilizationReportResult();
				explicit ListQuotaUtilizationReportResult(const std::string &payload);
				~ListQuotaUtilizationReportResult();
				std::string getStatus()const;
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getNextToken()const;
				std::vector<QuotasItem> getQuotas()const;
				std::string getGeneratedAt()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int totalCount_;
				std::string message_;
				std::string nextToken_;
				std::vector<QuotasItem> quotas_;
				std::string generatedAt_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAUTILIZATIONREPORTRESULT_H_