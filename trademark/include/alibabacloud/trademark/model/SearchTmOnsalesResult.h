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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT SearchTmOnsalesResult : public ServiceResult
			{
			public:
				struct Trademark
				{
					long status;
					std::string uid;
					std::string trademarkName;
					std::string productCode;
					std::string classification;
					long orderPrice;
					std::string productDesc;
					std::string registrationNumber;
					std::string icon;
					std::string partnerCode;
				};


				SearchTmOnsalesResult();
				explicit SearchTmOnsalesResult(const std::string &payload);
				~SearchTmOnsalesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Trademark> getTrademarks()const;
				int getTotalPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Trademark> trademarks_;
				int totalPageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESRESULT_H_