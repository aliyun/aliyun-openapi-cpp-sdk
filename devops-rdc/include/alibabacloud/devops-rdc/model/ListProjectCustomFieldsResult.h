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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPROJECTCUSTOMFIELDSRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPROJECTCUSTOMFIELDSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT ListProjectCustomFieldsResult : public ServiceResult
			{
			public:
				struct CustomField
				{
					struct Value
					{
						std::string value;
						std::string id;
					};
					std::string type;
					std::vector<CustomField::Value> values;
					std::string customFieldId;
					std::string subtype;
					std::string name;
				};


				ListProjectCustomFieldsResult();
				explicit ListProjectCustomFieldsResult(const std::string &payload);
				~ListProjectCustomFieldsResult();
				std::string getErrorMsg()const;
				std::vector<CustomField> getObject()const;
				std::string getErrorCode()const;
				bool getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				std::vector<CustomField> object_;
				std::string errorCode_;
				bool successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPROJECTCUSTOMFIELDSRESULT_H_