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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMWORKFLOWINFORESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMWORKFLOWINFORESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetWorkItemWorkFlowInfoResult : public ServiceResult
			{
			public:
				struct Workflow
				{
					struct WorkflowAction
					{
						std::string nextWorkflowStatusIdentifier;
						std::string workflowIdentifier;
						std::string workflowStatusIdentifier;
						long id;
						std::string name;
					};
					struct Statuse
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
					std::string defaultStatusIdentifier;
					std::string description;
					long gmtModified;
					std::string resourceType;
					std::string creator;
					std::string source;
					std::string name;
					long gmtCreate;
					std::vector<WorkflowAction> workflowActions;
					std::string identifier;
					std::string statusOrder;
					std::vector<Statuse> statuses;
					std::string ownerSpaceType;
					std::string ownerSpaceIdentifier;
					std::string modifier;
				};


				GetWorkItemWorkFlowInfoResult();
				explicit GetWorkItemWorkFlowInfoResult(const std::string &payload);
				~GetWorkItemWorkFlowInfoResult();
				std::string getRequestId()const;
				Workflow getWorkflow()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Workflow workflow_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMWORKFLOWINFORESULT_H_