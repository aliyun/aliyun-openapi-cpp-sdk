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

#ifndef ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFORESULT_H_
#define ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/jarvis-public/Jarvis_publicExport.h>

namespace AlibabaCloud
{
	namespace Jarvis_public
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_PUBLIC_EXPORT DescribePhoneInfoResult : public ServiceResult
			{
			public:


				DescribePhoneInfoResult();
				explicit DescribePhoneInfoResult(const std::string &payload);
				~DescribePhoneInfoResult();
				long getPhoneNum()const;
				std::string getDetectTime()const;
				std::string getModule()const;
				long getRiskLevel()const;

			protected:
				void parse(const std::string &payload);
			private:
				long phoneNum_;
				std::string detectTime_;
				std::string module_;
				long riskLevel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFORESULT_H_