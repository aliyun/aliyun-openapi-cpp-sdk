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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeWorkflowResult : public ServiceResult
			{
			public:
				struct WorkFlowInfos
				{
					std::string gmtStart;
					std::string status;
					std::string instanceId;
					std::string priority;
					std::string workerNode;
					std::string bizType;
					std::string duration;
					std::string workflowId;
					std::string initAttributes;
					std::string name;
					std::string gmtEnd;
					std::string gmtCreate;
					std::string gmtExpire;
					std::string gmtModify;
					std::string id;
					std::string ensRegionId;
					std::string bussinessId;
					std::string aliUid;
				};


				DescribeWorkflowResult();
				explicit DescribeWorkflowResult(const std::string &payload);
				~DescribeWorkflowResult();
				std::vector<WorkFlowInfos> getWorkFlowInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<WorkFlowInfos> workFlowInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWRESULT_H_