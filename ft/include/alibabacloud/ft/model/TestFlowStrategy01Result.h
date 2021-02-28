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

#ifndef ALIBABACLOUD_FT_MODEL_TESTFLOWSTRATEGY01RESULT_H_
#define ALIBABACLOUD_FT_MODEL_TESTFLOWSTRATEGY01RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT TestFlowStrategy01Result : public ServiceResult
			{
			public:


				TestFlowStrategy01Result();
				explicit TestFlowStrategy01Result(const std::string &payload);
				~TestFlowStrategy01Result();
				std::vector<std::string> getNames()const;
				std::vector<std::string> getList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> names_;
				std::vector<std::string> list_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_TESTFLOWSTRATEGY01RESULT_H_