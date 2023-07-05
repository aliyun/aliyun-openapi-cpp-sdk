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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICERESOURCESRESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICERESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointServiceResourcesResult : public ServiceResult
			{
			public:
				struct Resource
				{
					bool resourceSupportIPv6;
					long relatedEndpointCount;
					long relatedDeprecatedEndpointCount;
					std::string vpcId;
					std::string zoneId;
					std::string resourceId;
					std::string statusInfo;
					std::string vSwitchId;
					std::string ip;
					std::string resourceType;
					std::string regionId;
					bool autoAllocatedEnabled;
				};


				ListVpcEndpointServiceResourcesResult();
				explicit ListVpcEndpointServiceResourcesResult(const std::string &payload);
				~ListVpcEndpointServiceResourcesResult();
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Resource> getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				int maxResults_;
				std::vector<Resource> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICERESOURCESRESULT_H_