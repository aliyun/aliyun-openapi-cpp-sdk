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

#ifndef ALIBABACLOUD_LTL_MODEL_LISTMPCOSPHASEHISTORYRESULT_H_
#define ALIBABACLOUD_LTL_MODEL_LISTMPCOSPHASEHISTORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ltl/LtlExport.h>

namespace AlibabaCloud
{
	namespace Ltl
	{
		namespace Model
		{
			class ALIBABACLOUD_LTL_EXPORT ListMPCoSPhaseHistoryResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct HistoryDataInfo
					{
						std::string iotId;
						std::string dataValue;
						std::string blockHash;
						std::string dataSeq;
						std::string previousHash;
						std::string transactionHash;
						long blockNumber;
						long timestamp;
						std::string productKey;
						std::string dataHash;
					};
					std::vector<HistoryDataInfo> pageData;
					int size;
					int num;
					int total;
				};


				ListMPCoSPhaseHistoryResult();
				explicit ListMPCoSPhaseHistoryResult(const std::string &payload);
				~ListMPCoSPhaseHistoryResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LTL_MODEL_LISTMPCOSPHASEHISTORYRESULT_H_