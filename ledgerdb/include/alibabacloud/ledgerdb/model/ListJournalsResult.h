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

#ifndef ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSRESULT_H_
#define ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSRESULT_H_

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
			class ALIBABACLOUD_LEDGERDB_EXPORT ListJournalsResult : public ServiceResult
			{
			public:
				struct Journal
				{
					std::string memberId;
					std::string journalId;
					std::string clientId;
					std::vector<std::string> clues;
					std::string ledgerId;
					std::string journalHash;
					long timestamp;
					std::string payloadType;
					std::string payloadJsonString;
				};


				ListJournalsResult();
				explicit ListJournalsResult(const std::string &payload);
				~ListJournalsResult();
				std::string getNextToken()const;
				std::vector<Journal> getJournals()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Journal> journals_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LEDGERDB_MODEL_LISTJOURNALSRESULT_H_