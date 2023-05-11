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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTCOUNTRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTCOUNTRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeBatchResultCountResult : public ServiceResult
			{
			public:


				DescribeBatchResultCountResult();
				explicit DescribeBatchResultCountResult(const std::string &payload);
				~DescribeBatchResultCountResult();
				int getStatus()const;
				int getTotalCount()const;
				long getTaskId()const;
				int getFailedCount()const;
				int getSuccessCount()const;
				std::string getBatchType()const;
				std::string getReason()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				int totalCount_;
				long taskId_;
				int failedCount_;
				int successCount_;
				std::string batchType_;
				std::string reason_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTCOUNTRESULT_H_