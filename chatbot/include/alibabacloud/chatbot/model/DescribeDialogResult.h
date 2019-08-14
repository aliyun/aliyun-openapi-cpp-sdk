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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeDialogResult : public ServiceResult
			{
			public:


				DescribeDialogResult();
				explicit DescribeDialogResult(const std::string &payload);
				~DescribeDialogResult();
				int getStatus()const;
				std::string getModifyTime()const;
				std::string getDialogName()const;
				std::string getDescription()const;
				std::string getModifyUserId()const;
				std::string getCreateTime()const;
				std::string getModifyUserName()const;
				long getDialogId()const;
				std::string getCreateUserId()const;
				std::string getCreateUserName()const;
				bool getIsSampleDialog()const;
				bool getIsOnline()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				std::string modifyTime_;
				std::string dialogName_;
				std::string description_;
				std::string modifyUserId_;
				std::string createTime_;
				std::string modifyUserName_;
				long dialogId_;
				std::string createUserId_;
				std::string createUserName_;
				bool isSampleDialog_;
				bool isOnline_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGRESULT_H_