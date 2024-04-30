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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFFILTERINFORESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFFILTERINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafFilterInfoResult : public ServiceResult
			{
			public:
				struct FilterInfo
				{
					struct Field
					{
						struct Logic
						{
							struct Regexp
							{
								std::string pattern;
								std::string errMsg;
							};
							std::string type;
							std::string description;
							Regexp regexp;
							std::string symbol;
							int attributes;
							std::string tip;
							int maxLength;
						};
						std::string extendField;
						std::vector<Field::Logic> logicalSymbol;
						std::string matchField;
					};
					std::vector<FilterInfo::Field> fields;
					std::string defenseScene;
				};


				DescribeDcdnWafFilterInfoResult();
				explicit DescribeDcdnWafFilterInfoResult(const std::string &payload);
				~DescribeDcdnWafFilterInfoResult();
				std::vector<FilterInfo> getContent()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FilterInfo> content_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFFILTERINFORESULT_H_