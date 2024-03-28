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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMALLFIELDSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMALLFIELDSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListWorkItemAllFieldsResult : public ServiceResult
			{
			public:
				struct Field
				{
					struct Option
					{
						std::string identifier;
						std::string displayValue;
						long position;
						std::string value;
						std::string fieldIdentifier;
						long level;
						std::string valueEn;
					};
					std::string description;
					long gmtModified;
					std::string resourceType;
					std::string creator;
					std::string linkWithService;
					bool isSystemRequired;
					bool isShowWhenCreate;
					std::string name;
					std::string defaultValue;
					long gmtCreate;
					std::string type;
					std::string identifier;
					std::string format;
					bool isRequired;
					std::vector<Field::Option> options;
					std::string className;
					std::string modifier;
				};


				ListWorkItemAllFieldsResult();
				explicit ListWorkItemAllFieldsResult(const std::string &payload);
				~ListWorkItemAllFieldsResult();
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				std::vector<Field> getfields()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				std::vector<Field> fields_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMALLFIELDSRESULT_H_