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

#ifndef ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSREQUEST_H_
#define ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smc/SmcExport.h>

namespace AlibabaCloud
{
	namespace Smc
	{
		namespace Model
		{
			class ALIBABACLOUD_SMC_EXPORT DescribeReplicationJobsRequest : public RpcServiceRequest
			{

			public:
				DescribeReplicationJobsRequest();
				~DescribeReplicationJobsRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<std::string> getJobId()const;
				void setJobId(const std::vector<std::string>& jobId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<std::string> getSourceId()const;
				void setSourceId(const std::vector<std::string>& sourceId);
				std::string getBusinessStatus()const;
				void setBusinessStatus(const std::string& businessStatus);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				int pageNumber_;
				std::string accessKeyId_;
				std::vector<std::string> jobId_;
				std::string regionId_;
				int pageSize_;
				std::vector<std::string> sourceId_;
				std::string businessStatus_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string name_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSREQUEST_H_