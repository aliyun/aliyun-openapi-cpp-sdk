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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESTATISTICSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESTATISTICSRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeStatisticsResult : public ServiceResult
			{
			public:
				struct Statistics
				{
					int suspiciousTotal;
					int account;
					int vulLaterSum;
					int suspiciousmediumTotal;
					int healthlowTotal;
					int health;
					int vulDealedTotal;
					int healthdealedTotal;
					int healthseriousTotal;
					int vulTotal;
					int vul;
					int suspicioushighTotal;
					int suspiciouslowTotal;
					int suspiciousseriousTotal;
					int vulAsapSum;
					int vulNntfSum;
					int suspicious;
					int trojan;
					int healthhighTotal;
					int healthmediumTotal;
					bool online;
					int patch;
					int suspiciousdealedTotal;
					int healthTotal;
				};


				DescribeStatisticsResult();
				explicit DescribeStatisticsResult(const std::string &payload);
				~DescribeStatisticsResult();
				Statistics getStatistics()const;

			protected:
				void parse(const std::string &payload);
			private:
				Statistics statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESTATISTICSRESULT_H_