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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_LISTOUTBOUNDSTRATEGIESRESULT_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_LISTOUTBOUNDSTRATEGIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT ListOutboundStrategiesResult : public ServiceResult
			{
			public:
				struct OutboundStrategy
				{
					int status;
					int robotType;
					long creatorId;
					std::string outboundNum;
					std::string modifierName;
					std::string robotId;
					std::string extAttr;
					int process;
					int successRate;
					int resourceAllocation;
					std::string gmtCreateStr;
					std::string name;
					std::string gmtModifiedStr;
					long buId;
					std::string sceneName;
					int numType;
					std::string robotName;
					long id;
					long departmentId;
					long ruleCode;
					std::string creatorName;
					long modifierId;
				};


				ListOutboundStrategiesResult();
				explicit ListOutboundStrategiesResult(const std::string &payload);
				~ListOutboundStrategiesResult();
				std::string getMessage()const;
				std::vector<OutboundStrategy> getOutboundStrategies()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<OutboundStrategy> outboundStrategies_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_LISTOUTBOUNDSTRATEGIESRESULT_H_