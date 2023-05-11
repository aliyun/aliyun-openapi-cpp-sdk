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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmAccessStrategyResult : public ServiceResult
			{
			public:
				struct Line
				{
					std::string groupName;
					std::string groupCode;
					std::string lineCode;
					std::string lineName;
				};


				DescribeGtmAccessStrategyResult();
				explicit DescribeGtmAccessStrategyResult(const std::string &payload);
				~DescribeGtmAccessStrategyResult();
				std::string getInstanceId()const;
				std::string getStrategyId()const;
				std::string getDefaultAddrPoolStatus()const;
				std::string getFailoverAddrPoolId()const;
				std::string getAccessStatus()const;
				std::string getDefaultAddrPoolMonitorStatus()const;
				std::string getDefaultAddrPoolName()const;
				std::string getDefultAddrPoolId()const;
				std::string getStrategyName()const;
				std::string getFailoverAddrPoolStatus()const;
				std::string getAccessMode()const;
				std::string getStrategyMode()const;
				std::string getFailoverAddrPoolMonitorStatus()const;
				std::string getFailoverAddrPoolName()const;
				std::vector<Line> getLines()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceId_;
				std::string strategyId_;
				std::string defaultAddrPoolStatus_;
				std::string failoverAddrPoolId_;
				std::string accessStatus_;
				std::string defaultAddrPoolMonitorStatus_;
				std::string defaultAddrPoolName_;
				std::string defultAddrPoolId_;
				std::string strategyName_;
				std::string failoverAddrPoolStatus_;
				std::string accessMode_;
				std::string strategyMode_;
				std::string failoverAddrPoolMonitorStatus_;
				std::string failoverAddrPoolName_;
				std::vector<Line> lines_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMACCESSSTRATEGYRESULT_H_