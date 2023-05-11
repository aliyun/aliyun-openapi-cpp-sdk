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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmInstanceAddressPoolResult : public ServiceResult
			{
			public:
				struct Addr
				{
					std::string attributeInfo;
					int lbaWeight;
					std::string alertStatus;
					std::string createTime;
					std::string mode;
					std::string updateTime;
					long updateTimestamp;
					long createTimestamp;
					std::string addr;
					std::string remark;
				};


				DescribeDnsGtmInstanceAddressPoolResult();
				explicit DescribeDnsGtmInstanceAddressPoolResult(const std::string &payload);
				~DescribeDnsGtmInstanceAddressPoolResult();
				std::vector<Addr> getAddrs()const;
				std::string getType()const;
				std::string getLbaStrategy()const;
				std::string getCreateTime()const;
				std::string getUpdateTime()const;
				std::string getAddrPoolId()const;
				long getUpdateTimestamp()const;
				std::string getMonitorConfigId()const;
				std::string getMonitorStatus()const;
				long getCreateTimestamp()const;
				int getAddrCount()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Addr> addrs_;
				std::string type_;
				std::string lbaStrategy_;
				std::string createTime_;
				std::string updateTime_;
				std::string addrPoolId_;
				long updateTimestamp_;
				std::string monitorConfigId_;
				std::string monitorStatus_;
				long createTimestamp_;
				int addrCount_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESULT_H_