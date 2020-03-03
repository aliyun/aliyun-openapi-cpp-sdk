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

#ifndef ALIBABACLOUD_GEOIP_MODEL_DESCRIBEGEOIPINSTANCESTATISTICSRESULT_H_
#define ALIBABACLOUD_GEOIP_MODEL_DESCRIBEGEOIPINSTANCESTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/geoip/GeoipExport.h>

namespace AlibabaCloud
{
	namespace Geoip
	{
		namespace Model
		{
			class ALIBABACLOUD_GEOIP_EXPORT DescribeGeoipInstanceStatisticsResult : public ServiceResult
			{
			public:
				struct Statistic
				{
					long count;
					long timestamp;
				};


				DescribeGeoipInstanceStatisticsResult();
				explicit DescribeGeoipInstanceStatisticsResult(const std::string &payload);
				~DescribeGeoipInstanceStatisticsResult();
				std::vector<Statistic> getStatistics()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Statistic> statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GEOIP_MODEL_DESCRIBEGEOIPINSTANCESTATISTICSRESULT_H_