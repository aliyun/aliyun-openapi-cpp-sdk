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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGWAN4GRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGWAN4GRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSagWan4GResult : public ServiceResult
			{
			public:


				DescribeSagWan4GResult();
				explicit DescribeSagWan4GResult(const std::string &payload);
				~DescribeSagWan4GResult();
				std::string getStatus()const;
				std::string getTrafficState()const;
				int getPriority()const;
				std::string getIp()const;
				std::string getStrength()const;
				std::string getMac()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string trafficState_;
				int priority_;
				std::string ip_;
				std::string strength_;
				std::string mac_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGWAN4GRESULT_H_