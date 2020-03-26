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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYTAGGROUPSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYTAGGROUPSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ModifyTagGroupsResult : public ServiceResult
			{
			public:
				struct TagGroup
				{
					int tagGroupIndex;
					std::string tagGroup;
					std::string tagGroupId;
					std::string scriptId;
				};
				struct Tag
				{
					int tagIndex;
					std::string tagName;
					std::string tagGroup;
					std::string tagId;
					std::string scriptId;
				};


				ModifyTagGroupsResult();
				explicit ModifyTagGroupsResult(const std::string &payload);
				~ModifyTagGroupsResult();
				std::string getMessage()const;
				std::vector<TagGroup> getTagGroups()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				std::vector<Tag> getTags()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<TagGroup> tagGroups_;
				int httpStatusCode_;
				std::string code_;
				std::vector<Tag> tags_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYTAGGROUPSRESULT_H_