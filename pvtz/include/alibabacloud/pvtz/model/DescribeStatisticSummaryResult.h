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

#ifndef ALIBABACLOUD_PVTZ_MODEL_DESCRIBESTATISTICSUMMARYRESULT_H_
#define ALIBABACLOUD_PVTZ_MODEL_DESCRIBESTATISTICSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT DescribeStatisticSummaryResult : public ServiceResult
			{
			public:
				struct ZoneRequestTop
				{
					std::string zoneName;
					std::string bizType;
					long requestCount;
				};
				struct VpcRequestTop
				{
					std::string vpcId;
					std::string regionName;
					std::string regionId;
					std::string tunnelId;
					long requestCount;
				};


				DescribeStatisticSummaryResult();
				explicit DescribeStatisticSummaryResult(const std::string &payload);
				~DescribeStatisticSummaryResult();
				long getTotalCount()const;
				std::vector<ZoneRequestTop> getZoneRequestTops()const;
				std::vector<VpcRequestTop> getVpcRequestTops()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<ZoneRequestTop> zoneRequestTops_;
				std::vector<VpcRequestTop> vpcRequestTops_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_DESCRIBESTATISTICSUMMARYRESULT_H_