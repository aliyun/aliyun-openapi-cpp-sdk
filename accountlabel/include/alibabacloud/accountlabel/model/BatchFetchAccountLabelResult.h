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

#ifndef ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELRESULT_H_
#define ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/accountlabel/AccountLabelExport.h>

namespace AlibabaCloud
{
	namespace AccountLabel
	{
		namespace Model
		{
			class ALIBABACLOUD_ACCOUNTLABEL_EXPORT BatchFetchAccountLabelResult : public ServiceResult
			{
			public:
				struct AccountLabelInfoDto
				{
					std::string labelSeries;
					long endTime;
					long kp;
					long gmtModified;
					std::string label;
					long startTime;
					std::string creator;
					long gmtCreated;
				};


				BatchFetchAccountLabelResult();
				explicit BatchFetchAccountLabelResult(const std::string &payload);
				~BatchFetchAccountLabelResult();
				std::string getMessage()const;
				std::vector<AccountLabelInfoDto> getData()const;
				long getCount()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<AccountLabelInfoDto> data_;
				long count_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELRESULT_H_