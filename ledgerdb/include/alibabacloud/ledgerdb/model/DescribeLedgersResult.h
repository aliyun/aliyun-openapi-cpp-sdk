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

#ifndef ALIBABACLOUD_LEDGERDB_MODEL_DESCRIBELEDGERSRESULT_H_
#define ALIBABACLOUD_LEDGERDB_MODEL_DESCRIBELEDGERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ledgerdb/LedgerdbExport.h>

namespace AlibabaCloud
{
	namespace Ledgerdb
	{
		namespace Model
		{
			class ALIBABACLOUD_LEDGERDB_EXPORT DescribeLedgersResult : public ServiceResult
			{
			public:
				struct Ledger
				{
					struct LastTimeAnchor
					{
						std::string ledgerDigest;
						std::string journalId;
						std::string ledgerDigestType;
						std::string proof;
						std::string ledgerVersion;
						std::string timeStamp;
					};
					long journalCount;
					std::string zoneId;
					long timeAnchorCount;
					std::string createTime;
					long memberCount;
					std::string ledgerId;
					LastTimeAnchor lastTimeAnchor;
					std::string ledgerDescription;
					std::string ownerAliUid;
					std::string ledgerType;
					std::string updateTime;
					std::string regionId;
					std::string ledgerStatus;
					std::string ledgerName;
				};


				DescribeLedgersResult();
				explicit DescribeLedgersResult(const std::string &payload);
				~DescribeLedgersResult();
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Ledger> getLedgers()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				int maxResults_;
				std::vector<Ledger> ledgers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LEDGERDB_MODEL_DESCRIBELEDGERSRESULT_H_