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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINQPSWITHCACHERESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINQPSWITHCACHERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDomainQpsWithCacheResult : public ServiceResult
			{
			public:


				DescribeDomainQpsWithCacheResult();
				explicit DescribeDomainQpsWithCacheResult(const std::string &payload);
				~DescribeDomainQpsWithCacheResult();
				std::vector<std::string> getIpBlockQps()const;
				std::vector<std::string> getCcJsQps()const;
				std::vector<std::string> getBlocks()const;
				std::vector<std::string> getPreciseBlocks()const;
				std::vector<std::string> getPreciseJsQps()const;
				std::vector<std::string> getTotals()const;
				long getStartTime()const;
				std::vector<std::string> getCcBlockQps()const;
				std::vector<std::string> getCacheHits()const;
				std::vector<std::string> getRegionBlocks()const;
				int getInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> ipBlockQps_;
				std::vector<std::string> ccJsQps_;
				std::vector<std::string> blocks_;
				std::vector<std::string> preciseBlocks_;
				std::vector<std::string> preciseJsQps_;
				std::vector<std::string> totals_;
				long startTime_;
				std::vector<std::string> ccBlockQps_;
				std::vector<std::string> cacheHits_;
				std::vector<std::string> regionBlocks_;
				int interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINQPSWITHCACHERESULT_H_