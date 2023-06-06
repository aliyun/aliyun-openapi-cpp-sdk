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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeCheckWarningDetailResult : public ServiceResult
			{
			public:
				struct CheckDetailColumn
				{
					struct Grid
					{
						std::string type;
						std::string showName;
						std::string key;
					};
					std::vector<CheckDetailColumn::Grid> grids;
					std::string type;
					std::string showName;
					std::string key;
				};


				DescribeCheckWarningDetailResult();
				explicit DescribeCheckWarningDetailResult(const std::string &payload);
				~DescribeCheckWarningDetailResult();
				std::string getItem()const;
				std::string getType()const;
				std::vector<CheckDetailColumn> getCheckDetailColumns()const;
				std::string getDescription()const;
				long getCheckId()const;
				std::vector<std::string> getCheckDetailAssetInfo()const;
				std::string getLevel()const;
				std::string getPrompt()const;
				std::string getAdvice()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string item_;
				std::string type_;
				std::vector<CheckDetailColumn> checkDetailColumns_;
				std::string description_;
				long checkId_;
				std::vector<std::string> checkDetailAssetInfo_;
				std::string level_;
				std::string prompt_;
				std::string advice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGDETAILRESULT_H_