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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCESRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmInstancesResult : public ServiceResult
			{
			public:
				struct GtmInstance
				{
					struct Config
					{
						struct AlertConfigItem
						{
							std::string emailNotice;
							std::string smsNotice;
							std::string noticeType;
							std::string dingtalkNotice;
						};
						std::string instanceName;
						std::string alertGroup;
						std::vector<AlertConfigItem> alertConfig;
						std::string cnameType;
						std::string publicUserDomainName;
						std::string publicZoneName;
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
					long expireTimestamp;
					std::string versionCode;
					std::string resourceGroupId;
					std::string instanceId;
					Config config;
					int taskQuota;
					std::string createTime;
					std::string paymentType;
					std::string expireTime;
					UsedQuota usedQuota;
					int smsQuota;
					long createTimestamp;
				};


				DescribeDnsGtmInstancesResult();
				explicit DescribeDnsGtmInstancesResult(const std::string &payload);
				~DescribeDnsGtmInstancesResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<GtmInstance> getGtmInstances()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<GtmInstance> gtmInstances_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCESRESULT_H_