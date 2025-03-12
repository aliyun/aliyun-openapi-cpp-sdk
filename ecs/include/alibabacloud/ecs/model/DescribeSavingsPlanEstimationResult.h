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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeSavingsPlanEstimationResult : public ServiceResult
			{
			public:


				DescribeSavingsPlanEstimationResult();
				explicit DescribeSavingsPlanEstimationResult(const std::string &payload);
				~DescribeSavingsPlanEstimationResult();
				std::string getOfferingType()const;
				std::string getCommittedAmount()const;
				std::string getResourceId()const;
				std::string getInstanceTypeFamily()const;
				std::string getCurrency()const;
				std::string getPlanType()const;
				int getPeriod()const;
				std::string getInstanceTypeFamilyGroup()const;
				std::string getPeriodUnit()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string offeringType_;
				std::string committedAmount_;
				std::string resourceId_;
				std::string instanceTypeFamily_;
				std::string currency_;
				std::string planType_;
				int period_;
				std::string instanceTypeFamilyGroup_;
				std::string periodUnit_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONRESULT_H_