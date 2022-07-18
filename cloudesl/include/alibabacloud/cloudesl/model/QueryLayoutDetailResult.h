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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTDETAILRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT QueryLayoutDetailResult : public ServiceResult
			{
			public:


				QueryLayoutDetailResult();
				explicit QueryLayoutDetailResult(const std::string &payload);
				~QueryLayoutDetailResult();
				std::string getDescription()const;
				std::string getMessage()const;
				std::string getEslModelId()const;
				long getLayoutId()const;
				std::string getTemplateVersion()const;
				std::string getDynamicMessage()const;
				std::string getBrandId()const;
				std::string getCode()const;
				long getLayoutTemplateId()const;
				bool getSuccess()const;
				std::string getLayoutName()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string message_;
				std::string eslModelId_;
				long layoutId_;
				std::string templateVersion_;
				std::string dynamicMessage_;
				std::string brandId_;
				std::string code_;
				long layoutTemplateId_;
				bool success_;
				std::string layoutName_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string errorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTDETAILRESULT_H_