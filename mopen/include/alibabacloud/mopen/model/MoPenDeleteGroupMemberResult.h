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

#ifndef ALIBABACLOUD_MOPEN_MODEL_MOPENDELETEGROUPMEMBERRESULT_H_
#define ALIBABACLOUD_MOPEN_MODEL_MOPENDELETEGROUPMEMBERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mopen/MoPenExport.h>

namespace AlibabaCloud
{
	namespace MoPen
	{
		namespace Model
		{
			class ALIBABACLOUD_MOPEN_EXPORT MoPenDeleteGroupMemberResult : public ServiceResult
			{
			public:


				MoPenDeleteGroupMemberResult();
				explicit MoPenDeleteGroupMemberResult(const std::string &payload);
				~MoPenDeleteGroupMemberResult();
				std::string getDescription()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOPEN_MODEL_MOPENDELETEGROUPMEMBERRESULT_H_