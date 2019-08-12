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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTETLJOBRELEASEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTETLJOBRELEASEREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListETLJobReleaseRequest : public RpcServiceRequest
			{

			public:
				ListETLJobReleaseRequest();
				~ListETLJobReleaseRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEtlJobId()const;
				void setEtlJobId(const std::string& etlJobId);
				std::string getReleaseId()const;
				void setReleaseId(const std::string& releaseId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getReleaseVersion()const;
				void setReleaseVersion(int releaseVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string etlJobId_;
				std::string releaseId_;
				int pageSize_;
				int pageNumber_;
				int releaseVersion_;
				std::string accessKeyId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTETLJOBRELEASEREQUEST_H_