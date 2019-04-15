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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULTARGETSTATISTICSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULTARGETSTATISTICSRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeVulTargetStatisticsResult : public ServiceResult
			{
			public:
				struct TargetStat
				{
					struct Target
					{
						std::string target;
						std::string targetType;
						std::string flag;
					};
					std::string totalCount;
					std::vector<TargetStat::Target> targets;
					std::string uuidCount;
					std::string vulType;
				};


				DescribeVulTargetStatisticsResult();
				explicit DescribeVulTargetStatisticsResult(const std::string &payload);
				~DescribeVulTargetStatisticsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<TargetStat> getTargetStats()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<TargetStat> targetStats_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULTARGETSTATISTICSRESULT_H_