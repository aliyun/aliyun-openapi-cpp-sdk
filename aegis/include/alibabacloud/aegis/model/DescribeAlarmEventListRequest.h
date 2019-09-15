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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAlarmEventListRequest : public RpcServiceRequest
			{

			public:
				DescribeAlarmEventListRequest();
				~DescribeAlarmEventListRequest();

				std::string getAlarmEventType()const;
				void setAlarmEventType(const std::string& alarmEventType);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getAlarmEventName()const;
				void setAlarmEventName(const std::string& alarmEventName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::vector<std::string> getOperateErrorCodeList()const;
				void setOperateErrorCodeList(const std::vector<std::string>& operateErrorCodeList);
				std::string getLevels()const;
				void setLevels(const std::string& levels);

            private:
				std::string alarmEventType_;
				std::string remark_;
				std::string alarmEventName_;
				std::string sourceIp_;
				std::string pageSize_;
				std::string from_;
				std::string lang_;
				std::string groupId_;
				std::string dealed_;
				int currentPage_;
				std::vector<std::string> operateErrorCodeList_;
				std::string levels_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_