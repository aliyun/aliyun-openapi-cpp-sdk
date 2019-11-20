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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeAuditLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeAuditLogsRequest();
				~DescribeAuditLogsRequest();

				int getProductCode()const;
				void setProductCode(int productCode);
				long getProductId()const;
				void setProductId(long productId);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getClientIp()const;
				void setClientIp(const std::string& clientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				long getEndTime()const;
				void setEndTime(long endTime);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getClientUa()const;
				void setClientUa(const std::string& clientUa);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				int productCode_;
				long productId_;
				long startTime_;
				std::string sourceIp_;
				std::string clientIp_;
				int pageSize_;
				std::string lang_;
				int featureType_;
				long endTime_;
				int currentPage_;
				std::string clientUa_;
				std::string instanceName_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSREQUEST_H_