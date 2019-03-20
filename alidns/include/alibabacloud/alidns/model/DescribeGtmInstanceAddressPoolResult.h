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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCEADDRESSPOOLRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCEADDRESSPOOLRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmInstanceAddressPoolResult : public ServiceResult
			{
			public:
				struct Addr
				{
					int lbaWeight;
					std::string alertStatus;
					long addrId;
					std::string createTime;
					std::string mode;
					std::string updateTime;
					std::string value;
					long updateTimestamp;
					long createTimestamp;
				};


				DescribeGtmInstanceAddressPoolResult();
				explicit DescribeGtmInstanceAddressPoolResult(const std::string &payload);
				~DescribeGtmInstanceAddressPoolResult();
				std::vector<Addr> getAddrs()const;
				std::string getStatus()const;
				std::string getCreateTime()const;
				int getAddrCount()const;
				std::string getName()const;
				std::string getType()const;
				std::string getAddrPoolId()const;
				std::string getUpdateTime()const;
				long getUpdateTimestamp()const;
				int getMinAvailableAddrNum()const;
				std::string getMonitorConfigId()const;
				long getCreateTimestamp()const;
				std::string getMonitorStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Addr> addrs_;
				std::string status_;
				std::string createTime_;
				int addrCount_;
				std::string name_;
				std::string type_;
				std::string addrPoolId_;
				std::string updateTime_;
				long updateTimestamp_;
				int minAvailableAddrNum_;
				std::string monitorConfigId_;
				long createTimestamp_;
				std::string monitorStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCEADDRESSPOOLRESULT_H_