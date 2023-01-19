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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKFIXDETAILSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKFIXDETAILSRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeCheckFixDetailsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Rule
					{
						struct ParamListItem
						{
							std::string enumValue;
							std::string ruleId;
							int minValue;
							std::string value;
							std::string paramDefaultValue;
							int maxValue;
							std::string paramName;
							int paramType;
							std::string paramDesc;
						};
						int defaultValue;
						int optional;
						long checkId;
						std::string ruleId;
						int value;
						std::string ruleDesc;
						std::string varName;
						std::vector<Rule::ParamListItem> paramList;
					};
					long checkId;
					std::string checkItem;
					std::string checkDesc;
					std::vector<Data::Rule> rules;
				};


				DescribeCheckFixDetailsResult();
				explicit DescribeCheckFixDetailsResult(const std::string &payload);
				~DescribeCheckFixDetailsResult();
				std::vector<Data> getCheckFixDetails()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> checkFixDetails_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKFIXDETAILSRESULT_H_