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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSREQUEST_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeSuspEventsRequest : public RpcServiceRequest
			{

			public:
				DescribeSuspEventsRequest();
				~DescribeSuspEventsRequest();

				std::string getAlarmUniqueInfo()const;
				void setAlarmUniqueInfo(const std::string& alarmUniqueInfo);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getCurrentPage()const;
				void setCurrentPage(const std::string& currentPage);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getLevels()const;
				void setLevels(const std::string& levels);
				std::string getParentEventTypes()const;
				void setParentEventTypes(const std::string& parentEventTypes);

            private:
				std::string alarmUniqueInfo_;
				std::string sourceIp_;
				std::string name_;
				std::string pageSize_;
				std::string dealed_;
				std::string remark_;
				std::string currentPage_;
				std::string from_;
				std::string lang_;
				std::string levels_;
				std::string parentEventTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSREQUEST_H_