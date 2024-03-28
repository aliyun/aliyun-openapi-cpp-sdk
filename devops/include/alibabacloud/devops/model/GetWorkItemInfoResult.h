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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMINFORESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMINFORESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetWorkItemInfoResult : public ServiceResult
			{
			public:
				struct Workitem
				{
					struct CustomField
					{
						struct Value
						{
							std::string identifier;
							std::string displayValue;
							std::string value;
							long level;
							std::string valueEn;
						};
						std::string workitemIdentifier;
						std::string objectValue;
						long position;
						std::string fieldClassName;
						std::vector<CustomField::Value> valueList;
						std::string value;
						std::string fieldIdentifier;
						std::string fieldFormat;
						long level;
					};
					struct TagDetailsItem
					{
						std::string identifier;
						std::string color;
						std::string name;
					};
					std::vector<std::string> tracker;
					std::string statusStageIdentifier;
					std::string spaceName;
					std::vector<CustomField> customFields;
					long gmtModified;
					std::string creator;
					std::string document;
					std::vector<std::string> verifier;
					std::string identifier;
					long finishTime;
					std::vector<TagDetailsItem> tagDetails;
					std::string spaceType;
					std::string logicalStatus;
					std::string modifier;
					std::string status;
					std::string categoryIdentifier;
					std::string parentIdentifier;
					std::string subject;
					std::string assignedTo;
					long updateStatusAt;
					std::string workitemTypeIdentifier;
					long gmtCreate;
					std::string serialNumber;
					std::vector<std::string> participant;
					std::string spaceIdentifier;
					std::vector<std::string> sprint;
					std::vector<std::string> tag;
					std::string statusIdentifier;
				};


				GetWorkItemInfoResult();
				explicit GetWorkItemInfoResult(const std::string &payload);
				~GetWorkItemInfoResult();
				Workitem getWorkitem()const;
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Workitem workitem_;
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMINFORESULT_H_