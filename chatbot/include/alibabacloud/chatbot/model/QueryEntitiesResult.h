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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYENTITIESRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYENTITIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT QueryEntitiesResult : public ServiceResult
			{
			public:
				struct Entity
				{
					struct MembersItem
					{
						std::vector<std::string> synonyms;
						std::string memberName;
					};
					long entityId;
					std::string entityType;
					std::string modifyTime;
					std::string modifyUserId;
					std::string entityName;
					std::string regex;
					std::string createTime;
					std::string modifyUserName;
					std::string createUserId;
					std::string createUserName;
					std::vector<Entity::MembersItem> members;
				};


				QueryEntitiesResult();
				explicit QueryEntitiesResult(const std::string &payload);
				~QueryEntitiesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Entity> getEntities()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Entity> entities_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYENTITIESRESULT_H_