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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCERESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCERESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmInstanceResult : public ServiceResult
			{
			public:
				struct Config
				{
					struct AlertConfigItem
					{
						bool emailNotice;
						bool smsNotice;
						std::string noticeType;
						bool dingtalkNotice;
					};
					std::string instanceName;
					std::string alertGroup;
					std::string pubicZoneName;
					std::vector<AlertConfigItem> alertConfig;
					std::string cnameType;
					std::string publicUserDomainName;
					std::string strategyMode;
					std::string publicRr;
					int ttl;
					std::string publicCnameMode;
				};
				struct UsedQuota
				{
					int taskUsedCount;
					int dingtalkUsedCount;
					int smsUsedCount;
					int emailUsedCount;
				};


				DescribeDnsGtmInstanceResult();
				explicit DescribeDnsGtmInstanceResult(const std::string &payload);
				~DescribeDnsGtmInstanceResult();
				long getExpireTimestamp()const;
				std::string getVersionCode()const;
				std::string getResourceGroupId()const;
				std::string getInstanceId()const;
				Config getConfig()const;
				int getTaskQuota()const;
				std::string getCreateTime()const;
				std::string getPaymentType()const;
				std::string getExpireTime()const;
				UsedQuota getUsedQuota()const;
				int getSmsQuota()const;
				long getCreateTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				long expireTimestamp_;
				std::string versionCode_;
				std::string resourceGroupId_;
				std::string instanceId_;
				Config config_;
				int taskQuota_;
				std::string createTime_;
				std::string paymentType_;
				std::string expireTime_;
				UsedQuota usedQuota_;
				int smsQuota_;
				long createTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCERESULT_H_