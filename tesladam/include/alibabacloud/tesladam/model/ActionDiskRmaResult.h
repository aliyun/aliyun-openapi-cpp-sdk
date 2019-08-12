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

#ifndef ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMARESULT_H_
#define ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tesladam/TeslaDamExport.h>

namespace AlibabaCloud
{
	namespace TeslaDam
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLADAM_EXPORT ActionDiskRmaResult : public ServiceResult
			{
			public:


				ActionDiskRmaResult();
				explicit ActionDiskRmaResult(const std::string &payload);
				~ActionDiskRmaResult();
				bool getStatus()const;
				std::string getMessage()const;
				std::string getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool status_;
				std::string message_;
				std::string result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMARESULT_H_