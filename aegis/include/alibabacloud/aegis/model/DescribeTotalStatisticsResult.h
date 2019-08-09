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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeTotalStatisticsResult : public ServiceResult
			{
			public:


				DescribeTotalStatisticsResult();
				explicit DescribeTotalStatisticsResult(const std::string &payload);
				~DescribeTotalStatisticsResult();
				int getSuspiciousTotal()const;
				int getAccount()const;
				int getVulDealedTotal()const;
				int getSuspicioushighTotal()const;
				int getSuspiciousseriousTotal()const;
				int getVulAsapSum()const;
				int getVulNntfSum()const;
				int getNewsuspicious()const;
				int getHealthhighTotal()const;
				int getHealthmediumTotal()const;
				int getVulLaterSum()const;
				int getSuspiciousmediumTotal()const;
				int getHealthlowTotal()const;
				int getHealth()const;
				int getHealthdealedTotal()const;
				int getHealthseriousTotal()const;
				int getVulTotal()const;
				int getVul()const;
				int getSuspiciouslowTotal()const;
				int getSuspicious()const;
				int getTrojan()const;
				bool getOnline()const;
				int getPatch()const;
				int getSuspiciousdealedTotal()const;
				int getHealthTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int suspiciousTotal_;
				int account_;
				int vulDealedTotal_;
				int suspicioushighTotal_;
				int suspiciousseriousTotal_;
				int vulAsapSum_;
				int vulNntfSum_;
				int newsuspicious_;
				int healthhighTotal_;
				int healthmediumTotal_;
				int vulLaterSum_;
				int suspiciousmediumTotal_;
				int healthlowTotal_;
				int health_;
				int healthdealedTotal_;
				int healthseriousTotal_;
				int vulTotal_;
				int vul_;
				int suspiciouslowTotal_;
				int suspicious_;
				int trojan_;
				bool online_;
				int patch_;
				int suspiciousdealedTotal_;
				int healthTotal_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSRESULT_H_