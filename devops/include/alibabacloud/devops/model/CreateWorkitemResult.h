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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT CreateWorkitemResult : public ServiceResult
			{
			public:
				struct Workitem
				{
					std::string status;
					std::string statusStageIdentifier;
					std::string spaceName;
					std::string categoryIdentifier;
					long gmtModified;
					std::string creator;
					std::string document;
					std::string parentIdentifier;
					std::string subject;
					std::string assignedTo;
					long updateStatusAt;
					std::string workitemTypeIdentifier;
					long gmtCreate;
					std::string identifier;
					std::string serialNumber;
					std::string spaceIdentifier;
					std::string spaceType;
					std::string logicalStatus;
					std::string sprintIdentifier;
					std::string modifier;
					std::string statusIdentifier;
				};


				CreateWorkitemResult();
				explicit CreateWorkitemResult(const std::string &payload);
				~CreateWorkitemResult();
				Workitem getWorkitem()const;
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Workitem workitem_;
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMRESULT_H_