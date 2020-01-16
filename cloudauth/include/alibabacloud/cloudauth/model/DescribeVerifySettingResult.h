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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYSETTINGRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeVerifySettingResult : public ServiceResult
			{
			public:
				struct VerifySetting
				{
					std::vector<std::string> stepList;
					std::string bizType;
					std::string bizName;
					std::string solution;
				};


				DescribeVerifySettingResult();
				explicit DescribeVerifySettingResult(const std::string &payload);
				~DescribeVerifySettingResult();
				std::vector<VerifySetting> getVerifySettingList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VerifySetting> verifySettingList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYSETTINGRESULT_H_