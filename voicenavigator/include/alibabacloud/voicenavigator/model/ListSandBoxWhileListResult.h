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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_LISTSANDBOXWHILELISTRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_LISTSANDBOXWHILELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ListSandBoxWhileListResult : public ServiceResult
			{
			public:
				struct WhiteListItem
				{
					int isEnable;
					long gmtCreate;
					std::string uuid;
					std::string description;
					std::string instanceId;
					long gmtModified;
					std::string phoneNumber;
					std::string name;
				};


				ListSandBoxWhileListResult();
				explicit ListSandBoxWhileListResult(const std::string &payload);
				~ListSandBoxWhileListResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<WhiteListItem> getWhiteList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<WhiteListItem> whiteList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_LISTSANDBOXWHILELISTRESULT_H_