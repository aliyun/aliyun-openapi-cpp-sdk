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

#ifndef ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT CreateKeywordResult : public ServiceResult
			{
			public:
				struct ValidKeyword
				{
					std::string keyword;
					int id;
				};


				CreateKeywordResult();
				explicit CreateKeywordResult(const std::string &payload);
				~CreateKeywordResult();
				std::vector<ValidKeyword> getvalidKeywordList()const;
				std::vector<std::string> getInvalidKeywordList()const;
				int getSuccessCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ValidKeyword> validKeywordList_;
				std::vector<std::string> invalidKeywordList_;
				int successCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDRESULT_H_