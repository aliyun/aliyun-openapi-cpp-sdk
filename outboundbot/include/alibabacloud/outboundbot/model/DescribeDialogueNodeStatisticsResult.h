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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEDIALOGUENODESTATISTICSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEDIALOGUENODESTATISTICSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeDialogueNodeStatisticsResult : public ServiceResult
			{
			public:
				struct NoAnswerDialogueNode
				{
					std::string nodeName;
					std::string instanceId;
					std::string nodeId;
					int hitNum;
					int hangUpNum;
					std::string id;
					int noAnswerNum;
					std::string groupId;
				};


				DescribeDialogueNodeStatisticsResult();
				explicit DescribeDialogueNodeStatisticsResult(const std::string &payload);
				~DescribeDialogueNodeStatisticsResult();
				std::string getMessage()const;
				std::vector<NoAnswerDialogueNode> getNoAnswerDialogueNodes()const;
				std::string getInstanceId()const;
				int getHttpStatusCode()const;
				int getTotalCompleted()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<NoAnswerDialogueNode> noAnswerDialogueNodes_;
				std::string instanceId_;
				int httpStatusCode_;
				int totalCompleted_;
				std::string code_;
				bool success_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEDIALOGUENODESTATISTICSRESULT_H_