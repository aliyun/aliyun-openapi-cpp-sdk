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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGPORTLISTRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGPORTLISTRESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSagPortListResult : public ServiceResult
			{
			public:
				struct Port
				{
					std::string status;
					std::string role;
					std::string vlan;
					std::string portName;
					std::string mac;
				};
				struct TaskState
				{
					std::string state;
					std::string createTime;
					std::string errorCode;
					std::string errorMessage;
				};


				DescribeSagPortListResult();
				explicit DescribeSagPortListResult(const std::string &payload);
				~DescribeSagPortListResult();
				std::vector<Port> getPorts()const;
				std::vector<TaskState> getTaskStates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Port> ports_;
				std::vector<TaskState> taskStates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGPORTLISTRESULT_H_