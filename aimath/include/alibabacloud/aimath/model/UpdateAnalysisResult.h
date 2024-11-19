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

#ifndef ALIBABACLOUD_AIMATH_MODEL_UPDATEANALYSISRESULT_H_
#define ALIBABACLOUD_AIMATH_MODEL_UPDATEANALYSISRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aimath/AIMathExport.h>

namespace AlibabaCloud
{
	namespace AIMath
	{
		namespace Model
		{
			class ALIBABACLOUD_AIMATH_EXPORT UpdateAnalysisResult : public ServiceResult
			{
			public:


				UpdateAnalysisResult();
				explicit UpdateAnalysisResult(const std::string &payload);
				~UpdateAnalysisResult();
				std::string getErrMsg()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIMATH_MODEL_UPDATEANALYSISRESULT_H_