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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListApmApplicationRequest : public RpcServiceRequest
			{

			public:
				ListApmApplicationRequest();
				~ListApmApplicationRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDiagnoseResult()const;
				void setDiagnoseResult(const std::string& diagnoseResult);
				long getEndTimeFrom()const;
				void setEndTimeFrom(long endTimeFrom);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getFinalStatus()const;
				void setFinalStatus(const std::string& finalStatus);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getStartTimeFrom()const;
				void setStartTimeFrom(long startTimeFrom);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getState()const;
				void setState(const std::string& state);
				long getStartTimeTo()const;
				void setStartTimeTo(long startTimeTo);
				std::string getUser()const;
				void setUser(const std::string& user);
				long getEndTimeTo()const;
				void setEndTimeTo(long endTimeTo);
				std::string getQueue()const;
				void setQueue(const std::string& queue);

            private:
				long resourceOwnerId_;
				std::string diagnoseResult_;
				long endTimeFrom_;
				std::string orderBy_;
				std::string clusterId_;
				std::string jobType_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string finalStatus_;
				std::string regionId_;
				long startTimeFrom_;
				std::string appId_;
				std::string name_;
				int pageSize_;
				std::string state_;
				long startTimeTo_;
				std::string user_;
				long endTimeTo_;
				std::string queue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONREQUEST_H_