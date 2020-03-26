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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESTATUSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESTATUSRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmInstanceStatusResult : public ServiceResult
			{
			public:


				DescribeGtmInstanceStatusResult();
				explicit DescribeGtmInstanceStatusResult(const std::string &payload);
				~DescribeGtmInstanceStatusResult();
				std::string getStatus()const;
				int getStrategyNotAvailableNum()const;
				int getSwitchToFailoverStrategyNum()const;
				std::string getStatusReason()const;
				int getAddrNotAvailableNum()const;
				int getAddrPoolNotAvailableNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int strategyNotAvailableNum_;
				int switchToFailoverStrategyNum_;
				std::string statusReason_;
				int addrNotAvailableNum_;
				int addrPoolNotAvailableNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESTATUSRESULT_H_