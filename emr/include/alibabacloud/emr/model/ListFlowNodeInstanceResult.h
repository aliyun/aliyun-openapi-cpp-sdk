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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowNodeInstanceResult : public ServiceResult
			{
			public:
				struct FlowNodeInstance
				{
					std::string failAct;
					long endTime;
					std::string nodeName;
					long gmtModified;
					std::string jobName;
					std::string flowId;
					std::string externalStatus;
					std::string externalInfo;
					int retries;
					std::string jobId;
					std::string jobParams;
					std::string hostName;
					std::string status;
					std::string clusterId;
					std::string externalId;
					std::string projectId;
					long startTime;
					std::string flowInstanceId;
					long duration;
					std::string maxRetry;
					std::string externalSubId;
					long gmtCreate;
					std::string type;
					std::string jobType;
					std::string externalChildIds;
					std::string id;
					std::string retryInterval;
					bool pending;
				};


				ListFlowNodeInstanceResult();
				explicit ListFlowNodeInstanceResult(const std::string &payload);
				~ListFlowNodeInstanceResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<FlowNodeInstance> getFlowNodeInstances()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<FlowNodeInstance> flowNodeInstances_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWNODEINSTANCERESULT_H_