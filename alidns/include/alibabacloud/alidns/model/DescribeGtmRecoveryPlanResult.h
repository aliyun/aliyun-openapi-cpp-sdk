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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMRECOVERYPLANRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMRECOVERYPLANRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmRecoveryPlanResult : public ServiceResult
			{
			public:
				struct FaultAddrPool
				{
					struct Addr
					{
						std::string mode;
						std::string value;
						long id;
					};
					std::vector<FaultAddrPool::Addr> addrs;
					std::string addrPoolName;
					std::string instanceId;
					std::string addrPoolId;
				};


				DescribeGtmRecoveryPlanResult();
				explicit DescribeGtmRecoveryPlanResult(const std::string &payload);
				~DescribeGtmRecoveryPlanResult();
				std::string getStatus()const;
				std::string getLastRollbackTime()const;
				int getFaultAddrPoolNum()const;
				std::vector<FaultAddrPool> getFaultAddrPools()const;
				std::string getLastExecuteTime()const;
				std::string getCreateTime()const;
				long getLastExecuteTimestamp()const;
				std::string getRemark()const;
				std::string getName()const;
				long getRecoveryPlanId()const;
				std::string getUpdateTime()const;
				long getUpdateTimestamp()const;
				long getLastRollbackTimestamp()const;
				long getCreateTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string lastRollbackTime_;
				int faultAddrPoolNum_;
				std::vector<FaultAddrPool> faultAddrPools_;
				std::string lastExecuteTime_;
				std::string createTime_;
				long lastExecuteTimestamp_;
				std::string remark_;
				std::string name_;
				long recoveryPlanId_;
				std::string updateTime_;
				long updateTimestamp_;
				long lastRollbackTimestamp_;
				long createTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMRECOVERYPLANRESULT_H_