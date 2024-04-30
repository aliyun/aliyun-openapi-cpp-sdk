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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPRESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafGroupResult : public ServiceResult
			{
			public:
				struct RuleItem
				{
					int applicationType;
					std::string description;
					int protectionType;
					std::string gmtModified;
					std::string cveId;
					long id;
					int riskLevel;
					std::string name;
					std::string cveUrl;
				};


				DescribeDcdnWafGroupResult();
				explicit DescribeDcdnWafGroupResult(const std::string &payload);
				~DescribeDcdnWafGroupResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				long getId()const;
				std::string getSubscribe()const;
				std::vector<RuleItem> getRules()const;
				long getTemplateId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				long id_;
				std::string subscribe_;
				std::vector<RuleItem> rules_;
				long templateId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPRESULT_H_