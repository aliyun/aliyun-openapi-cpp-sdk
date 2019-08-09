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

#ifndef ALIBABACLOUD_CCC_MODEL_GETINSTANCESTATERESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETINSTANCESTATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetInstanceStateResult : public ServiceResult
			{
			public:
				struct RealTimeInstanceState
				{
					struct AgentStateCount
					{
						std::string state;
						long count;
					};
					std::vector<AgentStateCount> agentStateDistributions;
				};


				GetInstanceStateResult();
				explicit GetInstanceStateResult(const std::string &payload);
				~GetInstanceStateResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				RealTimeInstanceState getRealTimeInstanceState()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				RealTimeInstanceState realTimeInstanceState_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETINSTANCESTATERESULT_H_