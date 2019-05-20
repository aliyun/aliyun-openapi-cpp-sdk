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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSRESULT_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT ListNotaryInfosResult : public ServiceResult
			{
			public:
				struct NotaryInfo
				{
					std::string tmClassification;
					std::string notaryFailedReason;
					long gmtModified;
					std::string bizOrderNo;
					std::string token;
					std::string tmRegisterNo;
					int notaryStatus;
				};


				ListNotaryInfosResult();
				explicit ListNotaryInfosResult(const std::string &payload);
				~ListNotaryInfosResult();
				bool getPrePage()const;
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::string getErrorMsg()const;
				std::vector<NotaryInfo> getData()const;
				std::string getErrorCode()const;
				int getTotalItemNum()const;
				bool getNextPage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool prePage_;
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::string errorMsg_;
				std::vector<NotaryInfo> data_;
				std::string errorCode_;
				int totalItemNum_;
				bool nextPage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSRESULT_H_