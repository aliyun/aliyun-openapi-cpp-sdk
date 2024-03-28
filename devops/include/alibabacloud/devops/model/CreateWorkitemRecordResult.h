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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRECORDRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT CreateWorkitemRecordResult : public ServiceResult
			{
			public:
				struct WorkitemTime
				{
					struct RecordUser
					{
						std::string account;
						std::string email;
						std::string stamp;
						std::string displayRealName;
						bool isDisabled;
						std::string nickNamePinyin;
						std::string gender;
						std::string nickName;
						std::string mobile;
						std::string avatar;
						std::string displayNickName;
						std::string dingTalkId;
						std::string identifier;
						std::string nameEn;
						std::string realNamePinyin;
						std::string displayName;
						std::string realName;
						std::string tbRoleId;
					};
					long gmtStart;
					long gmtEnd;
					std::string workitemIdentifier;
					std::string type;
					std::string identifier;
					std::string description;
					long actualTime;
					RecordUser recordUser;
				};


				CreateWorkitemRecordResult();
				explicit CreateWorkitemRecordResult(const std::string &payload);
				~CreateWorkitemRecordResult();
				std::string getRequestId()const;
				WorkitemTime getWorkitemTime()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				WorkitemTime workitemTime_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRECORDRESULT_H_