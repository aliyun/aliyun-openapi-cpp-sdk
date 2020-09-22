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

#ifndef ALIBABACLOUD_VS_MODEL_UNBINDTEMPLATERESULT_H_
#define ALIBABACLOUD_VS_MODEL_UNBINDTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT UnbindTemplateResult : public ServiceResult
			{
			public:


				UnbindTemplateResult();
				explicit UnbindTemplateResult(const std::string &payload);
				~UnbindTemplateResult();
				std::string getInstanceId()const;
				std::string getTemplateType()const;
				std::string getInstanceType()const;
				std::string getTemplateId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceId_;
				std::string templateType_;
				std::string instanceType_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_UNBINDTEMPLATERESULT_H_