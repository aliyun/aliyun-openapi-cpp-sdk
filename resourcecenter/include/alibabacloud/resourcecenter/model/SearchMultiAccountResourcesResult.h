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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHMULTIACCOUNTRESOURCESRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHMULTIACCOUNTRESOURCESRESULT_H_

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
			class ALIBABACLOUD_RESOURCECENTER_EXPORT SearchMultiAccountResourcesResult : public ServiceResult
			{
			public:
				struct Filter
				{
					std::string matchType;
					std::vector<std::string> values;
					std::string key;
				};
				struct Resource
				{
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
					std::vector<std::string> ipAddresses;
					std::string accountId;
					std::string resourceGroupId;
					std::string zoneId;
					std::string resourceId;
					std::string resourceName;
					std::string createTime;
					std::string resourceType;
					std::string regionId;
					std::vector<Resource::IpAddressAttribute> ipAddressAttributes;
					std::string expireTime;
					std::vector<Resource::Tag> tags;
				};


				SearchMultiAccountResourcesResult();
				explicit SearchMultiAccountResourcesResult(const std::string &payload);
				~SearchMultiAccountResourcesResult();
				std::vector<Filter> getFilters()const;
				std::string getNextToken()const;
				std::string getScope()const;
				int getMaxResults()const;
				std::vector<Resource> getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Filter> filters_;
				std::string nextToken_;
				std::string scope_;
				int maxResults_;
				std::vector<Resource> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHMULTIACCOUNTRESOURCESRESULT_H_