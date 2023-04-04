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

#ifndef ALIBABACLOUD_AVATAR_MODEL_CANCELVIDEOTASKRESULT_H_
#define ALIBABACLOUD_AVATAR_MODEL_CANCELVIDEOTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/avatar/AvatarExport.h>

namespace AlibabaCloud
{
	namespace Avatar
	{
		namespace Model
		{
			class ALIBABACLOUD_AVATAR_EXPORT CancelVideoTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					bool isCancel;
					std::string taskUuid;
					std::string failReason;
				};


				CancelVideoTaskResult();
				explicit CancelVideoTaskResult(const std::string &payload);
				~CancelVideoTaskResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AVATAR_MODEL_CANCELVIDEOTASKRESULT_H_