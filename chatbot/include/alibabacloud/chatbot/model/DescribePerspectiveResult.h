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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVERESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVERESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT DescribePerspectiveResult : public ServiceResult
			{
			public:


				DescribePerspectiveResult();
				explicit DescribePerspectiveResult(const std::string &payload);
				~DescribePerspectiveResult();
				int getStatus()const;
				std::string getModifyTime()const;
				std::string getPerspectiveCode()const;
				bool getSelfDefine()const;
				std::string getCreateTime()const;
				std::string getModifyUserName()const;
				std::string getPerspectiveId()const;
				std::string getCreateUserName()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				std::string modifyTime_;
				std::string perspectiveCode_;
				bool selfDefine_;
				std::string createTime_;
				std::string modifyUserName_;
				std::string perspectiveId_;
				std::string createUserName_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVERESULT_H_