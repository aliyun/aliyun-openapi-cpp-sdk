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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmAccessStrategyResult : public ServiceResult
			{
			public:
				struct FailoverAddrPool
				{
					int lbaWeight;
					std::string id;
					std::string name;
					int addrCount;
				};
				struct DefaultAddrPool
				{
					int lbaWeight;
					std::string id;
					std::string name;
					int addrCount;
				};
				struct Line
				{
					std::string groupName;
					std::string groupCode;
					std::string lineCode;
					std::string lineName;
				};


				DescribeDnsGtmAccessStrategyResult();
				explicit DescribeDnsGtmAccessStrategyResult(const std::string &payload);
				~DescribeDnsGtmAccessStrategyResult();
				int getFailoverMinAvailableAddrNum()const;
				std::string getDefaultAddrPoolType()const;
				int getDefaultAvailableAddrNum()const;
				std::string getStrategyId()const;
				std::string getFailoverAddrPoolGroupStatus()const;
				int getFailoverAvailableAddrNum()const;
				std::string getFailoverLbaStrategy()const;
				int getDefaultMaxReturnAddrNum()const;
				std::string getStrategyMode()const;
				long getCreateTimestamp()const;
				std::string getDefaultLbaStrategy()const;
				std::string getDefaultAddrPoolGroupStatus()const;
				std::string getFailoverAddrPoolType()const;
				std::vector<FailoverAddrPool> getFailoverAddrPools()const;
				std::string getInstanceId()const;
				std::string getDefaultLatencyOptimization()const;
				std::string getEffectiveAddrPoolGroupType()const;
				std::string getCreateTime()const;
				std::vector<DefaultAddrPool> getDefaultAddrPools()const;
				int getDefaultMinAvailableAddrNum()const;
				std::string getFailoverLatencyOptimization()const;
				std::string getStrategyName()const;
				int getFailoverMaxReturnAddrNum()const;
				std::string getAccessMode()const;
				std::vector<Line> getLines()const;

			protected:
				void parse(const std::string &payload);
			private:
				int failoverMinAvailableAddrNum_;
				std::string defaultAddrPoolType_;
				int defaultAvailableAddrNum_;
				std::string strategyId_;
				std::string failoverAddrPoolGroupStatus_;
				int failoverAvailableAddrNum_;
				std::string failoverLbaStrategy_;
				int defaultMaxReturnAddrNum_;
				std::string strategyMode_;
				long createTimestamp_;
				std::string defaultLbaStrategy_;
				std::string defaultAddrPoolGroupStatus_;
				std::string failoverAddrPoolType_;
				std::vector<FailoverAddrPool> failoverAddrPools_;
				std::string instanceId_;
				std::string defaultLatencyOptimization_;
				std::string effectiveAddrPoolGroupType_;
				std::string createTime_;
				std::vector<DefaultAddrPool> defaultAddrPools_;
				int defaultMinAvailableAddrNum_;
				std::string failoverLatencyOptimization_;
				std::string strategyName_;
				int failoverMaxReturnAddrNum_;
				std::string accessMode_;
				std::vector<Line> lines_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYRESULT_H_