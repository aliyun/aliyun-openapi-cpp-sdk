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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListWorkItemWorkFlowStatusResult : public ServiceResult
			{
			public:
				struct Status
				{
					long gmtCreate;
					std::string identifier;
					std::string description;
					long gmtModified;
					std::string resourceType;
					std::string workflowStageName;
					std::string workflowStageIdentifier;
					std::string creator;
					std::string modifier;
					std::string source;
					std::string name;
				};


				ListWorkItemWorkFlowStatusResult();
				explicit ListWorkItemWorkFlowStatusResult(const std::string &payload);
				~ListWorkItemWorkFlowStatusResult();
				std::string getRequestId()const;
				std::vector<Status> getstatuses()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::vector<Status> statuses_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSRESULT_H_