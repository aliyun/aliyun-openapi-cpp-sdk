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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEJOBDIFFSTATUSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEJOBDIFFSTATUSREQUEST_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeJobDiffStatusRequest : public RpcServiceRequest
			{

			public:
				DescribeJobDiffStatusRequest();
				~DescribeJobDiffStatusRequest();

				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getTbName()const;
				void setTbName(const std::string& tbName);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getDtsJobId()const;
				void setDtsJobId(const std::string& dtsJobId);

            private:
				std::string pageNumber_;
				std::string tbName_;
				std::string dbName_;
				std::string regionId_;
				std::string pageSize_;
				std::string dtsJobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEJOBDIFFSTATUSREQUEST_H_