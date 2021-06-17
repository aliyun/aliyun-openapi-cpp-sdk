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

#ifndef ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListEndpointGroupsRequest : public RpcServiceRequest
			{

			public:
				ListEndpointGroupsRequest();
				~ListEndpointGroupsRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getListenerId()const;
				void setListenerId(const std::string& listenerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEndpointGroupType()const;
				void setEndpointGroupType(const std::string& endpointGroupType);
				std::string getAccessLogSwitch()const;
				void setAccessLogSwitch(const std::string& accessLogSwitch);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getAcceleratorId()const;
				void setAcceleratorId(const std::string& acceleratorId);
				std::string getEndpointGroupId()const;
				void setEndpointGroupId(const std::string& endpointGroupId);

            private:
				int pageNumber_;
				std::string listenerId_;
				std::string regionId_;
				std::string endpointGroupType_;
				std::string accessLogSwitch_;
				int pageSize_;
				std::string acceleratorId_;
				std::string endpointGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSREQUEST_H_