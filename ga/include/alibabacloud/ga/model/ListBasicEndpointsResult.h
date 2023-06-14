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

#ifndef ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListBasicEndpointsResult : public ServiceResult
			{
			public:
				struct EndpointsItem
				{
					std::string endpointGroupId;
					std::string endpointZoneId;
					std::string state;
					std::string endpointId;
					std::string endpointType;
					std::string endpointSubAddressType;
					std::string endpointSubAddress;
					std::string acceleratorId;
					std::string name;
					std::string endpointAddress;
				};


				ListBasicEndpointsResult();
				explicit ListBasicEndpointsResult(const std::string &payload);
				~ListBasicEndpointsResult();
				std::vector<EndpointsItem> getEndpoints()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EndpointsItem> endpoints_;
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSRESULT_H_