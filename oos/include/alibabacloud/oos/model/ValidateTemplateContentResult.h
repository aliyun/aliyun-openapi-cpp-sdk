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

#ifndef ALIBABACLOUD_OOS_MODEL_VALIDATETEMPLATECONTENTRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_VALIDATETEMPLATECONTENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT ValidateTemplateContentResult : public ServiceResult
			{
			public:
				struct Task
				{
					std::string type;
					std::string description;
					std::string outputs;
					std::string properties;
					std::string name;
				};


				ValidateTemplateContentResult();
				explicit ValidateTemplateContentResult(const std::string &payload);
				~ValidateTemplateContentResult();
				std::vector<Task> getTasks()const;
				std::string getParameters()const;
				std::string getOutputs()const;
				std::string getRamRole()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Task> tasks_;
				std::string parameters_;
				std::string outputs_;
				std::string ramRole_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_VALIDATETEMPLATECONTENTRESULT_H_