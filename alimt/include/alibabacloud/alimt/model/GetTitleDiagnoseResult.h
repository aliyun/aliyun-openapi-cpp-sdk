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

#ifndef ALIBABACLOUD_ALIMT_MODEL_GETTITLEDIAGNOSERESULT_H_
#define ALIBABACLOUD_ALIMT_MODEL_GETTITLEDIAGNOSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alimt/AlimtExport.h>

namespace AlibabaCloud
{
	namespace Alimt
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIMT_EXPORT GetTitleDiagnoseResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string noFirstUppercaseList;
					std::string containCoreClasses;
					std::string disableWords;
					std::string wordCount;
					std::string overLengthLimit;
					std::string totalScore;
					std::string duplicateWords;
					std::string languageQualityScore;
					std::string allUppercaseWords;
					std::string wordSpelledCorrectError;
				};


				GetTitleDiagnoseResult();
				explicit GetTitleDiagnoseResult(const std::string &payload);
				~GetTitleDiagnoseResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIMT_MODEL_GETTITLEDIAGNOSERESULT_H_