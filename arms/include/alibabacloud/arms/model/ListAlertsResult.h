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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTALERTSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTALERTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListAlertsResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct ListAlertsItem
					{
						struct ActivitiesItem
						{
							long type;
							std::string description;
							std::string content;
							std::string time;
							std::string handlerName;
						};
						struct AlertEventsItem
						{
							std::string integrationName;
							std::string alertName;
							std::string description;
							std::string annotations;
							std::string endTime;
							std::string state;
							std::string startTime;
							std::string receiveTime;
							std::string severity;
							std::string labels;
							std::string integrationType;
							std::string generatorURL;
						};
						std::vector<ListAlertsItem::ActivitiesItem> activities;
						std::string describe;
						std::string owner;
						std::string alertName;
						std::vector<ListAlertsItem::AlertEventsItem> alertEvents;
						std::string createTime;
						std::string handler;
						std::string severity;
						long recoverTime;
						std::string dispatchRuleName;
						long alertId;
						long state;
						long acknowledgeTime;
						std::string notifyRobots;
						float dispatchRuleId;
						std::string solution;
					};
					std::vector<ListAlertsItem> listAlerts;
					long size;
					long total;
					long page;
				};


				ListAlertsResult();
				explicit ListAlertsResult(const std::string &payload);
				~ListAlertsResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTALERTSRESULT_H_