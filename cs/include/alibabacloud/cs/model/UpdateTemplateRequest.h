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

#ifndef ALIBABACLOUD_CS_MODEL_UPDATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_UPDATETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT UpdateTemplateRequest : public RoaServiceRequest
			{

			public:
				UpdateTemplateRequest();
				~UpdateTemplateRequest();

				std::string get_Template()const;
				void set_Template(const std::string& _template);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTemplate_type()const;
				void setTemplate_type(const std::string& template_type);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string _template_;
				std::string name_;
				std::string description_;
				std::string template_type_;
				std::string templateId_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_UPDATETEMPLATEREQUEST_H_