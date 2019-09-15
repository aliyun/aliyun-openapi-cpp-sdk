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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeRuleListRequest : public RpcServiceRequest
			{

			public:
				DescribeRuleListRequest();
				~DescribeRuleListRequest();

				std::string getWarnLevel()const;
				void setWarnLevel(const std::string& warnLevel);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getExGroupId()const;
				void setExGroupId(const std::string& exGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getId()const;
				void setId(long id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getGroupId()const;
				void setGroupId(long groupId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);

            private:
				std::string warnLevel_;
				std::string remark_;
				std::string exGroupId_;
				std::string sourceIp_;
				int pageSize_;
				long id_;
				std::string lang_;
				long groupId_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_