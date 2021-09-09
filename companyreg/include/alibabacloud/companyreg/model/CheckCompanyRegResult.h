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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_CHECKCOMPANYREGRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_CHECKCOMPANYREGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT CheckCompanyRegResult : public ServiceResult
			{
			public:
				struct Company
				{
					std::string companyName;
					std::string level;
				};


				CheckCompanyRegResult();
				explicit CheckCompanyRegResult(const std::string &payload);
				~CheckCompanyRegResult();
				std::string getMatchSensitive()const;
				std::string getMatchCity()const;
				std::string getMatchBrand()const;
				std::string getLevel()const;
				std::vector<Company> getSimilarCompanies()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string matchSensitive_;
				std::string matchCity_;
				std::string matchBrand_;
				std::string level_;
				std::vector<Company> similarCompanies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_CHECKCOMPANYREGRESULT_H_