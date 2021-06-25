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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEINTENTSTATISTICSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEINTENTSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeIntentStatisticsResult : public ServiceResult
			{
			public:
				struct IntentStatisticsItem
				{
					std::string type;
					std::string intentName;
					std::string instanceId;
					int hitNum;
					int hitAfterNoAnswer;
					std::string groupId;
					std::string intentId;
				};
				struct IntentStatisticsItem1
				{
					std::string instanceId;
				};


				DescribeIntentStatisticsResult();
				explicit DescribeIntentStatisticsResult(const std::string &payload);
				~DescribeIntentStatisticsResult();
				std::vector<IntentStatisticsItem1> getIntentsAfterNoAnswer()const;
				int getGlobalIntentNum()const;
				std::vector<IntentStatisticsItem> getProcessIntents()const;
				std::string getMessage()const;
				std::string getInstanceId()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				int getProcessIntentNum()const;
				std::vector<IntentStatisticsItem> getGlobalIntents()const;
				bool getSuccess()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IntentStatisticsItem1> intentsAfterNoAnswer_;
				int globalIntentNum_;
				std::vector<IntentStatisticsItem> processIntents_;
				std::string message_;
				std::string instanceId_;
				int httpStatusCode_;
				std::string code_;
				int processIntentNum_;
				std::vector<IntentStatisticsItem> globalIntents_;
				bool success_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEINTENTSTATISTICSRESULT_H_