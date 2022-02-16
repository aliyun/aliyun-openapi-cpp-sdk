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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListFlowInstanceResult : public ServiceResult
			{
			public:
				struct FlowInstance
				{
					std::string status;
					bool hasNodeFailed;
					std::string owner;
					long endTime;
					std::string clusterId;
					long gmtModified;
					std::string projectId;
					long startTime;
					long duration;
					std::string flowId;
					long gmtCreate;
					long scheduleTime;
					std::string flowName;
					std::string id;
				};


				ListFlowInstanceResult();
				explicit ListFlowInstanceResult(const std::string &payload);
				~ListFlowInstanceResult();
				std::vector<FlowInstance> getFlowInstances()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FlowInstance> flowInstances_;
				int pageSize_;
				int pageNumber_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWINSTANCERESULT_H_