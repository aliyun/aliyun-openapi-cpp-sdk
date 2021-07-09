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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTTASKFLOWSTATUSRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTTASKFLOWSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT ListDevopsProjectTaskFlowStatusResult : public ServiceResult
			{
			public:
				struct TaskflowStatus
				{
					bool isDeleted;
					std::string taskflowId;
					std::string rejectStatusIds;
					std::string updated;
					int pos;
					std::string creatorId;
					std::string kind;
					std::string id;
					std::string name;
					std::string created;
				};


				ListDevopsProjectTaskFlowStatusResult();
				explicit ListDevopsProjectTaskFlowStatusResult(const std::string &payload);
				~ListDevopsProjectTaskFlowStatusResult();
				std::string getErrorMsg()const;
				std::vector<TaskflowStatus> getObject()const;
				std::string getErrorCode()const;
				bool getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				std::vector<TaskflowStatus> object_;
				std::string errorCode_;
				bool successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTTASKFLOWSTATUSRESULT_H_