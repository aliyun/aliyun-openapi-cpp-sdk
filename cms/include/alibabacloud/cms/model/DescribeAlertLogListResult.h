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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeAlertLogListResult : public ServiceResult
			{
			public:
				struct Alarm
				{
					struct SendDetail
					{
						struct ChannelResult
						{
							struct Result
							{
								std::string requestId;
								std::vector<std::string> notifyTargetList;
								std::string code;
								bool success;
								std::string detail;
							};
							std::vector<ChannelResult::Result> resultList;
							std::string channel;
						};
						std::vector<ChannelResult> channelResultList;
						std::string resultCode;
					};
					struct Escalation
					{
						std::string expression;
						int times;
						std::string level;
					};
					struct ExtInfo
					{
						std::string value;
						std::string name;
					};
					struct DimensionsItem
					{
						std::string value;
						std::string key;
					};
					struct WebhookListItem
					{
						std::string message;
						std::string code;
						std::string url;
					};
					struct SendResult
					{
						std::vector<std::string> value;
						std::string key;
					};
					std::string groupName;
					std::vector<std::string> contactALIIWWList;
					std::string message;
					Escalation escalation;
					std::string ruleId;
					std::string sendStatus;
					std::string product;
					std::string metricName;
					std::vector<std::string> contactSMSList;
					SendDetail sendDetail;
					std::vector<Alarm::SendResult> sendResultList;
					std::string ruleName;
					std::vector<std::string> contactGroups;
					std::vector<std::string> dingdingWebhookList;
					std::string instanceId;
					std::string blackListName;
					std::vector<Alarm::DimensionsItem> dimensions;
					std::string blackListUUID;
					std::string levelChange;
					std::vector<std::string> contactOnCallList;
					std::string _namespace;
					std::vector<std::string> contactDingList;
					std::string eventName;
					std::vector<Alarm::ExtInfo> extendedInfo;
					std::string alertTime;
					std::string groupId;
					std::string instanceName;
					std::vector<Alarm::WebhookListItem> webhookList;
					std::string blackListDetail;
					std::vector<std::string> contactMailList;
					std::string level;
				};


				DescribeAlertLogListResult();
				explicit DescribeAlertLogListResult(const std::string &payload);
				~DescribeAlertLogListResult();
				std::vector<Alarm> getAlertLogList()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Alarm> alertLogList_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTRESULT_H_