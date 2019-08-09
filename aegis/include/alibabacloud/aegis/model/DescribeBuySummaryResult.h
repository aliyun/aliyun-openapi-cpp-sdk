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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBUYSUMMARYRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBUYSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeBuySummaryResult : public ServiceResult
			{
			public:
				struct BuySummary
				{
					std::string originalVersion;
					bool canAccessHidden;
					std::string originalBuyType;
					std::string buyVersion;
					long expireDate;
					std::string instanceId;
					int safePointSurplusDays;
					long safePointExpireDate;
					int specialCount;
					bool buyStatus;
					bool needFeedBack;
					bool canApplyTrial;
					int safePointdailyCost;
					std::string buyType;
					long expireDateTimestamp;
					int capacity;
					std::string safePointBuyVersion;
					int safePointCapacity;
					long purchaseDate;
					int totalMachineNum;
					int useCapacity;
				};


				DescribeBuySummaryResult();
				explicit DescribeBuySummaryResult(const std::string &payload);
				~DescribeBuySummaryResult();
				BuySummary getBuySummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				BuySummary buySummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBUYSUMMARYRESULT_H_