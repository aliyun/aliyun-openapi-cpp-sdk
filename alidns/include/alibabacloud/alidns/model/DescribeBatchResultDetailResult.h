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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeBatchResultDetailResult : public ServiceResult
			{
			public:
				struct BatchResultDetail
				{
					bool status;
					std::string rr;
					std::string operateDateStr;
					std::string priority;
					std::string rrStatus;
					std::string ttl;
					std::string batchType;
					std::string reason;
					std::string remark;
					std::string line;
					std::string type;
					std::string value;
					std::string newValue;
					std::string newRr;
					std::string recordId;
					std::string domain;
				};


				DescribeBatchResultDetailResult();
				explicit DescribeBatchResultDetailResult(const std::string &payload);
				~DescribeBatchResultDetailResult();
				std::vector<BatchResultDetail> getBatchResultDetails()const;
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<BatchResultDetail> batchResultDetails_;
				long totalCount_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILRESULT_H_