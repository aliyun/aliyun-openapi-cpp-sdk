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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_QUERYCREATEINSTANCEPRICERESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_QUERYCREATEINSTANCEPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT QueryCreateInstancePriceResult : public ServiceResult
			{
			public:
				struct Rule
				{
					long ruleId;
					std::string title;
					std::string name;
				};


				QueryCreateInstancePriceResult();
				explicit QueryCreateInstancePriceResult(const std::string &payload);
				~QueryCreateInstancePriceResult();
				std::string getOrigin()const;
				std::string getDiscount()const;
				std::string getAmount()const;
				std::string getCurrency()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string origin_;
				std::string discount_;
				std::string amount_;
				std::string currency_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_QUERYCREATEINSTANCEPRICERESULT_H_