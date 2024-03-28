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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTFIELDRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTFIELDRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateProjectFieldResult : public ServiceResult
			{
			public:
				struct Project
				{
					struct FieldListItem
					{
						std::string identifier;
						std::string valueType;
						std::string displayName;
						std::string value;
					};
					std::string iconBig;
					std::string identifierPath;
					std::string category;
					std::string description;
					std::string statusStageIdentifier;
					long gmtModified;
					std::string creator;
					std::string iconSmall;
					std::string name;
					std::string identifier;
					std::string logicalStatus;
					std::string iconGroup;
					std::vector<FieldListItem> fieldList;
					std::string customCode;
					std::string modifier;
					std::string typeIdentifier;
					std::string subType;
					std::string categoryIdentifier;
					std::string statusName;
					std::string parentIdentifier;
					std::string organizationIdentifier;
					long gmtCreate;
					std::string scope;
					std::string icon;
					std::string id;
					std::string statusIdentifier;
				};


				UpdateProjectFieldResult();
				explicit UpdateProjectFieldResult(const std::string &payload);
				~UpdateProjectFieldResult();
				Project getProject()const;
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Project project_;
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTFIELDRESULT_H_