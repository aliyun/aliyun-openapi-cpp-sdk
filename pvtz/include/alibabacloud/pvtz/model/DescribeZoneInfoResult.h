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

#ifndef ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONEINFORESULT_H_
#define ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT DescribeZoneInfoResult : public ServiceResult
			{
			public:
				struct Vpc
				{
					std::string vpcId;
					std::string regionName;
					std::string vpcName;
					std::string regionId;
				};


				DescribeZoneInfoResult();
				explicit DescribeZoneInfoResult(const std::string &payload);
				~DescribeZoneInfoResult();
				std::string getZoneId()const;
				bool getSlaveDns()const;
				std::string getResourceGroupId()const;
				std::string getProxyPattern()const;
				std::string getCreateTime()const;
				std::string getRemark()const;
				std::string getZoneName()const;
				std::string getUpdateTime()const;
				long getUpdateTimestamp()const;
				std::vector<Vpc> getBindVpcs()const;
				int getRecordCount()const;
				long getCreateTimestamp()const;
				bool getIsPtr()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string zoneId_;
				bool slaveDns_;
				std::string resourceGroupId_;
				std::string proxyPattern_;
				std::string createTime_;
				std::string remark_;
				std::string zoneName_;
				std::string updateTime_;
				long updateTimestamp_;
				std::vector<Vpc> bindVpcs_;
				int recordCount_;
				long createTimestamp_;
				bool isPtr_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONEINFORESULT_H_