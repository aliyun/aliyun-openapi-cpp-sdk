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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeSuspEventDetailResult : public ServiceResult
			{
			public:
				struct QuaraFile
				{
					std::string type;
					std::string value;
					std::string valueDisplay;
					std::string infoType;
					std::string nameDisplay;
					std::string name;
				};
				struct EventNote
				{
					long noteId;
					std::string note;
					std::string noteTime;
				};


				DescribeSuspEventDetailResult();
				explicit DescribeSuspEventDetailResult(const std::string &payload);
				~DescribeSuspEventDetailResult();
				std::string getEventDesc()const;
				std::string getEventTypeDesc()const;
				std::string getOperateErrorCode()const;
				std::string getEventStatus()const;
				std::string getAccessCode()const;
				std::vector<EventNote> getEventNotes()const;
				std::string getEventName()const;
				std::string getSaleVersion()const;
				std::string getIntranetIp()const;
				std::string getDataSource()const;
				std::string getInstanceName()const;
				std::string getType()const;
				std::string getOperateMsg()const;
				bool getCanBeDealOnLine()const;
				std::vector<QuaraFile> getDetails()const;
				std::string getUuid()const;
				std::string getInternetIp()const;
				std::string getAlarmUniqueInfo()const;
				std::string getLevel()const;
				int getId()const;
				std::string getLastTime()const;
				std::string getSasId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string eventDesc_;
				std::string eventTypeDesc_;
				std::string operateErrorCode_;
				std::string eventStatus_;
				std::string accessCode_;
				std::vector<EventNote> eventNotes_;
				std::string eventName_;
				std::string saleVersion_;
				std::string intranetIp_;
				std::string dataSource_;
				std::string instanceName_;
				std::string type_;
				std::string operateMsg_;
				bool canBeDealOnLine_;
				std::vector<QuaraFile> details_;
				std::string uuid_;
				std::string internetIp_;
				std::string alarmUniqueInfo_;
				std::string level_;
				int id_;
				std::string lastTime_;
				std::string sasId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTDETAILRESULT_H_