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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTUSERINTENTIONNOTESRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTUSERINTENTIONNOTESRESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ListUserIntentionNotesResult : public ServiceResult
			{
			public:
				struct OpateLogs
				{
					std::string createTime;
					std::string note;
				};


				ListUserIntentionNotesResult();
				explicit ListUserIntentionNotesResult(const std::string &payload);
				~ListUserIntentionNotesResult();
				int getPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<OpateLogs> getData()const;
				int getTotalItemNum()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<OpateLogs> data_;
				int totalItemNum_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTUSERINTENTIONNOTESRESULT_H_