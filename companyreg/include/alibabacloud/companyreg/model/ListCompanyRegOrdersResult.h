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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTCOMPANYREGORDERSRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTCOMPANYREGORDERSRESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ListCompanyRegOrdersResult : public ServiceResult
			{
			public:
				struct CompanyRegOrder
				{
					std::string companyName;
					std::string aliyunOrderId;
					std::string bizInfo;
					std::string supplementBizInfo;
					std::string extend;
					long gmtModified;
					std::string bizSubCode;
					std::string bizId;
					std::string bizStatus;
				};


				ListCompanyRegOrdersResult();
				explicit ListCompanyRegOrdersResult(const std::string &payload);
				~ListCompanyRegOrdersResult();
				bool getPrePage()const;
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<CompanyRegOrder> getData()const;
				int getTotalItemNum()const;
				bool getNextPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool prePage_;
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<CompanyRegOrder> data_;
				int totalItemNum_;
				bool nextPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTCOMPANYREGORDERSRESULT_H_