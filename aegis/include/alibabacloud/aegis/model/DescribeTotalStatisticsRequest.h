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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeTotalStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribeTotalStatisticsRequest();
				~DescribeTotalStatisticsRequest();

				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getWebGroupId()const;
				void setWebGroupId(long webGroupId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getTag()const;
				void setTag(const std::string& tag);
				int getFlow()const;
				void setFlow(int flow);
				std::string getSaleId()const;
				void setSaleId(const std::string& saleId);
				int getRuleType()const;
				void setRuleType(int ruleType);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getSecureToken()const;
				void setSecureToken(const std::string& secureToken);
				int getAction1()const;
				void setAction1(int action1);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string statusList_;
				std::string remark_;
				std::string startTime_;
				std::string type_;
				std::string uuid_;
				std::string sourceIp_;
				long webGroupId_;
				int pageSize_;
				std::string from_;
				std::string tag_;
				int flow_;
				std::string saleId_;
				int ruleType_;
				long groupId_;
				std::string endTime_;
				std::string dealed_;
				int currentPage_;
				std::string secureToken_;
				int action1_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOTALSTATISTICSREQUEST_H_