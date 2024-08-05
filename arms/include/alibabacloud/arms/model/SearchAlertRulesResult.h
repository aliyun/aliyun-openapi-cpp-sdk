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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT SearchAlertRulesResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct AlertRuleEntity
					{
						struct AlarmContext
						{
							std::string alarmContentTemplate;
							std::string alarmContentSubTitle;
							std::string content;
							std::string subTitle;
						};
						struct AlertRule
						{
							struct Rule
							{
								int nValue;
								std::string aggregates;
								std::string alias;
								std::string measure;
								float value;
								std::string _operator;
							};
							std::string _operator;
							std::vector<Rule> rules;
						};
						struct MetricParam
						{
							struct Dimension
							{
								std::string type;
								std::string value;
								std::string key;
							};
							std::string type;
							std::string appId;
							std::string appGroupId;
							std::vector<Dimension> dimensions;
							std::string pid;
						};
						struct Notice
						{
							long endTime;
							long noticeStartTime;
							long startTime;
							long noticeEndTime;
						};
						std::string status;
						bool hostByAlertManager;
						MetricParam metricParam;
						int alertVersion;
						long taskId;
						std::string resourceGroupId;
						std::string contactGroupIds;
						std::string config;
						long createTime;
						std::vector<std::string> alertWays;
						std::string title;
						std::string taskStatus;
						AlarmContext alarmContext;
						std::vector<std::string> alertWay;
						int alertType;
						std::string contactGroupIdList;
						Notice notice;
						std::string userId;
						long updateTime;
						std::string alertTitle;
						std::string alertLevel;
						std::string regionId;
						long id;
						AlertRule alertRule;
					};
					int totalCount;
					int pageSize;
					std::vector<AlertRuleEntity> alertRules;
					int pageNumber;
				};


				SearchAlertRulesResult();
				explicit SearchAlertRulesResult(const std::string &payload);
				~SearchAlertRulesResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESRESULT_H_