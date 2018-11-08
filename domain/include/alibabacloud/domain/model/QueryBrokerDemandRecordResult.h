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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDRECORDRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDRECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryBrokerDemandRecordResult : public ServiceResult
			{
			public:
				struct BrokerDemandRecord
				{
					std::string description;
					long createTime;
					std::string bizId;
				};


				QueryBrokerDemandRecordResult();
				explicit QueryBrokerDemandRecordResult(const std::string &payload);
				~QueryBrokerDemandRecordResult();
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<BrokerDemandRecord> getData()const;
				int getTotalItemNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<BrokerDemandRecord> data_;
				int totalItemNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDRECORDRESULT_H_