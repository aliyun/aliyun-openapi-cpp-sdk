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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListExecutionPlansRequest : public RpcServiceRequest
			{

			public:
				ListExecutionPlansRequest();
				~ListExecutionPlansRequest();

				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getQueryString()const;
				void setQueryString(const std::string& queryString);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getIsDesc()const;
				void setIsDesc(bool isDesc);
				std::string getStrategy()const;
				void setStrategy(const std::string& strategy);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getQueryType()const;
				void setQueryType(const std::string& queryType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string jobId_;
				long resourceOwnerId_;
				std::vector<std::string> statusList_;
				std::string regionId_;
				int pageSize_;
				std::string queryString_;
				std::string clusterId_;
				bool isDesc_;
				std::string strategy_;
				int pageNumber_;
				std::string queryType_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSREQUEST_H_