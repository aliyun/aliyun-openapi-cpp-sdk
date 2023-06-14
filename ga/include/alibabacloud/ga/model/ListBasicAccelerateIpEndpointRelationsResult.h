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

#ifndef ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATEIPENDPOINTRELATIONSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATEIPENDPOINTRELATIONSRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT ListBasicAccelerateIpEndpointRelationsResult : public ServiceResult
			{
			public:
				struct AccelerateIpEndpointRelationsItem
				{
					std::string accelerateIpId;
					std::string endpointName;
					std::string endpointZoneId;
					std::string state;
					std::string endpointId;
					std::string endpointType;
					std::string endpointSubAddressType;
					std::string endpointSubAddress;
					std::string ipAddress;
					std::string acceleratorId;
					std::string endpointAddress;
				};


				ListBasicAccelerateIpEndpointRelationsResult();
				explicit ListBasicAccelerateIpEndpointRelationsResult(const std::string &payload);
				~ListBasicAccelerateIpEndpointRelationsResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<AccelerateIpEndpointRelationsItem> getAccelerateIpEndpointRelations()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;
				std::vector<AccelerateIpEndpointRelationsItem> accelerateIpEndpointRelations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATEIPENDPOINTRELATIONSRESULT_H_