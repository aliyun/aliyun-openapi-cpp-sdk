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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmAccessStrategyAvailableConfigResult : public ServiceResult
			{
			public:
				struct AddrPool
				{
					std::string addrPoolName;
					std::string addrPoolId;
				};
				struct Line
				{
					std::string status;
					std::string groupName;
					std::string groupCode;
					std::string fatherCode;
					std::string lineCode;
					std::string lineName;
				};


				DescribeGtmAccessStrategyAvailableConfigResult();
				explicit DescribeGtmAccessStrategyAvailableConfigResult(const std::string &payload);
				~DescribeGtmAccessStrategyAvailableConfigResult();
				std::vector<AddrPool> getAddrPools()const;
				std::vector<Line> getLines()const;
				bool getSuggestSetDefaultLine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AddrPool> addrPools_;
				std::vector<Line> lines_;
				bool suggestSetDefaultLine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_