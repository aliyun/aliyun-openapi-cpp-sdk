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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTERESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTERESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnUserSecDropByMinuteResult : public ServiceResult
			{
			public:
				struct RowsItem
				{
					std::string secFunc;
					int drops;
					std::string tmStr;
					std::string object;
					std::string domain;
					std::string ruleName;
				};


				DescribeDcdnUserSecDropByMinuteResult();
				explicit DescribeDcdnUserSecDropByMinuteResult(const std::string &payload);
				~DescribeDcdnUserSecDropByMinuteResult();
				int getTotalCount()const;
				std::string getDescription()const;
				int getLen()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RowsItem> getRows()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string description_;
				int len_;
				int pageSize_;
				int pageNumber_;
				std::vector<RowsItem> rows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTERESULT_H_