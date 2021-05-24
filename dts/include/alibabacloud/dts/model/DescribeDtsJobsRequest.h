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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDtsJobsRequest : public RpcServiceRequest
			{

			public:
				DescribeDtsJobsRequest();
				~DescribeDtsJobsRequest();

				std::string getOrderDirection()const;
				void setOrderDirection(const std::string& orderDirection);
				std::string getType()const;
				void setType(const std::string& type);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getOrderColumn()const;
				void setOrderColumn(const std::string& orderColumn);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string orderDirection_;
				std::string type_;
				int pageNumber_;
				std::string orderColumn_;
				std::string regionId_;
				int pageSize_;
				std::string groupId_;
				std::string params_;
				std::string jobType_;
				std::string tags_;
				std::string region_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSREQUEST_H_