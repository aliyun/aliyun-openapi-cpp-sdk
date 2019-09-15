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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEENTITYLISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEENTITYLISTREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeEntityListRequest : public RpcServiceRequest
			{

			public:
				DescribeEntityListRequest();
				~DescribeEntityListRequest();

				std::string getTagIdList()const;
				void setTagIdList(const std::string& tagIdList);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getPatch()const;
				void setPatch(const std::string& patch);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getOs()const;
				void setOs(const std::string& os);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getHealth()const;
				void setHealth(const std::string& health);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getTrojan()const;
				void setTrojan(const std::string& trojan);
				std::string getSuspicious()const;
				void setSuspicious(const std::string& suspicious);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				std::string getAccount()const;
				void setAccount(const std::string& account);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string tagIdList_;
				std::string remark_;
				std::string patch_;
				std::string sourceIp_;
				int pageSize_;
				std::string from_;
				std::string os_;
				long groupId_;
				std::string health_;
				int currentPage_;
				std::string trojan_;
				std::string suspicious_;
				std::string regionNo_;
				std::string account_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEENTITYLISTREQUEST_H_