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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeRiskCheckResultRequest : public RpcServiceRequest
			{

			public:
				DescribeRiskCheckResultRequest();
				~DescribeRiskCheckResultRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::vector<std::string> getItemIds()const;
				void setItemIds(const std::vector<std::string>& itemIds);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getRiskLevel()const;
				void setRiskLevel(const std::string& riskLevel);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string sourceIp_;
				long groupId_;
				std::vector<std::string> itemIds_;
				std::string name_;
				int pageSize_;
				int currentPage_;
				std::string lang_;
				std::string riskLevel_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_