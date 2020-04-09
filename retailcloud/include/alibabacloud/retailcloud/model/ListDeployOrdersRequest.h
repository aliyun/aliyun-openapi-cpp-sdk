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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTDEPLOYORDERSREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTDEPLOYORDERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListDeployOrdersRequest : public RpcServiceRequest
			{

			public:
				ListDeployOrdersRequest();
				~ListDeployOrdersRequest();

				std::string getStartTimeGreaterThanOrEqualTo()const;
				void setStartTimeGreaterThanOrEqualTo(const std::string& startTimeGreaterThanOrEqualTo);
				std::vector<int> getStatusList()const;
				void setStatusList(const std::vector<int>& statusList);
				long getEnvId()const;
				void setEnvId(long envId);
				std::string getEndTimeGreaterThan()const;
				void setEndTimeGreaterThan(const std::string& endTimeGreaterThan);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getPauseType()const;
				void setPauseType(const std::string& pauseType);
				std::vector<int> getResultList()const;
				void setResultList(const std::vector<int>& resultList);
				std::string getStartTimeGreaterThan()const;
				void setStartTimeGreaterThan(const std::string& startTimeGreaterThan);
				std::string getStartTimeLessThan()const;
				void setStartTimeLessThan(const std::string& startTimeLessThan);
				std::string getStartTimeLessThanOrEqualTo()const;
				void setStartTimeLessThanOrEqualTo(const std::string& startTimeLessThanOrEqualTo);
				long getAppId()const;
				void setAppId(long appId);
				std::string getEnvType()const;
				void setEnvType(const std::string& envType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getEndTimeGreaterThanOrEqualTo()const;
				void setEndTimeGreaterThanOrEqualTo(const std::string& endTimeGreaterThanOrEqualTo);
				std::string getEndTimeLessThan()const;
				void setEndTimeLessThan(const std::string& endTimeLessThan);
				std::string getEndTimeLessThanOrEqualTo()const;
				void setEndTimeLessThanOrEqualTo(const std::string& endTimeLessThanOrEqualTo);
				std::string getPartitionType()const;
				void setPartitionType(const std::string& partitionType);
				std::string getDeployCategory()const;
				void setDeployCategory(const std::string& deployCategory);
				std::string getDeployType()const;
				void setDeployType(const std::string& deployType);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string startTimeGreaterThanOrEqualTo_;
				std::vector<int> statusList_;
				long envId_;
				std::string endTimeGreaterThan_;
				int pageNumber_;
				std::string pauseType_;
				std::vector<int> resultList_;
				std::string startTimeGreaterThan_;
				std::string startTimeLessThan_;
				std::string startTimeLessThanOrEqualTo_;
				long appId_;
				std::string envType_;
				int pageSize_;
				std::string endTimeGreaterThanOrEqualTo_;
				std::string endTimeLessThan_;
				std::string endTimeLessThanOrEqualTo_;
				std::string partitionType_;
				std::string deployCategory_;
				std::string deployType_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTDEPLOYORDERSREQUEST_H_