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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBHISTORYREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBHISTORYREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowJobHistoryRequest : public RpcServiceRequest
			{

			public:
				ListFlowJobHistoryRequest();
				~ListFlowJobHistoryRequest();

				std::string getTimeRange()const;
				void setTimeRange(const std::string& timeRange);
				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string timeRange_;
				std::vector<std::string> statusList_;
				std::string jobType_;
				int pageNumber_;
				std::string instanceId_;
				std::string regionId_;
				int pageSize_;
				std::string id_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBHISTORYREQUEST_H_