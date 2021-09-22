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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCERESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCERESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmInstanceResult : public ServiceResult
			{
			public:


				DescribeGtmInstanceResult();
				explicit DescribeGtmInstanceResult(const std::string &payload);
				~DescribeGtmInstanceResult();
				long getExpireTimestamp()const;
				std::string getUserDomainName()const;
				std::string getLbaStrategy()const;
				std::string getResourceGroupId()const;
				std::string getInstanceId()const;
				std::string getCreateTime()const;
				std::string getCnameMode()const;
				int getTtl()const;
				std::string getCname()const;
				std::string getInstanceName()const;
				std::string getVersionCode()const;
				std::string getAlertGroup()const;
				int getAddressPoolNum()const;
				int getAccessStrategyNum()const;
				std::string getExpireTime()const;
				long getCreateTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				long expireTimestamp_;
				std::string userDomainName_;
				std::string lbaStrategy_;
				std::string resourceGroupId_;
				std::string instanceId_;
				std::string createTime_;
				std::string cnameMode_;
				int ttl_;
				std::string cname_;
				std::string instanceName_;
				std::string versionCode_;
				std::string alertGroup_;
				int addressPoolNum_;
				int accessStrategyNum_;
				std::string expireTime_;
				long createTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCERESULT_H_