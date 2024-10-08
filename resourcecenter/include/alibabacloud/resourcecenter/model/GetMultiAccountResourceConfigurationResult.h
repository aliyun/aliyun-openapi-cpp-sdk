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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcecenter/ResourceCenterExport.h>

namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCECENTER_EXPORT GetMultiAccountResourceConfigurationResult : public ServiceResult
			{
			public:
				struct IpAddressAttribute
				{
					std::string version;
					std::string networkType;
					std::string ipAddress;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetMultiAccountResourceConfigurationResult();
				explicit GetMultiAccountResourceConfigurationResult(const std::string &payload);
				~GetMultiAccountResourceConfigurationResult();
				std::string getAccountId()const;
				std::string getConfiguration()const;
				std::string getResourceGroupId()const;
				std::string getZoneId()const;
				std::string getResourceName()const;
				std::string getCreateTime()const;
				std::string getResourceType()const;
				std::vector<std::string> getIpAddresses()const;
				std::string getResourceId()const;
				std::string getRegionId()const;
				std::vector<IpAddressAttribute> getIpAddressAttributes()const;
				std::string getExpireTime()const;
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accountId_;
				std::string configuration_;
				std::string resourceGroupId_;
				std::string zoneId_;
				std::string resourceName_;
				std::string createTime_;
				std::string resourceType_;
				std::vector<std::string> ipAddresses_;
				std::string resourceId_;
				std::string regionId_;
				std::vector<IpAddressAttribute> ipAddressAttributes_;
				std::string expireTime_;
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONRESULT_H_