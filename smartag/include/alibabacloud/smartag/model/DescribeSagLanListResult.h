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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGLANLISTRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGLANLISTRESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSagLanListResult : public ServiceResult
			{
			public:
				struct Lan
				{
					std::string iPType;
					std::string lease;
					std::string iP;
					std::string mask;
					std::string startIp;
					std::string portName;
					std::string endIp;
				};
				struct TaskState
				{
					std::string state;
					std::string createTime;
					std::string errorCode;
					std::string errorMessage;
				};


				DescribeSagLanListResult();
				explicit DescribeSagLanListResult(const std::string &payload);
				~DescribeSagLanListResult();
				std::vector<TaskState> getTaskStates()const;
				std::vector<Lan> getLans()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TaskState> taskStates_;
				std::vector<Lan> lans_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGLANLISTRESULT_H_