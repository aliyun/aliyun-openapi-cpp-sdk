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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBEBANDWIDTHPACKAGERESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBEBANDWIDTHPACKAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeBandwidthPackageResult : public ServiceResult
			{
			public:


				DescribeBandwidthPackageResult();
				explicit DescribeBandwidthPackageResult(const std::string &payload);
				~DescribeBandwidthPackageResult();
				std::string getCbnGeographicRegionIdB()const;
				std::string getDescription()const;
				std::string getCbnGeographicRegionIdA()const;
				std::string getCreateTime()const;
				std::string getName()const;
				std::string getBandwidthType()const;
				std::string getType()const;
				std::vector<std::string> getAccelerators()const;
				std::string getChargeType()const;
				std::string getState()const;
				std::string getExpiredTime()const;
				int getBandwidth()const;
				std::string getBandwidthPackageId()const;
				int getRatio()const;
				std::string getRegionId()const;
				std::string getBillingType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cbnGeographicRegionIdB_;
				std::string description_;
				std::string cbnGeographicRegionIdA_;
				std::string createTime_;
				std::string name_;
				std::string bandwidthType_;
				std::string type_;
				std::vector<std::string> accelerators_;
				std::string chargeType_;
				std::string state_;
				std::string expiredTime_;
				int bandwidth_;
				std::string bandwidthPackageId_;
				int ratio_;
				std::string regionId_;
				std::string billingType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBEBANDWIDTHPACKAGERESULT_H_