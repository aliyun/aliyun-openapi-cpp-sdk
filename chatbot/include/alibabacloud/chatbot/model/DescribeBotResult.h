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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEBOTRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEBOTRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeBotResult : public ServiceResult
			{
			public:
				struct Category
				{
					long categoryId;
					long parentCategoryId;
					std::string name;
				};


				DescribeBotResult();
				explicit DescribeBotResult(const std::string &payload);
				~DescribeBotResult();
				std::string getLanguageCode()const;
				std::string getTimeZone()const;
				std::vector<Category> getCategories()const;
				std::string getInstanceId()const;
				std::string getIntroduction()const;
				std::string getCreateTime()const;
				std::string getAvatar()const;
				std::string getName()const;
				std::string getLogo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string languageCode_;
				std::string timeZone_;
				std::vector<Category> categories_;
				std::string instanceId_;
				std::string introduction_;
				std::string createTime_;
				std::string avatar_;
				std::string name_;
				std::string logo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEBOTRESULT_H_