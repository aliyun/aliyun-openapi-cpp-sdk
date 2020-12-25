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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowInstanceRequest : public RpcServiceRequest
			{

			public:
				ListFlowInstanceRequest();
				~ListFlowInstanceRequest();

				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				std::string getNodeInstanceId()const;
				void setNodeInstanceId(const std::string& nodeInstanceId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getOwner()const;
				void setOwner(const std::string& owner);
				std::string getTimeRange()const;
				void setTimeRange(const std::string& timeRange);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getFlowName()const;
				void setFlowName(const std::string& flowName);
				std::string getFlowId()const;
				void setFlowId(const std::string& flowId);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::vector<std::string> statusList_;
				std::string nodeInstanceId_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string id_;
				std::string projectId_;
				std::string owner_;
				std::string timeRange_;
				std::string orderBy_;
				std::string instanceId_;
				std::string flowName_;
				std::string flowId_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCEREQUEST_H_