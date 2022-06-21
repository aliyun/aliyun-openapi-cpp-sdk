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

#ifndef ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETRESULT_H_
#define ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/amptest/AmpTestExport.h>

namespace AlibabaCloud
{
	namespace AmpTest
	{
		namespace Model
		{
			class ALIBABACLOUD_AMPTEST_EXPORT HuichengetResult : public ServiceResult
			{
			public:


				HuichengetResult();
				explicit HuichengetResult(const std::string &payload);
				~HuichengetResult();
				std::string getApple()const;
				std::string getFive()const;
				std::string getSix()const;
				std::string getMessage()const;
				std::string getInstanceId4()const;
				std::string getSeven()const;
				std::string getCode()const;
				std::string getAge()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string apple_;
				std::string five_;
				std::string six_;
				std::string message_;
				std::string instanceId4_;
				std::string seven_;
				std::string code_;
				std::string age_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETRESULT_H_