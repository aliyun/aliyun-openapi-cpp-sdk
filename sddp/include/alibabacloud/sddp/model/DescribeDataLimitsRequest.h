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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataLimitsRequest : public RpcServiceRequest
			{

			public:
				DescribeDataLimitsRequest();
				~DescribeDataLimitsRequest();

				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCheckStatus()const;
				void setCheckStatus(int checkStatus);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getServiceRegionId()const;
				void setServiceRegionId(const std::string& serviceRegionId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);
				int getAuditStatus()const;
				void setAuditStatus(int auditStatus);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getResourceType()const;
				void setResourceType(int resourceType);

            private:
				std::string parentId_;
				std::string sourceIp_;
				std::string regionId_;
				int pageSize_;
				int checkStatus_;
				std::string lang_;
				std::string serviceRegionId_;
				std::string engineType_;
				int auditStatus_;
				int currentPage_;
				int resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_