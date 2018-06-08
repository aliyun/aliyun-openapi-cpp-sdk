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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNSERVICERESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnServiceResult : public ServiceResult
			{
			public:
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeScdnServiceResult();
				explicit DescribeScdnServiceResult(const std::string &payload);
				~DescribeScdnServiceResult();
				std::string getEndTime()const;
				std::string getInstanceId()const;
				std::string getPricingCycle()const;
				std::string getElasticProtection()const;
				std::string getDDoSBasic()const;
				std::string getDomainCountValue()const;
				std::string getProtectTypeValue()const;
				std::string getCcProtectionValue()const;
				std::string getCcProtection()const;
				std::vector<LockReason> getOperationLocks()const;
				std::string getElasticProtectionValue()const;
				std::string getOpenTime()const;
				std::string getBandwidth()const;
				std::string getDDoSBasicValue()const;
				std::string getProtectType()const;
				std::string getBandwidthValue()const;
				std::string getPriceType()const;
				std::string getDomainCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string instanceId_;
				std::string pricingCycle_;
				std::string elasticProtection_;
				std::string dDoSBasic_;
				std::string domainCountValue_;
				std::string protectTypeValue_;
				std::string ccProtectionValue_;
				std::string ccProtection_;
				std::vector<LockReason> operationLocks_;
				std::string elasticProtectionValue_;
				std::string openTime_;
				std::string bandwidth_;
				std::string dDoSBasicValue_;
				std::string protectType_;
				std::string bandwidthValue_;
				std::string priceType_;
				std::string domainCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNSERVICERESULT_H_