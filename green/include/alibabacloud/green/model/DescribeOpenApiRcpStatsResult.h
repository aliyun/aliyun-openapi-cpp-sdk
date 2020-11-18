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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOPENAPIRCPSTATSRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOPENAPIRCPSTATSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeOpenApiRcpStatsResult : public ServiceResult
			{
			public:
				struct Stat
				{
					int totalCount;
					int blockCount;
					std::string resourceType;
					int passCount;
					int reviewCount;
					std::string date;
					int totalDuration;
				};


				DescribeOpenApiRcpStatsResult();
				explicit DescribeOpenApiRcpStatsResult(const std::string &payload);
				~DescribeOpenApiRcpStatsResult();
				int getTotalCount()const;
				std::vector<Stat> getStatList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Stat> statList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOPENAPIRCPSTATSRESULT_H_