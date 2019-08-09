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

#ifndef ALIBABACLOUD_CMS_MODEL_APPLYTEMPLATERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_APPLYTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT ApplyTemplateResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct AlertResult
					{
						std::string metricName;
						std::string message;
						std::string displayName;
						std::string metricNamespace;
						std::string success;
						std::string name;
					};
					std::vector<AlertResult> createAlertResults;
				};


				ApplyTemplateResult();
				explicit ApplyTemplateResult(const std::string &payload);
				~ApplyTemplateResult();
				Resource getResource()const;
				int getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Resource resource_;
				int errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_APPLYTEMPLATERESULT_H_