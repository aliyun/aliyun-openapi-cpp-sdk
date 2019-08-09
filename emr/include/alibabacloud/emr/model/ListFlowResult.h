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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowResult : public ServiceResult
			{
			public:
				struct FlowItem
				{
					std::string status;
					long startSchedule;
					std::string categoryId;
					std::string description;
					std::string clusterId;
					long gmtModified;
					std::string projectId;
					bool periodic;
					std::string cronExpr;
					std::string name;
					std::string alertDingDingGroupBizId;
					std::string alertUserGroupBizId;
					long gmtCreate;
					std::string type;
					std::string graph;
					std::string id;
					long endSchedule;
					std::string hostName;
					bool createCluster;
					std::string alertConf;
				};


				ListFlowResult();
				explicit ListFlowResult(const std::string &payload);
				~ListFlowResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<FlowItem> getFlow()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<FlowItem> flow_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWRESULT_H_