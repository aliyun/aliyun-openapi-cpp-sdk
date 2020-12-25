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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListFlowNodeInstanceRequest : public RpcServiceRequest
			{

			public:
				ListFlowNodeInstanceRequest();
				~ListFlowNodeInstanceRequest();

				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::vector<std::string> statusList_;
				std::string orderBy_;
				long startTime_;
				int pageNumber_;
				std::string resourceGroupId_;
				std::string regionId_;
				int pageSize_;
				std::string projectId_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCEREQUEST_H_