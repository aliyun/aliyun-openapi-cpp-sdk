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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETAGHITSSUMMARYRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETAGHITSSUMMARYRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeTagHitsSummaryResult : public ServiceResult
			{
			public:
				struct TagGroup
				{
					int tagGroupIndex;
					std::string tagGroup;
					std::string scriptId;
					std::string id;
				};
				struct TagHits
				{
					std::string tagName;
					int hitCount;
					std::string tagGroup;
				};


				DescribeTagHitsSummaryResult();
				explicit DescribeTagHitsSummaryResult(const std::string &payload);
				~DescribeTagHitsSummaryResult();
				std::string getMessage()const;
				std::vector<TagGroup> getTagGroups()const;
				int getHttpStatusCode()const;
				std::vector<TagHits> getTagHitsList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<TagGroup> tagGroups_;
				int httpStatusCode_;
				std::vector<TagHits> tagHitsList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETAGHITSSUMMARYRESULT_H_